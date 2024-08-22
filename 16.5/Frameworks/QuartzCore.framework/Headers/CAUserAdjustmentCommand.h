// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAUSERADJUSTMENTCOMMAND_H
#define CAUSERADJUSTMENTCOMMAND_H


#import <Foundation/Foundation.h>

#import "CAUserAdjustment.h"

@interface CAUserAdjustmentCommand : NSObject

@property (readonly) CGFloat maxLuminanceScale; // ivar: _maxLuminanceScale
@property (readonly) CGFloat maxXDelta; // ivar: _maxXDelta
@property (readonly) CGFloat maxYDelta; // ivar: _maxYDelta
@property (readonly) CGFloat minLuminanceScale; // ivar: _minLuminanceScale
@property (readonly) CGFloat minXDelta; // ivar: _minXDelta
@property (readonly) CGFloat minYDelta; // ivar: _minYDelta
@property (readonly) CAUserAdjustment *userAdjustment; // ivar: _userAdjustment


-(BOOL)transformWhitePointByXDelta:(CGFloat)arg0 yDelta:(CGFloat)arg1 luminanceScale:(CGFloat)arg2 ;
-(id)initWithUserAdjustment:(id)arg0 ;
-(void)dealloc;


@end


#endif