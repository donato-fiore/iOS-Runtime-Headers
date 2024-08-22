// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTLOCATION_H
#define RTLOCATION_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTLocation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat altitude; // ivar: _altitude
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) CGFloat horizontalUncertainty; // ivar: _horizontalUncertainty
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (readonly, nonatomic) int referenceFrame; // ivar: _referenceFrame
@property (readonly, nonatomic) NSUInteger sourceAccuracy; // ivar: _sourceAccuracy
@property (readonly, nonatomic) CGFloat speed; // ivar: _speed
@property (readonly, nonatomic) CGFloat uncertainty;
@property (readonly, nonatomic) CGFloat verticalUncertainty; // ivar: _verticalUncertainty


+(BOOL)supportsSecureCoding;
+(id)sourceAccuracyToString:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLocation:(id)arg0 ;
-(NSUInteger)hash;
-(id)coordinateToString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 horizontalUncertainty:(CGFloat)arg2 altitude:(CGFloat)arg3 verticalUncertainty:(CGFloat)arg4 date:(id)arg5 referenceFrame:(int)arg6 speed:(CGFloat)arg7 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 horizontalUncertainty:(CGFloat)arg2 altitude:(CGFloat)arg3 verticalUncertainty:(CGFloat)arg4 date:(id)arg5 referenceFrame:(int)arg6 speed:(CGFloat)arg7 sourceAccuracy:(NSUInteger)arg8 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 horizontalUncertainty:(CGFloat)arg2 date:(id)arg3 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 horizontalUncertainty:(CGFloat)arg2 date:(id)arg3 referenceFrame:(int)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif