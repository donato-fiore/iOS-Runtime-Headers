// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISCENEFOCUSMOVEMENTBSACTIONSHANDLER_H
#define _UISCENEFOCUSMOVEMENTBSACTIONSHANDLER_H

@class NSMutableDictionary, NSString;
@protocol _UISceneBSActionHandler;

#import <Foundation/Foundation.h>


@interface _UISceneFocusMovementBSActionsHandler : NSObject <_UISceneBSActionHandler>

 {
    NSMutableDictionary *_pendingFocusMovementActions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_respondToActions:(id)arg0 forFBSScene:(id)arg1 inUIScene:(id)arg2 fromTransitionContext:(id)arg3 ;
-(id)init;
-(void)_focusSystemSceneComponentDidPerformInitialSetupNotification:(id)arg0 ;


@end


#endif