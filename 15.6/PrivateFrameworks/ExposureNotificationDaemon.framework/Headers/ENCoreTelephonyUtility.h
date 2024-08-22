// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENCORETELEPHONYUTILITY_H
#define ENCORETELEPHONYUTILITY_H

@class CoreTelephonyClient, NSString, NSHashTable;
@protocol CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ENCoreTelephonyUtility : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate>



@property (readonly, nonatomic) CoreTelephonyClient *ctClient; // ivar: _ctClient
@property (readonly, nonatomic) *__CTServerConnection ctServerConnection; // ivar: _ctServerConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observersTable; // ivar: _observersTable
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


+(id)countryCodeISOForMobileCountryCode:(id)arg0 ;
+(id)mobileCountryCodeForISO:(id)arg0 ;
+(id)sharedInstance;
-(id)countryCodeISOForMobileCountryCode:(id)arg0 ;
-(id)currentMobileCountryCode;
-(id)currentPhoneNumbers;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)cellMonitorUpdate:(id)arg0 info:(id)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif