// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUTOGUESSCONTROLLER_H
#define AUTOGUESSCONTROLLER_H

@class NSThread, NSTimer, NSMutableDictionary, NSArray, NSString, NSDictionary;
@protocol AutoGuessUIDelegate;


#import "AssistantCallbackController.h"

@interface AutoGuessController : AssistantCallbackController {
    BOOL _onShortTimer;
    *ACPBrowserSession _acpBrowserSession;
    *AutoGuessContext _guessContext;
    int _wifiScanStatus;
    int _bonjourBrowseStatus;
    BOOL _autoJoinState;
    BOOL _updatedTargetInfo;
    NSThread *_autoGuessThread;
}


@property (retain) NSTimer *_browseReadyTimer; // ivar: _browseReadyTimer
@property (retain) NSMutableDictionary *_browsedBases; // ivar: _browsedBases
@property (retain) NSArray *_wifiScanInfos; // ivar: _wifiScanInfos
@property int currentAutoGuessUISelector; // ivar: _currentAutoGuessUISelector
@property (retain) NSString *currentParamString; // ivar: _currentParamString
@property NSObject<AutoGuessUIDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDictionary *guessCompletionDict; // ivar: _guessCompletionDict
@property int lastAutoGuessUISelector; // ivar: _lastAutoGuessUISelector
@property (retain) NSDictionary *lastInstrumentation; // ivar: _lastInstrumentation
@property (retain) NSString *lastParamString; // ivar: _lastParamString
@property (retain) NSDictionary *targetBrowseRecord; // ivar: _targetBrowseRecord
@property (retain) NSString *targetMACAddress; // ivar: _targetMACAddress
@property (retain) NSDictionary *targetScanRecord; // ivar: _targetScanRecord
@property (retain) NSDictionary *unconfiguredDeviceThatIsBeingSetup; // ivar: unconfiguredDeviceThatIsBeingSetup


+(BOOL)isRestoreAnOptionForTheRecommendations:(id)arg0 ;
+(BOOL)shouldShowPasswordUIForRecommendation:(id)arg0 ;
+(id)fullAutoGuessDictionaryFromCompletionDict:(id)arg0 ;
+(id)primaryRecommendationDictionaryFromCompletionDict:(id)arg0 ;
+(id)recommendationStringFromCompletionDict:(id)arg0 ;
+(id)recommendationToActionChoice:(id)arg0 ;
+(id)restoreOfferFromCompletionDict:(id)arg0 ;
+(id)restoreRecommendationDictionaryFromCompletionDict:(id)arg0 ;
+(id)shortProductNameForUnconfiguredDeviceFromAutoGuessResults:(id)arg0 ;
+(id)shortProductNameFromBaseStationDictionary:(id)arg0 ;
+(id)sourceBaseStationFromRecommendation:(id)arg0 ;
+(id)sourceNetworkFromRecommendation:(id)arg0 ;
+(id)unconfiguredBaseStationCanBeConfiguredFromCompletionDict:(id)arg0 ;
+(id)unconfiguredBaseStationFromGuessCompleteDict:(id)arg0 ;
+(id)unconfiguredBaseStationFromRecommendation:(id)arg0 ;
-(BOOL)okToSwitchToShortBonjourTimeout:(id)arg0 ;
-(id)createCompletionDictFromAutoGuessResults:(id)arg0 ;
-(id)init;
-(id)targetInfo;
-(int)bonjourBrowseStatus;
-(int)cancelAutoGuess;
-(int)runAutoGuessWithWifiScanInfos:(id)arg0 ;
-(int)startAutoGuessForUnconfiguredMACAddress:(id)arg0 withWifiScanInfos:(id)arg1 ;
-(int)startBonjourBrowser;
-(int)startWiFiScanner;
-(int)wifiScanStatus;
-(void)autoGuessEngineComplete;
-(void)bonjourTXTRemoved:(id)arg0 ;
-(void)bonjourTXTUpdated:(id)arg0 ;
-(void)browseReadyTimerCallback:(id)arg0 ;
-(void)cancelBonjourBrowser;
-(void)cancelWiFiScanner;
-(void)dealloc;
-(void)runAutoGuessThread:(id)arg0 ;
-(void)setBonjourBrowseStatus:(int)arg0 ;
-(void)setWiFiScanStatus:(int)arg0 ;
-(void)startAutoGuessIfReady;
-(void)stopBonjourBrowser;
-(void)stopWiFiScanner;
-(void)uiAssetsUpdated:(id)arg0 ;
-(void)updateTargetInfo:(BOOL)arg0 ;
-(void)wirelessScanDone:(id)arg0 ;


@end


#endif