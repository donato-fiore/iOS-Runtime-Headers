// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMGYRODATA_H
#define CMGYRODATA_H



#import "CMLogItem.h"

@interface CMGyroData : CMLogItem {
    id *_internal;
}


@property (readonly, nonatomic) ? rotationRate;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRotationRate:(struct ? )arg0 andTimestamp:(CGFloat)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif