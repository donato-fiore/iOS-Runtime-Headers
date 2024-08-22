// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUICORETELEPHONYDATACACHE_H
#define PSUICORETELEPHONYDATACACHE_H

@class Logger, CoreTelephonyClient, NSMutableDictionary, NSString, RadiosPreferences;
@protocol CoreTelephonyClientDataDelegate, RadiosPreferencesDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PSUICoreTelephonyDataCache : NSObject <CoreTelephonyClientDataDelegate, RadiosPreferencesDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    Logger *_logger;
}


@property BOOL cellularDataSetting; // ivar: _cellularDataSetting
@property BOOL cellularDataSettingInitialized; // ivar: _cellularDataSettingInitialized
@property (retain, nonatomic) CoreTelephonyClient *client; // ivar: _client
@property *__CTServerConnection ctConnection; // ivar: _ctConnection
@property (retain) NSMutableDictionary *dataStatusDict; // ivar: _dataStatusDict
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *intlDataAccessStatus; // ivar: _intlDataAccessStatus
@property ? privacyProxySetting; // ivar: _privacyProxySetting
@property BOOL privacyProxySettingsFetched; // ivar: _privacyProxySettingsFetched
@property (retain, nonatomic) RadiosPreferences *radioPreferences; // ivar: _radioPreferences
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)getInternationalDataAccessStatus;
-(BOOL)getInternationalDataAccessStatus:(id)arg0 ;
-(BOOL)isAirplaneModeEnabled;
-(BOOL)isCellularDataEnabled;
-(BOOL)isDataFallbackEnabled;
-(BOOL)isPrivacyProxyEnabled:(id)arg0 ;
-(BOOL)isUserSubscribedToPrivacyProxy:(id)arg0 ;
-(id)getDataStatus:(id)arg0 ;
-(id)getLogger;
-(id)init;
-(id)initPrivate;
-(void)airplaneModeChanged;
-(void)dataRoamingSettingsChanged:(id)arg0 status:(BOOL)arg1 ;
-(void)dataSettingsChanged:(id)arg0 ;
-(void)dataStatus:(id)arg0 dataStatusInfo:(id)arg1 ;
-(void)dealloc;
-(void)fetchCellularDataEnabled;
-(void)fetchDataStatus;
-(void)fetchInternationalDataAccessStatus:(id)arg0 ;
-(void)fetchPrivacyProxyStatus:(id)arg0 ;
-(void)setCellularDataEnabled:(BOOL)arg0 ;
-(void)setDataFallbackEnabled:(BOOL)arg0 ;
-(void)setInternationalDataAccessStatus:(BOOL)arg0 ;
-(void)setInternationalDataAccessStatus:(id)arg0 status:(BOOL)arg1 ;
-(void)setPrivacyProxy:(id)arg0 enabled:(BOOL)arg1 ;
-(void)willEnterForeground;


@end


#endif