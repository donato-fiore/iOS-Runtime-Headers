// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXQUICKLOOKPREVIEWVIEWCONTROLLER_H
#define SXQUICKLOOKPREVIEWVIEWCONTROLLER_H

@class QLPreviewController, NSString;
@protocol QLPreviewControllerPrivateDelegate, QLPreviewControllerDataSource, SXMediaSharingPolicyProvider;


#import "SXQuickLookFile.h"
#import "SXQuickLookTransitionContext.h"

@interface SXQuickLookPreviewViewController : QLPreviewController <QLPreviewControllerPrivateDelegate, QLPreviewControllerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXQuickLookFile *file; // ivar: _file
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXMediaSharingPolicyProvider> *mediaSharingPolicyProvider; // ivar: _mediaSharingPolicyProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXQuickLookTransitionContext *transitionContext; // ivar: _transitionContext


-(BOOL)previewController:(id)arg0 canShareItem:(id)arg1 ;
-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(id)initWithFile:(id)arg0 mediaSharingPolicyProvider:(id)arg1 transitionContext:(id)arg2 ;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;
-(id)previewController:(id)arg0 transitionViewForPreviewItem:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif