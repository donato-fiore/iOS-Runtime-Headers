// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRMUTABLEDEVICEPROPERTY_H
#define NRMUTABLEDEVICEPROPERTY_H

@protocol NSObject><NSCopying;


#import "NRMutableStateBase.h"
#import "NRPBMutableDeviceProperty.h"

@interface NRMutableDeviceProperty : NRMutableStateBase

@property (retain, nonatomic) NRPBMutableDeviceProperty *protobuf; // ivar: _protobuf
@property (readonly, retain, nonatomic) NSObject<NSObject><NSCopying> *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)diffFrom:(id)arg0 to:(id)arg1 ;
+(id)enclosedClassTypes;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)applyDiff:(id)arg0 upOnly:(BOOL)arg1 notifyParent:(BOOL)arg2 unconditional:(BOOL)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithValue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif