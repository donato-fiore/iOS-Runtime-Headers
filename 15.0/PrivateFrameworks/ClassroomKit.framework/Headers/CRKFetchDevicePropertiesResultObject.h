// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKFETCHDEVICEPROPERTIESRESULTOBJECT_H
#define CRKFETCHDEVICEPROPERTIESRESULTOBJECT_H

@class CATTaskResultObject, NSDictionary;



@interface CRKFetchDevicePropertiesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *errorsByPropertyKey; // ivar: _errorsByPropertyKey
@property (copy, nonatomic) NSDictionary *valuesByPropertyKey; // ivar: _valuesByPropertyKey


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)valueForPropertyKey:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif