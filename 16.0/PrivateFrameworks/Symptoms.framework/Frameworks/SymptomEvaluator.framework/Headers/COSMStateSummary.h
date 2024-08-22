// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COSMSTATESUMMARY_H
#define COSMSTATESUMMARY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CellOutrankHandlerSTM.h"

@interface COSMStateSummary : NSObject <NSCopying>



@property (nonatomic) BOOL LOIUseAuthorized; // ivar: _LOIUseAuthorized
@property (nonatomic) BOOL armedEligible;
@property (nonatomic) BOOL arpFailureEvent; // ivar: _arpFailureEvent
@property (nonatomic) BOOL captivityFrictionEligible;
@property (nonatomic) BOOL captivityIndeterminateEvent; // ivar: _captivityIndeterminateEvent
@property (nonatomic) BOOL cellActive; // ivar: _cellActive
@property (nonatomic) BOOL cellEligible;
@property (nonatomic) BOOL cellExpensive; // ivar: _cellExpensive
@property (nonatomic) BOOL cellLowDataMode; // ivar: _cellLowDataMode
@property (nonatomic) BOOL cellPrimary; // ivar: _cellPrimary
@property (nonatomic) BOOL cellPrivateNetworkActive; // ivar: _cellPrivateNetworkActive
@property (nonatomic) BOOL cellStatusOutrankExitEligible;
@property (nonatomic) BOOL cellWRMExpensive; // ivar: _cellWRMExpensive
@property (nonatomic) NSUInteger cellWRMStatus; // ivar: _cellWRMStatus
@property (readonly, nonatomic) BOOL cellWRMStatusGood;
@property (nonatomic) BOOL cellWRMStatusProlongedBad; // ivar: _cellWRMStatusProlongedBad
@property (nonatomic) BOOL coremediaDownloadActive; // ivar: _coremediaDownloadActive
@property (nonatomic) BOOL coremediaDownloadHysteresis; // ivar: _coremediaDownloadHysteresis
@property (nonatomic) BOOL coremediaDownloadPeriod; // ivar: _coremediaDownloadPeriod
@property (nonatomic) BOOL coremediaDownloadPeriodEnd; // ivar: _coremediaDownloadPeriodEnd
@property (nonatomic) BOOL dampeningTimerExpiryEvent; // ivar: _dampeningTimerExpiryEvent
@property (nonatomic) BOOL dataStallThresholdEvent; // ivar: _dataStallThresholdEvent
@property (nonatomic) BOOL deviceEligible;
@property (nonatomic) NSUInteger eventsInstanceNumber; // ivar: _eventsInstanceNumber
@property (nonatomic) BOOL excessCertificateErrorsEvent; // ivar: _excessCertificateErrorsEvent
@property (nonatomic) BOOL force5GPreferred; // ivar: _force5GPreferred
@property (readonly, nonatomic) BOOL forceCellPreferred; // ivar: _forceCellPreferred
@property (nonatomic) BOOL forcedOutrankEligible;
@property (nonatomic) BOOL homeLocationIsKnown; // ivar: _homeLocationIsKnown
@property (nonatomic) BOOL imminentStallEvent; // ivar: _imminentStallEvent
@property (nonatomic) BOOL inCellPrivateNetworkOutrank; // ivar: _inCellPrivateNetworkOutrank
@property (nonatomic) BOOL inDampeningPeriod; // ivar: _inDampeningPeriod
@property (nonatomic) BOOL inRegretAvoidanceOutrank; // ivar: _inRegretAvoidanceOutrank
@property (nonatomic) BOOL lowPowerModeEnabled; // ivar: _lowPowerModeEnabled
@property (nonatomic) BOOL mediaPlaybackStallEvent; // ivar: _mediaPlaybackStallEvent
@property (nonatomic) BOOL nd6FailureEvent; // ivar: _nd6FailureEvent
@property (nonatomic) BOOL rnfActivated; // ivar: _rnfActivated
@property (nonatomic) BOOL screenNotDark; // ivar: _screenNotDark
@property (nonatomic) BOOL screenUnlocked; // ivar: _screenUnlocked
@property (retain, nonatomic) CellOutrankHandlerSTM *targetHandler; // ivar: _targetHandler
@property (nonatomic) NSInteger thermalPressure; // ivar: _thermalPressure
@property (readonly, nonatomic) BOOL thermalStateAllowsContinuedOutrank;
@property (readonly, nonatomic) BOOL thermalStateAllowsEntryToOutrank;
@property (nonatomic) BOOL userInitiatedActivity; // ivar: _userInitiatedActivity
@property (nonatomic) BOOL userInitiatedFrictionEligible;
@property (nonatomic) BOOL wifiActive; // ivar: _wifiActive
@property (nonatomic) BOOL wifiAmbientFrictionEligible;
@property (nonatomic) BOOL wifiChangedSSIDEvent; // ivar: _wifiChangedSSIDEvent
@property (nonatomic) BOOL wifiDnsOut; // ivar: _wifiDnsOut
@property (nonatomic) BOOL wifiDnsProlongedOut; // ivar: _wifiDnsProlongedOut
@property (nonatomic) BOOL wifiEligible;
@property (nonatomic) BOOL wifiExpensive; // ivar: _wifiExpensive
@property (nonatomic) BOOL wifiGoodSecurity; // ivar: _wifiGoodSecurity
@property (nonatomic) BOOL wifiHome; // ivar: _wifiHome
@property (nonatomic) BOOL wifiHotspot20; // ivar: _wifiHotspot20
@property (nonatomic) BOOL wifiInternetDnsOut; // ivar: _wifiInternetDnsOut
@property (nonatomic) BOOL wifiKnowableSporadic; // ivar: _wifiKnowableSporadic
@property (nonatomic) BOOL wifiLowDataMode; // ivar: _wifiLowDataMode
@property (nonatomic) BOOL wifiManaged; // ivar: _wifiManaged
@property (nonatomic) BOOL wifiManuallyJoined; // ivar: _wifiManuallyJoined
@property (nonatomic) BOOL wifiPolledFlowsCurrentlyBad; // ivar: _wifiPolledFlowsCurrentlyBad
@property (nonatomic) BOOL wifiPolledFlowsProlongedBad; // ivar: _wifiPolledFlowsProlongedBad
@property (nonatomic) BOOL wifiPrimary; // ivar: _wifiPrimary
@property (nonatomic) BOOL wifiPublic; // ivar: _wifiPublic
@property (nonatomic) BOOL wifiSporadic; // ivar: _wifiSporadic
@property (nonatomic) BOOL wifiTputAdvice; // ivar: _wifiTputAdvice
@property (readonly, nonatomic) BOOL wifiTputAdviceEnded; // ivar: _wifiTputAdviceEnded
@property (nonatomic) BOOL wifiTputInterfaceUse; // ivar: _wifiTputInterfaceUse
@property (nonatomic) BOOL wifiTputLargeXfer; // ivar: _wifiTputLargeXfer
@property (nonatomic) NSUInteger wifiWRMStatus; // ivar: _wifiWRMStatus
@property (readonly, nonatomic) BOOL wifiWRMStatusBad;
@property (readonly, nonatomic) BOOL wifiWRMStatusGood;


+(id)summaryFromFlags:(NSUInteger)arg0 ;
+(int)primaryArmedReasonFromFlags:(NSUInteger)arg0 ;
+(int)primaryIdleReasonFromFlags:(NSUInteger)arg0 ;
+(int)primaryOutrankReasonFromFlags:(NSUInteger)arg0 ;
+(int)primaryReasonFromFlags:(NSUInteger)arg0 state:(int)arg1 ;
+(unsigned int)wifiPublicTypeFromFlags:(NSUInteger)arg0 ;
+(void)initialize;
-(BOOL)applyDictionary:(id)arg0 ;
-(NSUInteger)reasonFlags;
-(id)_prettyJSONStringStarting:(NSUInteger)arg0 ending:(NSUInteger)arg1 ;
-(id)_stringForKey:(id)arg0 object:(id)arg1 ;
-(id)arrayOfStringsDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryForm;
-(id)jsonRepresentation;
-(id)prettyJSONString;
-(id)prettyJSONStringPart1;
-(id)prettyJSONStringPart2;
-(id)prettyJSONStringPart3;
-(void)mergeEvents:(id)arg0 ;


@end


#endif