// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMTFETCHAUTOMATEDDEVICEENROLLMENTPREREQUISITESRESULTOBJECT_H
#define DMTFETCHAUTOMATEDDEVICEENROLLMENTPREREQUISITESRESULTOBJECT_H

@class CATTaskResultObject, NSString;



@interface DMTFetchAutomatedDeviceEnrollmentPrerequisitesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *deviceUDID; // ivar: _deviceUDID
@property (copy, nonatomic) NSString *modelIdentifier; // ivar: _modelIdentifier
@property (copy, nonatomic) NSString *modelName; // ivar: _modelName
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif