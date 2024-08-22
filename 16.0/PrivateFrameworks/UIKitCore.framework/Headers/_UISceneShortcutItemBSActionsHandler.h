// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISCENESHORTCUTITEMBSACTIONSHANDLER_H
#define _UISCENESHORTCUTITEMBSACTIONSHANDLER_H

@class NSString;
@protocol _UISceneBSActionHandler;

#import <Foundation/Foundation.h>


@interface _UISceneShortcutItemBSActionsHandler : NSObject <_UISceneBSActionHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_launchOptionsFromActions:(id)arg0 forFBSScene:(id)arg1 uiSceneSession:(id)arg2 transitionContext:(id)arg3 ;
-(id)_respondToActions:(id)arg0 forFBSScene:(id)arg1 inUIScene:(id)arg2 fromTransitionContext:(id)arg3 ;


@end


#endif