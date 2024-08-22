// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMTTASKOPERATIONBUILDER_H
#define DMTTASKOPERATIONBUILDER_H

@class NSString;
@protocol DMTTaskOperationProviding, DMTDeviceInformationPrimitives, DMTEnrollmentInitiating, DMTEnrollmentPrerequisiteReceiving, DMTEnrollmentStateProviding;

#import <Foundation/Foundation.h>


@interface DMTTaskOperationBuilder : NSObject <DMTTaskOperationProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<DMTDeviceInformationPrimitives> *deviceInfoPrimitives; // ivar: _deviceInfoPrimitives
@property (readonly, nonatomic) NSObject<DMTEnrollmentInitiating> *enrollmentInitiator; // ivar: _enrollmentInitiator
@property (readonly, nonatomic) NSObject<DMTEnrollmentPrerequisiteReceiving> *enrollmentPrerequisiteReceiver; // ivar: _enrollmentPrerequisiteReceiver
@property (readonly, nonatomic) NSObject<DMTEnrollmentStateProviding> *enrollmentStateProvider; // ivar: _enrollmentStateProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)validationClassForRequest:(id)arg0 ;
-(BOOL)validateRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithDeviceInfoPrimitives:(id)arg0 enrollmentPrerequisiteReceiver:(id)arg1 enrollmentInitiator:(id)arg2 enrollmentStateProvider:(id)arg3 ;
-(id)taskOperationForRequest:(id)arg0 ;


@end


#endif