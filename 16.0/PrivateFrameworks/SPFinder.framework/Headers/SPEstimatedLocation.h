// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPESTIMATEDLOCATION_H
#define SPESTIMATEDLOCATION_H

@class NSNumber, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPEstimatedLocation : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat altitude; // ivar: _altitude
@property (nonatomic) CGFloat course; // ivar: _course
@property (nonatomic) CGFloat courseAccuracy; // ivar: _courseAccuracy
@property (copy, nonatomic) NSNumber *floorLevel; // ivar: _floorLevel
@property (nonatomic) CGFloat horizontalAccuracy; // ivar: _horizontalAccuracy
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (nonatomic) CGFloat speedAccuracy; // ivar: _speedAccuracy
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (nonatomic) CGFloat verticalAccuracy; // ivar: _verticalAccuracy


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(id)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 horizontalAccuracy:(CGFloat)arg3 altitude:(CGFloat)arg4 verticalAccuracy:(CGFloat)arg5 speed:(CGFloat)arg6 speedAccuracy:(CGFloat)arg7 course:(CGFloat)arg8 courseAccuracy:(CGFloat)arg9 floorLevel:(id)arg10 ;
-(id)initWithTimestamp:(id)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 horizontalAcuracy:(CGFloat)arg3 ;
-(id)initWithTimestamp:(id)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 horizontalAcuracy:(CGFloat)arg3 altitude:(CGFloat)arg4 verticalAccuracy:(CGFloat)arg5 speed:(CGFloat)arg6 speedAccuracy:(CGFloat)arg7 course:(CGFloat)arg8 courseAccuracy:(CGFloat)arg9 floorLevel:(id)arg10 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif