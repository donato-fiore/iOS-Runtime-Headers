// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRDEVICEPROPERTYDIFFTYPE_H
#define NRDEVICEPROPERTYDIFFTYPE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NRDevicePropertyDiff.h"
#import "NRPBDevicePropertyDiffType.h"

@interface NRDevicePropertyDiffType : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger changeType; // ivar: _changeType
@property (readonly, nonatomic) NRDevicePropertyDiff *diff; // ivar: _diff
@property (readonly, nonatomic) NRPBDevicePropertyDiffType *protobuf;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDiff:(id)arg0 andChangeType:(NSUInteger)arg1 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif