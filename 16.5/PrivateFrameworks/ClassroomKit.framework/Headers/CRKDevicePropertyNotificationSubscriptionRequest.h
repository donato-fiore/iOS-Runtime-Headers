// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKDEVICEPROPERTYNOTIFICATIONSUBSCRIPTIONREQUEST_H
#define CRKDEVICEPROPERTYNOTIFICATIONSUBSCRIPTIONREQUEST_H

@class CATTaskRequest, NSArray;



@interface CRKDevicePropertyNotificationSubscriptionRequest : CATTaskRequest

@property (copy, nonatomic) NSArray *propertyKeys; // ivar: _propertyKeys


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif