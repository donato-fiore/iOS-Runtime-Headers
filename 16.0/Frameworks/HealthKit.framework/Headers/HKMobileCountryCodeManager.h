// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMOBILECOUNTRYCODEMANAGER_H
#define HKMOBILECOUNTRYCODEMANAGER_H

@class CoreTelephonyClient, RadiosPreferences;
@protocol HKCurrentCountryCodeProvider;

#import <Foundation/Foundation.h>


@interface HKMobileCountryCodeManager : NSObject <HKCurrentCountryCodeProvider>

 {
    CoreTelephonyClient *_coreTelephonyClient;
    *__CTServerConnection _coreTelephonyServerConnection;
    RadiosPreferences *_radiosPreferences;
}




+(BOOL)isOverridePresent;
+(id)_overrideISOCountryCode;
+(id)overrideMobileCountryCode;
+(void)setOverrideMobileCountryCode:(id)arg0 ;
-(BOOL)_isLocationAvailableWithError:(*id)arg0 ;
-(id)_wrapperWithMobileCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)copyISOCountryCodeForMobileCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)currentCountryCode;
-(id)init;
-(id)mobileCountryCodeFromCellularWithError:(*id)arg0 ;
-(void)_submitAnalyticsForError:(id)arg0 mobileCountryCode:(id)arg1 ;
-(void)dealloc;
-(void)fetchISOCountryCodeFromCellularWithCompletion:(id)arg0 ;
-(void)fetchMobileCountryCodeFromCellularWithCompletion:(id)arg0 ;


@end


#endif