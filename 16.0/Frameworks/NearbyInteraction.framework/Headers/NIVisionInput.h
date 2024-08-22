// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NIVISIONINPUT_H
#define NIVISIONINPUT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NIVisionInput : NSObject <NSCopying, NSSecureCoding>



@property (readonly) ? devicePose; // ivar: _devicePose
@property (readonly) CGFloat lightEstimate; // ivar: _lightEstimate
@property (readonly) BOOL majorRelocalization; // ivar: _majorRelocalization
@property (readonly) BOOL minorRelocalization; // ivar: _minorRelocalization
@property (readonly) CGFloat timestamp; // ivar: _timestamp
@property (readonly) NSInteger trackingState; // ivar: _trackingState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 devicePose:(struct ? )arg1 trackingState:(NSInteger)arg2 lightEstimate:(CGFloat)arg3 majorRelocalization:(BOOL)arg4 minorRelocalization:(BOOL)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)overrideTimestamp:(CGFloat)arg0 ;


@end


#endif