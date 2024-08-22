// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMMAGNETOMETERDATA_H
#define CMMAGNETOMETERDATA_H



#import "CMLogItem.h"

@interface CMMagnetometerData : CMLogItem {
    id *_internal;
}


@property (readonly, nonatomic) ? magneticField;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMagneticField:(struct ? )arg0 andTimestamp:(CGFloat)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif