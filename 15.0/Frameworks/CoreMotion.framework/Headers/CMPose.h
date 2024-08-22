// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMPOSE_H
#define CMPOSE_H



#import "CMLogItem.h"
#import "CMAttitude.h"

@interface CMPose : CMLogItem {
    id *_internal;
}


@property (readonly, nonatomic) CMAttitude *attitude;
@property (readonly, nonatomic) CGFloat consumedAuxTimestamp;
@property (readonly, nonatomic) CGFloat machAbsTimestamp;
@property (readonly, nonatomic) CGFloat receivedAuxTimestamp;
@property (readonly, nonatomic) ? translation;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPose:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPose:(struct ? )arg0 timestamp:(CGFloat)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif