// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSLINEARMOVEMENTDEBUGVIEWLINEELEMENT_H
#define _UIFOCUSLINEARMOVEMENTDEBUGVIEWLINEELEMENT_H


#import <Foundation/Foundation.h>


@interface _UIFocusLinearMovementDebugViewLineElement : NSObject

@property (readonly, nonatomic) CGPoint cp1; // ivar: _cp1
@property (readonly, nonatomic) CGPoint cp2; // ivar: _cp2
@property (readonly, nonatomic) CGPoint point; // ivar: _point
@property (readonly, nonatomic) int type; // ivar: _type


+(id)elementWithCGPathElement:(struct CGPathElement *)arg0 ;
-(id)initWithType:(int)arg0 point:(struct CGPoint )arg1 cp1:(struct CGPoint )arg2 cp2:(struct CGPoint )arg3 ;


@end


#endif