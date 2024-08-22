// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLSHAREABLECONTENTACTIONHANDLER_H
#define SLSHAREABLECONTENTACTIONHANDLER_H

@class NSString;
@protocol _UISceneBSActionHandler;

#import <Foundation/Foundation.h>


@interface SLShareableContentActionHandler : NSObject <_UISceneBSActionHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedActionHandler;
-(id)_respondToActions:(id)arg0 forFBSScene:(id)arg1 inUIScene:(id)arg2 fromTransitionContext:(id)arg3 ;
-(id)activityItemsConfigurationForScene:(id)arg0 ;
-(id)activityItemsConfigurationForSceneWithIdentifier:(id)arg0 ;
-(id)sceneWithIdentifier:(id)arg0 ;
-(void)performAction:(id)arg0 ;
-(void)performActions:(id)arg0 ;
-(void)performFetchShareableContentAction:(id)arg0 ;
-(void)performFetchShareableContentMetadataAction:(id)arg0 ;
-(void)performSendShareableContentAction:(id)arg0 ;


@end


#endif