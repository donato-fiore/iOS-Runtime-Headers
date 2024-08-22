// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TALOCATIONLITE_H
#define TALOCATIONLITE_H

@class NSString, NSDate;
@protocol TAEventProtocol;

#import <Foundation/Foundation.h>


@interface TALocationLite : NSObject <TAEventProtocol>



@property (readonly, nonatomic) CGFloat altitude; // ivar: _altitude
@property (readonly, nonatomic) CGFloat course; // ivar: _course
@property (readonly, nonatomic) CGFloat courseAccuracy; // ivar: _courseAccuracy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat deltaDistance; // ivar: _deltaDistance
@property (readonly, nonatomic) CGFloat deltaDistanceAccuracy; // ivar: _deltaDistanceAccuracy
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat groundAltitude; // ivar: _groundAltitude
@property (readonly, nonatomic) CGFloat groundAltitudeUncertainty; // ivar: _groundAltitudeUncertainty
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat horizontalAccuracy; // ivar: _horizontalAccuracy
@property (readonly, nonatomic) BOOL isSimulatedOrSpoofed; // ivar: _isSimulatedOrSpoofed
@property (readonly, nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) CGFloat longitude; // ivar: _longitude
@property (readonly, nonatomic) CGFloat pressure; // ivar: _pressure
@property (readonly, nonatomic) CGFloat pressureUncertainty; // ivar: _pressureUncertainty
@property (readonly, nonatomic) CGFloat speed; // ivar: _speed
@property (readonly, nonatomic) CGFloat speedAccuracy; // ivar: _speedAccuracy
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, nonatomic) CGFloat verticalAccuracy; // ivar: _verticalAccuracy


+(BOOL)distanceFromLocation:(id)arg0 toLocation:(id)arg1 satisfyNSigma:(NSUInteger)arg2 satisfyMinDistance:(CGFloat)arg3 ;
+(BOOL)supportsSecureCoding;
+(CGFloat)residualDistanceFromLocation:(id)arg0 toLocation:(id)arg1 nSigma:(NSUInteger)arg2 ;
+(struct ? )estimateSpeedFrom:(id)arg0 to:(id)arg1 ;
-(BOOL)distanceToLocation:(id)arg0 satisfyNSigma:(NSUInteger)arg1 satisfyMinDistance:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)distanceFromLocation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(id)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 horizontalAccuracy:(CGFloat)arg3 ;
-(id)initWithTimestamp:(id)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 horizontalAccuracy:(CGFloat)arg3 altitude:(CGFloat)arg4 verticalAccuracy:(CGFloat)arg5 speed:(CGFloat)arg6 speedAccuracy:(CGFloat)arg7 course:(CGFloat)arg8 courseAccuracy:(CGFloat)arg9 deltaDistance:(CGFloat)arg10 deltaDistanceAccuracy:(CGFloat)arg11 groundAltitude:(CGFloat)arg12 groundAltitudeUncertainty:(CGFloat)arg13 pressure:(CGFloat)arg14 pressureUncertainty:(CGFloat)arg15 isSimulatedOrSpoofed:(BOOL)arg16 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithOSLogCoder:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;


@end


#endif