// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMALTITUDEDATA_H
#define CMALTITUDEDATA_H

@class NSNumber;


#import "CMLogItem.h"

@interface CMAltitudeData : CMLogItem {
    id *_internal;
}


@property (readonly, nonatomic) NSNumber *pressure;
@property (readonly, nonatomic) NSNumber *relativeAltitude;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAltitude:(float)arg0 andTimestamp:(CGFloat)arg1 atBaseAltitude:(float)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 pressure:(float)arg1 relativeAltitude:(float)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif