// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCENERESIZEFLUIDGESTUREWORKSPACETRANSACTION_H
#define SBSCENERESIZEFLUIDGESTUREWORKSPACETRANSACTION_H

@class NSString;
@protocol SBSceneLayoutWorkspaceTransactionObserver;


#import "SBFluidSwitcherGestureWorkspaceTransaction.h"

@interface SBSceneResizeFluidGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction <SBSceneLayoutWorkspaceTransactionObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)_gestureType;
-(id)layoutState;
-(id)selectedAppLayout;
-(void)_willAddChildTransaction:(id)arg0 ;


@end


#endif