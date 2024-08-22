// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMTFETCHAUTOMATEDDEVICEENROLLMENTSTATEOPERATION_H
#define DMTFETCHAUTOMATEDDEVICEENROLLMENTSTATEOPERATION_H

@protocol DMTEnrollmentStateProviding;


#import "DMTTaskOperation.h"

@interface DMTFetchAutomatedDeviceEnrollmentStateOperation : DMTTaskOperation

@property (readonly, nonatomic) NSObject<DMTEnrollmentStateProviding> *enrollmentStateProvider; // ivar: _enrollmentStateProvider


+(BOOL)validateRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithRequest:(id)arg0 enrollmentStateProvider:(id)arg1 ;
-(void)runWithRequest:(id)arg0 ;


@end


#endif