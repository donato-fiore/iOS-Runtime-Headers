// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISCENESNAPSHOTBSACTIONSHANDLER_H
#define _UISCENESNAPSHOTBSACTIONSHANDLER_H

@class NSString;
@protocol _UISceneBSActionHandler;

#import <Foundation/Foundation.h>


@interface _UISceneSnapshotBSActionsHandler : NSObject <_UISceneBSActionHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsAsyncSnapshot;
@property (readonly, nonatomic) BOOL wantsOwnAssertion;


-(id)_respondToActions:(id)arg0 forFBSScene:(id)arg1 inUIScene:(id)arg2 fromTransitionContext:(id)arg3 ;


@end


#endif