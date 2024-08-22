// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMTPERFORMAUTOMATEDDEVICEENROLLMENTOPERATION_H
#define DMTPERFORMAUTOMATEDDEVICEENROLLMENTOPERATION_H

@protocol DMTEnrollmentInitiating, DMTEnrollmentPrerequisiteReceiving;


#import "DMTTaskOperation.h"

@interface DMTPerformAutomatedDeviceEnrollmentOperation : DMTTaskOperation

@property (readonly, nonatomic) NSObject<DMTEnrollmentInitiating> *enrollmentInitiator; // ivar: _enrollmentInitiator
@property (readonly, nonatomic) NSObject<DMTEnrollmentPrerequisiteReceiving> *prerequisiteReceiver; // ivar: _prerequisiteReceiver


+(BOOL)validateRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithRequest:(id)arg0 prerequisiteReceiver:(id)arg1 enrollmentInitiator:(id)arg2 ;
-(void)runWithRequest:(id)arg0 ;


@end


#endif