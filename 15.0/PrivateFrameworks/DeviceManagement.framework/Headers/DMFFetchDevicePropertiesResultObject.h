// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFFETCHDEVICEPROPERTIESRESULTOBJECT_H
#define DMFFETCHDEVICEPROPERTIESRESULTOBJECT_H

@class CATTaskResultObject, NSDictionary;


#import "DMFDevice.h"

@interface DMFFetchDevicePropertiesResultObject : CATTaskResultObject

@property (readonly, nonatomic) DMFDevice *device;
@property (readonly, copy, nonatomic) NSDictionary *errorsByPropertyKey; // ivar: _errorsByPropertyKey
@property (readonly, copy, nonatomic) NSDictionary *valuesByPropertyKey; // ivar: _valuesByPropertyKey


+(BOOL)supportsSecureCoding;
-(Class)classForCoder;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValuesByPropertyKey:(id)arg0 errorsByPropertyKey:(id)arg1 ;
-(id)valueForPropertyKey:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif