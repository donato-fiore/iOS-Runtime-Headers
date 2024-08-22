// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMABSOLUTEALTITUDEDATA_H
#define CMABSOLUTEALTITUDEDATA_H

@class NSNumber;


#import "CMLogItem.h"

@interface CMAbsoluteAltitudeData : CMLogItem {
    CGFloat _altitudePrivate;
}


@property (readonly, nonatomic) NSNumber *absoluteAltitude;
@property (readonly, nonatomic) CGFloat absoluteAltitudeAccuracy; // ivar: _absoluteAltitudeAccuracy
@property (readonly, nonatomic) CGFloat absoluteAltitudePrecision; // ivar: _absoluteAltitudePrecision
@property (readonly, nonatomic) NSInteger absoluteAltitudeStatusInfo; // ivar: _absoluteAltitudeStatusInfo
@property (readonly, nonatomic) CGFloat accuracy; // ivar: _accuracy
@property (readonly, nonatomic) CGFloat altitude; // ivar: _altitude
@property (readonly, nonatomic) CGFloat precision; // ivar: _precision


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAltitude:(CGFloat)arg0 accuracy:(CGFloat)arg1 precision:(CGFloat)arg2 status:(NSInteger)arg3 timestamp:(CGFloat)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif