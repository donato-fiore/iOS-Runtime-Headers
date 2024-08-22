// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFETCHDEVICEPROPERTIESREQUEST_H
#define CRKFETCHDEVICEPROPERTIESREQUEST_H

@class CATTaskRequest, NSArray;



@interface CRKFetchDevicePropertiesRequest : CATTaskRequest

@property (copy, nonatomic) NSArray *propertyKeys; // ivar: _propertyKeys


+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif