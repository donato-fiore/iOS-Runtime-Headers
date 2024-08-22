// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADUSERTARGETINGPROPERTIES_H
#define ADUSERTARGETINGPROPERTIES_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface ADUserTargetingProperties : PBCodable <NSCopying>

 {
    ? _accountStates;
    ? _accountTypes;
    ? _deviceModes;
    ? _has;
}


@property (readonly, nonatomic) *int accountStates;
@property (readonly, nonatomic) NSUInteger accountStatesCount;
@property (readonly, nonatomic) *int accountTypes;
@property (readonly, nonatomic) NSUInteger accountTypesCount;
@property (retain, nonatomic) NSString *administrativeArea; // ivar: _administrativeArea
@property (nonatomic) int advertisingIdentifierMonthResetCount; // ivar: _advertisingIdentifierMonthResetCount
@property (retain, nonatomic) NSString *algoId; // ivar: _algoId
@property (retain, nonatomic) NSString *appID; // ivar: _appID
@property (retain, nonatomic) NSString *appVersion; // ivar: _appVersion
@property (nonatomic) int appsRank; // ivar: _appsRank
@property (retain, nonatomic) NSString *carrierMCC; // ivar: _carrierMCC
@property (retain, nonatomic) NSString *carrierMNC; // ivar: _carrierMNC
@property (nonatomic) CGFloat clientClockTime; // ivar: _clientClockTime
@property (nonatomic) int connectionType; // ivar: _connectionType
@property (retain, nonatomic) NSString *currentCarrierMCC; // ivar: _currentCarrierMCC
@property (retain, nonatomic) NSString *currentCarrierMNC; // ivar: _currentCarrierMNC
@property (retain, nonatomic) NSString *dPIDString; // ivar: _dPIDString
@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (readonly, nonatomic) *int deviceModes;
@property (readonly, nonatomic) NSUInteger deviceModesCount;
@property (retain, nonatomic) NSString *deviceRequestID; // ivar: _deviceRequestID
@property (readonly, nonatomic) BOOL hasAdministrativeArea;
@property (nonatomic) BOOL hasAdvertisingIdentifierMonthResetCount;
@property (readonly, nonatomic) BOOL hasAlgoId;
@property (readonly, nonatomic) BOOL hasAppID;
@property (readonly, nonatomic) BOOL hasAppVersion;
@property (nonatomic) BOOL hasAppsRank;
@property (readonly, nonatomic) BOOL hasCarrierMCC;
@property (readonly, nonatomic) BOOL hasCarrierMNC;
@property (nonatomic) BOOL hasClientClockTime;
@property (nonatomic) BOOL hasConnectionType;
@property (readonly, nonatomic) BOOL hasCurrentCarrierMCC;
@property (readonly, nonatomic) BOOL hasCurrentCarrierMNC;
@property (readonly, nonatomic) BOOL hasDPIDString;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (readonly, nonatomic) BOOL hasDeviceRequestID;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (readonly, nonatomic) BOOL hasIAdIDString;
@property (readonly, nonatomic) BOOL hasITunesStore;
@property (nonatomic) BOOL hasIsOnInternationalDataRoaming;
@property (readonly, nonatomic) BOOL hasIsoCountryCode;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLimitAdTracking;
@property (readonly, nonatomic) BOOL hasLocaleIdentifier;
@property (readonly, nonatomic) BOOL hasLocality;
@property (nonatomic) BOOL hasLongitude;
@property (readonly, nonatomic) BOOL hasOsVersionAndBuild;
@property (readonly, nonatomic) BOOL hasPostalCode;
@property (nonatomic) BOOL hasRunState;
@property (readonly, nonatomic) BOOL hasStoreFrontLanguageLocaleIdentifier;
@property (readonly, nonatomic) BOOL hasSubAdministrativeArea;
@property (nonatomic) BOOL hasTimezone;
@property (readonly, nonatomic) BOOL hasToroIDString;
@property (nonatomic) float horizontalAccuracy; // ivar: _horizontalAccuracy
@property (retain, nonatomic) NSString *iAdIDString; // ivar: _iAdIDString
@property (retain, nonatomic) NSString *iTunesStore; // ivar: _iTunesStore
@property (nonatomic) BOOL isOnInternationalDataRoaming; // ivar: _isOnInternationalDataRoaming
@property (retain, nonatomic) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (nonatomic) float latitude; // ivar: _latitude
@property (nonatomic) BOOL limitAdTracking; // ivar: _limitAdTracking
@property (retain, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (retain, nonatomic) NSString *locality; // ivar: _locality
@property (nonatomic) float longitude; // ivar: _longitude
@property (retain, nonatomic) NSString *osVersionAndBuild; // ivar: _osVersionAndBuild
@property (retain, nonatomic) NSString *postalCode; // ivar: _postalCode
@property (nonatomic) int runState; // ivar: _runState
@property (retain, nonatomic) NSString *storeFrontLanguageLocaleIdentifier; // ivar: _storeFrontLanguageLocaleIdentifier
@property (retain, nonatomic) NSString *subAdministrativeArea; // ivar: _subAdministrativeArea
@property (retain, nonatomic) NSMutableArray *targetings; // ivar: _targetings
@property (nonatomic) float timezone; // ivar: _timezone
@property (retain, nonatomic) NSString *toroIDString; // ivar: _toroIDString
@property (retain, nonatomic) NSMutableArray *userKeyboards; // ivar: _userKeyboards


+(Class)targetingType;
+(Class)userKeyboardType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)accountStatesAsString:(int)arg0 ;
-(id)accountTypesAsString:(int)arg0 ;
-(id)connectionTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceModesAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)runStateAsString:(int)arg0 ;
-(id)targetingAtIndex:(NSUInteger)arg0 ;
-(id)userKeyboardAtIndex:(NSUInteger)arg0 ;
-(int)StringAsAccountStates:(id)arg0 ;
-(int)StringAsAccountTypes:(id)arg0 ;
-(int)StringAsConnectionType:(id)arg0 ;
-(int)StringAsDeviceModes:(id)arg0 ;
-(int)StringAsRunState:(id)arg0 ;
-(int)accountStateAtIndex:(NSUInteger)arg0 ;
-(int)accountTypeAtIndex:(NSUInteger)arg0 ;
-(int)deviceModeAtIndex:(NSUInteger)arg0 ;
-(void)addAccountState:(int)arg0 ;
-(void)addAccountType:(int)arg0 ;
-(void)addDeviceMode:(int)arg0 ;
-(void)addTargeting:(id)arg0 ;
-(void)addUserKeyboard:(id)arg0 ;
-(void)clearAccountStates;
-(void)clearAccountTypes;
-(void)clearDeviceModes;
-(void)clearTargetings;
-(void)clearUserKeyboards;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif