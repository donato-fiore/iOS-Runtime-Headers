// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISHARESERVICEACTIVITYPROXY_H
#define _UISHARESERVICEACTIVITYPROXY_H

@class NSUUID, NSString, NSURL;

#import <Foundation/Foundation.h>

#import "UISUIActivityExtensionItemDataRequest.h"

@interface _UIShareServiceActivityProxy : NSObject {
    NSUUID *_activityUUID;
    NSString *_activityType;
    NSInteger _activityCategory;
    UISUIActivityExtensionItemDataRequest *_underlyingActivityItemDataRequest;
    Class _remoteClass;
    CGSize _thumbnailSize;
    NSURL *_representationCacheURL;
}


@property (copy, nonatomic) id *didFinishPerformingActivityHandler; // ivar: _didFinishPerformingActivityHandler
@property (copy, nonatomic) id *didFinishPreparingForExecution; // ivar: _didFinishPreparingForExecution


+(id)activityProxyForServiceActivityDataRequest:(id)arg0 ;
+(void)forwardInvocation:(id)arg0 ;
-(BOOL)_activitySupportsPromiseURLs;
-(BOOL)_dismissActivityFromViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_isExecutedInProcess;
-(BOOL)_managesOwnPresentation;
-(BOOL)_needsResolvedActivityItems;
-(BOOL)_presentActivityOnViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_wantsAttachmentURLItemData;
-(BOOL)_wantsInitialSocialText;
-(BOOL)_wantsThumbnailItemData;
-(BOOL)allowsEmbedding;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(id)_embeddedActivityViewController;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)activityUUID;
-(id)activityViewController;
-(id)initWithUnderlyingActivityItemDataRequest:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(struct CGSize )_thumbnailSize;
-(void)_cleanup;
-(void)_loadItemProvidersFromActivityItems:(id)arg0 completion:(id)arg1 ;
-(void)_prepareWithActivityItems:(id)arg0 completion:(id)arg1 ;
-(void)_willBePerformedOrPresented;
-(void)activityDidFinish:(BOOL)arg0 ;
-(void)activityDidFinish:(BOOL)arg0 items:(id)arg1 error:(id)arg2 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif