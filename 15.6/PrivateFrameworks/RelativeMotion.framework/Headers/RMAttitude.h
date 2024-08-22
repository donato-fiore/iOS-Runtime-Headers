// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMATTITUDE_H
#define RMATTITUDE_H



#import "RMLogItem.h"

@interface RMAttitude : RMLogItem

@property (readonly, nonatomic) ? quaternion; // ivar: _quaternion


+(BOOL)supportsSecureCoding;
-(id)_initWithQuaternion:(struct ? )arg0 timestamp:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif