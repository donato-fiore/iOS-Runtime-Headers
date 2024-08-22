// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BYLOCATIONCONTROLLER_H
#define BYLOCATIONCONTROLLER_H

@class NSString, NSDictionary, NSSet, NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface BYLocationController : NSObject {
    NSString *_guessedCountryFromTelephony;
    NSDictionary *_aliasDict;
    NSSet *_validCountries;
    *__WiFiManagerClient fWifiManager;
    *__WiFiDeviceClient fWifiDevice;
}


@property (nonatomic) BOOL fakeMode; // ivar: _fakeMode
@property (retain, nonatomic) NSArray *firstGuessedLanguages; // ivar: _firstGuessedLanguages
@property (retain, nonatomic) NSArray *guessedCountries; // ivar: _guessedCountries
@property (retain, nonatomic) NSDate *wirelessScanStartDate; // ivar: _wirelessScanStartDate


+(id)sharedBuddyLocationController;
-(BOOL)getCountryFromTelephony;
-(id)_checkForAliases:(id)arg0 ;
-(id)_checkForAliasesOrInvalid:(id)arg0 ;
-(id)_checkedArrayForString:(id)arg0 ;
-(id)_countriesFromDefaults;
-(id)_countryFromTelephony;
-(id)aliasDict;
-(id)guessedCountryFromTelephony;
-(id)guessedLanguages;
-(id)init;
-(void)_closeWifiConnection;
-(void)_getWifiDevice;
-(void)_scanComplete:(id)arg0 error:(BOOL)arg1 ;
-(void)_scanWifiList;
-(void)_scanWifiListWithDevice:(struct __WiFiDeviceClient *)arg0 ;
-(void)_setGuessedCountryDefault:(id)arg0 ;
-(void)_startWifiScan;
-(void)dealloc;
-(void)reset;


@end


#endif