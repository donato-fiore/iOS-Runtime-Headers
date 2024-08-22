// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRDEVICEPROPERTYDIFF_H
#define NRDEVICEPROPERTYDIFF_H

@protocol NSObject><NSCopying;


#import "NRDiffBase.h"
#import "NRPBDevicePropertyDiff.h"

@interface NRDevicePropertyDiff : NRDiffBase

@property (readonly, nonatomic) NRPBDevicePropertyDiff *protobuf;
@property (readonly, nonatomic) NSObject<NSObject><NSCopying> *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)enclosedClassTypes;
+(id)packPropertyValue:(id)arg0 ;
+(id)unpackPropertyValue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithValue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif