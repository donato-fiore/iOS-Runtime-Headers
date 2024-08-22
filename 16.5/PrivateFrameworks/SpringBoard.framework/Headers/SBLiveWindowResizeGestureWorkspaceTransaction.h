// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLIVEWINDOWRESIZEGESTUREWORKSPACETRANSACTION_H
#define SBLIVEWINDOWRESIZEGESTUREWORKSPACETRANSACTION_H



#import "SBFluidSwitcherGestureWorkspaceTransaction.h"

@interface SBLiveWindowResizeGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction

@property (readonly, nonatomic) NSUInteger selectedEdge; // ivar: _selectedEdge
@property (readonly, nonatomic) NSInteger selectedLayoutRole; // ivar: _selectedLayoutRole


-(BOOL)isLiveResize;
-(NSInteger)_gestureType;
-(void)_beginWithGesture:(id)arg0 ;


@end


#endif