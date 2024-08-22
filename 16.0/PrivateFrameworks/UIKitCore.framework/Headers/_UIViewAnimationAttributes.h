// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVIEWANIMATIONATTRIBUTES_H
#define _UIVIEWANIMATIONATTRIBUTES_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding>

 {
    NSUInteger _options;
    CAFrameRateRange _preferredFrameRateRange;
    unsigned int _updateReason;
}


@property (readonly, nonatomic, getter=_curve) NSInteger curve;
@property (readonly, nonatomic, getter=_delay) CGFloat delay; // ivar: _delay
@property (readonly, nonatomic, getter=_duration) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic, getter=_frameInterval) CGFloat frameInterval;
@property (readonly, nonatomic, getter=_hasSpringAttributes) BOOL hasSpringAttributes; // ivar: _hasSpringAttributes
@property (readonly, nonatomic, getter=_preferredFrameRateRange) CAFrameRateRange preferredFrameRateRange;
@property (readonly, nonatomic, getter=_springDamping) CGFloat springDamping; // ivar: _springDamping
@property (readonly, nonatomic, getter=_springMass) CGFloat springMass; // ivar: _springMass
@property (readonly, nonatomic, getter=_springStiffness) CGFloat springStiffness; // ivar: _springStiffness
@property (readonly, nonatomic, getter=_springVelocity) CGFloat springVelocity; // ivar: _springVelocity
@property (readonly, nonatomic, getter=_updateReason) unsigned int updateReason;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif