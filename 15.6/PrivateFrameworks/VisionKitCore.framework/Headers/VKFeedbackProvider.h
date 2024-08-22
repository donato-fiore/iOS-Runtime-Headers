// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKFEEDBACKPROVIDER_H
#define VKFEEDBACKPROVIDER_H

@class NSDictionary, NSURL, NSMutableArray, NSString, NSError, UIViewController;
@protocol VKFeedbackProviderViewControllerDelegate, VKFeedbackAssetsProvider;

#import <Foundation/Foundation.h>

#import "VKFeedbackAttachment.h"
#import "VKImageAnalysis.h"
#import "VKImageAnalyzerRequest.h"

@interface VKFeedbackProvider : NSObject <VKFeedbackProviderViewControllerDelegate>

 {
    NSUInteger _type;
    NSDictionary *_metadata;
    NSURL *_attachmentsFolderURL;
    NSMutableArray *_screenshots;
    VKFeedbackAttachment *_requestAssetAttachment;
    VKFeedbackAttachment *_analysisArchiveAttachment;
    id *_userResponseHandler;
}


@property (retain, nonatomic) NSObject<VKFeedbackAssetsProvider> *assetsProvider; // ivar: _assetsProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) VKImageAnalysis *imageAnalysis; // ivar: _imageAnalysis
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) VKImageAnalyzerRequest *request;
@property (readonly) Class superclass;


-(id)_jsonRepresentationForAttributesDictionary:(id)arg0 ;
-(id)init;
-(void)_captureScreenshots;
-(void)_saveFeedbackAttributesJSON:(id)arg0 ;
-(void)_saveImage:(id)arg0 withName:(id)arg1 ;
-(void)_saveScreenshots;
-(void)feedbackProviderViewController:(id)arg0 submitWithOptions:(NSUInteger)arg1 attachments:(id)arg2 ;
-(void)feedbackProviderViewControllerDidCancel:(id)arg0 ;
-(void)provideFeedbackWithType:(NSUInteger)arg0 ;
-(void)provideFeedbackWithType:(NSUInteger)arg0 consentPresentingView:(id)arg1 ;
-(void)provideFeedbackWithType:(NSUInteger)arg0 options:(NSUInteger)arg1 metadata:(id)arg2 consentPresentingView:(id)arg3 ;
-(void)provideFeedbackWithType:(NSUInteger)arg0 options:(NSUInteger)arg1 metadata:(id)arg2 promisedAttachments:(id)arg3 userResponseHandler:(id)arg4 ;


@end


#endif