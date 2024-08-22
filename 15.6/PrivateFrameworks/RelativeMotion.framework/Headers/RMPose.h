// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMPOSE_H
#define RMPOSE_H



#import "RMLogItem.h"
#import "RMAttitude.h"

@interface RMPose : RMLogItem

@property (readonly, nonatomic) RMAttitude *attitude; // ivar: _attitude
@property (readonly, nonatomic) CGFloat consumedAuxTimestamp; // ivar: _consumedAuxTimestamp
@property (nonatomic) CGFloat machAbsTimestamp; // ivar: _machAbsTimestamp
@property (readonly, nonatomic) CGFloat receivedAuxTimestamp; // ivar: _receivedAuxTimestamp


+(BOOL)supportsSecureCoding;
-(id)_initWithAttitude:(id)arg0 consumedAuxTimestamp:(CGFloat)arg1 receivedAuxTimestamp:(CGFloat)arg2 machAbsTimestamp:(CGFloat)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif