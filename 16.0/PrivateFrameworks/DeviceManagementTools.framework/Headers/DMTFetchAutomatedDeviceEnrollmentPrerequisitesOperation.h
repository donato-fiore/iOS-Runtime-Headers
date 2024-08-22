// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMTFETCHAUTOMATEDDEVICEENROLLMENTPREREQUISITESOPERATION_H
#define DMTFETCHAUTOMATEDDEVICEENROLLMENTPREREQUISITESOPERATION_H

@protocol DMTDeviceInformationPrimitives;


#import "DMTTaskOperation.h"

@interface DMTFetchAutomatedDeviceEnrollmentPrerequisitesOperation : DMTTaskOperation

@property (readonly, nonatomic) NSObject<DMTDeviceInformationPrimitives> *deviceInformationPrimitives; // ivar: _deviceInformationPrimitives


+(BOOL)validateRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithRequest:(id)arg0 deviceInformationPrimitives:(id)arg1 ;
-(void)runWithRequest:(id)arg0 ;


@end


#endif