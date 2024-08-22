// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARDYNAMICSPLITAVOIDANCEDATA_H
#define _UISTATUSBARDYNAMICSPLITAVOIDANCEDATA_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UIStatusBarDynamicSplitAvoidanceData : NSObject

@property (retain, nonatomic) NSMutableDictionary *avoidanceFrameAbsoluteFrames; // ivar: _avoidanceFrameAbsoluteFrames
@property (nonatomic) CGFloat leadingDelta; // ivar: _leadingDelta
@property (nonatomic) CGFloat trailingDelta; // ivar: _trailingDelta


-(id)init;
-(id)initWithLeadingDelta:(CGFloat)arg0 trailingDelta:(CGFloat)arg1 ;


@end


#endif