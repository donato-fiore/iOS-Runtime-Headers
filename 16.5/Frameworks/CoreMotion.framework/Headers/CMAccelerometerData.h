// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMACCELEROMETERDATA_H
#define CMACCELEROMETERDATA_H



#import "CMLogItem.h"

@interface CMAccelerometerData : CMLogItem {
    id *_internal;
}


@property (readonly, nonatomic) ? acceleration;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAcceleration:(struct ? )arg0 andTimestamp:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif