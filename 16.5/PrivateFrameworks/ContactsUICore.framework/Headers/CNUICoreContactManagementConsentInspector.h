// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUICORECONTACTMANAGEMENTCONSENTINSPECTOR_H
#define CNUICORECONTACTMANAGEMENTCONSENTINSPECTOR_H

@class NSString, STManagementState;
@protocol CNUICoreContactManagementConsentCheck, CNSchedulerProvider;

#import <Foundation/Foundation.h>


@interface CNUICoreContactManagementConsentInspector : NSObject <CNUICoreContactManagementConsentCheck>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) STManagementState *managementState; // ivar: _managementState
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;


+(NSUInteger)contactManagementConsentStateFromSTContactManagementState:(NSInteger)arg0 ;
-(NSUInteger)contactManagementConsentStateOfDelegateWithInfo:(id)arg0 ;
-(id)contactManagementConsentStateFutureForDSID:(id)arg0 ;
-(id)init;
-(id)initWithManagementState:(id)arg0 schedulerProvider:(id)arg1 ;


@end


#endif