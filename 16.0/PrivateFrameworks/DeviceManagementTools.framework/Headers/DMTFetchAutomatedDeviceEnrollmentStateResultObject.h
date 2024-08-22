// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMTFETCHAUTOMATEDDEVICEENROLLMENTSTATERESULTOBJECT_H
#define DMTFETCHAUTOMATEDDEVICEENROLLMENTSTATERESULTOBJECT_H

@class CATTaskResultObject;



@interface DMTFetchAutomatedDeviceEnrollmentStateResultObject : CATTaskResultObject

@property (nonatomic) NSInteger enrollmentState; // ivar: _enrollmentState


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif