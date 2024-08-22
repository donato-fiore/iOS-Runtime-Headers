// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLSHAREABLECONTENTACTIONHANDLER_H
#define SLSHAREABLECONTENTACTIONHANDLER_H


#import <Foundation/Foundation.h>


@interface SLShareableContentActionHandler : NSObject



+(id)sharedActionHandler;
-(id)activityItemsConfigurationForScene:(id)arg0 ;
-(id)activityItemsConfigurationForSceneWithIdentifier:(id)arg0 ;
-(id)respondToBSActions:(id)arg0 ;
-(id)sceneWithIdentifier:(id)arg0 ;
-(id)titleForActivityItemsConfiguration:(id)arg0 ;
-(void)fulfillContentAction:(id)arg0 itemProvider:(id)arg1 ;
-(void)fulfillMetadataAction:(id)arg0 itemProvider:(id)arg1 linkMetadata:(id)arg2 ;
-(void)fulfillMetadataAction:(id)arg0 itemProvider:(id)arg1 linkMetadata:(id)arg2 highlightURL:(id)arg3 initiatorRequest:(id)arg4 ;
-(void)fulfillMetadataAction:(id)arg0 itemProvider:(id)arg1 linkMetadata:(id)arg2 inPlaceFileURL:(id)arg3 ;
-(void)fulfillMetadataAction:(id)arg0 itemProvider:(id)arg1 linkMetadata:(id)arg2 pendingCollaboration:(id)arg3 ;
-(void)fulfillMetadataAction:(id)arg0 itemProvider:(id)arg1 linkMetadata:(id)arg2 sharingContext:(id)arg3 ;
-(void)fulfillMetadataAction:(id)arg0 response:(id)arg1 ;
-(void)performAction:(id)arg0 ;
-(void)performActions:(id)arg0 ;
-(void)performFetchShareableContentAction:(id)arg0 ;
-(void)performFetchShareableContentMetadataAction:(id)arg0 ;
-(void)performSendShareableContentAction:(id)arg0 ;


@end


#endif