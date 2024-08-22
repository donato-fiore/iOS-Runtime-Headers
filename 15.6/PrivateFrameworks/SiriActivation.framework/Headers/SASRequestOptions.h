// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASREQUESTOPTIONS_H
#define SASREQUESTOPTIONS_H

@class NSString, AFBulletin, NSArray, NSDictionary, AFApplicationContext, NSNumber, NSMutableArray, NSUUID, SASPronunciationContext, AFRequestInfo, NSURL, AFSpeechRequestOptions;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SASRequestOptions.h"

@interface SASRequestOptions : NSObject <NSCopying, NSSecureCoding>

 {
    NSInteger _requestSource;
}


@property (nonatomic) BOOL acousticIdEnabled; // ivar: _acousticIdEnabled
@property (copy, nonatomic) NSString *activationDeviceIdentifier; // ivar: _activationDeviceIdentifier
@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (retain, nonatomic) AFBulletin *bulletin; // ivar: _bulletin
@property (nonatomic) CGFloat buttonDownTimestamp; // ivar: _buttonDownTimestamp
@property (nonatomic) NSUInteger carDNDStatus; // ivar: _carDNDStatus
@property (retain, nonatomic) NSArray *contextAppInfosForSiriViewController; // ivar: _contextAppInfosForSiriViewController
@property (copy, nonatomic) NSDictionary *continuityInfo; // ivar: _continuityInfo
@property (retain, nonatomic) NSArray *currentCarPlaySupportedOEMAppIdList; // ivar: _currentCarPlaySupportedOEMAppIdList
@property (nonatomic) NSUInteger currentLockState; // ivar: _currentLockState
@property (copy, nonatomic) AFApplicationContext *directActionApplicationContext; // ivar: _directActionApplicationContext
@property (nonatomic) NSInteger directActionEvent; // ivar: _directActionEvent
@property (nonatomic) NSInteger endpointerStopRecordingMode; // ivar: _endpointerStopRecordingMode
@property (nonatomic) CGFloat expectedTimestamp; // ivar: _expectedTimestamp
@property (readonly, nonatomic, getter=isForStark) BOOL forStark;
@property (retain, nonatomic) NSNumber *homeButtonUpFromBeep; // ivar: _homeButtonUpFromBeep
@property (nonatomic, getter=isInitialBringUp) BOOL initialBringUp; // ivar: _initialBringUp
@property (readonly, nonatomic) NSInteger inputType;
@property (retain, nonatomic) NSMutableArray *instrumentationEvents; // ivar: _instrumentationEvents
@property (nonatomic) BOOL isConnectedToCarPlay; // ivar: _isConnectedToCarPlay
@property (readonly, nonatomic) BOOL isForAppleTV;
@property (nonatomic) BOOL isForCarDND; // ivar: _isForCarDND
@property (readonly, nonatomic) BOOL isForEyesFree;
@property (readonly, nonatomic) BOOL isForUIFree;
@property (readonly, nonatomic) BOOL isRemotePresentationBringUp; // ivar: _isRemotePresentationBringUp
@property (readonly, nonatomic) BOOL isRequestMadeWithPhysicalDeviceInteraction;
@property (nonatomic) BOOL isTVRemoteSourcePTTEligible; // ivar: _isTVRemoteSourcePTTEligible
@property (readonly, nonatomic) BOOL isVoiceTriggerRequest;
@property (copy, nonatomic) SASRequestOptions *originalRequestOptions; // ivar: _originalRequestOptions
@property (nonatomic) BOOL predictedRecordRouteIsZLL; // ivar: _predictedRecordRouteIsZLL
@property (nonatomic) NSInteger presentationMode; // ivar: _presentationMode
@property (retain, nonatomic) NSUUID *previousTurnIdentifier; // ivar: _previousTurnIdentifier
@property (retain, nonatomic) SASPronunciationContext *pronunciationContext; // ivar: _pronunciationContext
@property (nonatomic, getter=isPronunciationRequest) BOOL pronunciationRequest; // ivar: _pronunciationRequest
@property (nonatomic) BOOL releaseAudioSessionOnRecordingCompletion; // ivar: _releaseAudioSessionOnRecordingCompletion
@property (retain, nonatomic) AFRequestInfo *requestInfo; // ivar: _requestInfo
@property (nonatomic) NSInteger requestSource;
@property (nonatomic, getter=isRightHandDrive) BOOL rightHandDrive; // ivar: _rightHandDrive
@property (copy, nonatomic) NSString *serverCommandId; // ivar: _serverCommandId
@property (nonatomic, getter=isShortButtonPressAction) BOOL shortButtonPressAction; // ivar: _shortButtonPressAction
@property (copy, nonatomic) NSURL *speechFileURL; // ivar: _speechFileURL
@property (retain, nonatomic) AFSpeechRequestOptions *speechRequestOptions; // ivar: _speechRequestOptions
@property (copy, nonatomic) NSString *startRecordingSoundId; // ivar: _startRecordingSoundId
@property (retain, nonatomic) NSDictionary *testingContext; // ivar: _testingContext
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger tvRemoteType; // ivar: _tvRemoteType
@property (retain, nonatomic) NSString *uiPresentationIdentifier; // ivar: _uiPresentationIdentifier
@property (nonatomic) BOOL useAutomaticEndpointing; // ivar: _useAutomaticEndpointing
@property (nonatomic) BOOL useStreamingDictation; // ivar: _useStreamingDictation
@property (readonly, nonatomic) BOOL userTypedInSiri;


+(BOOL)supportsSecureCoding;
-(BOOL)_isForSpeechRequest;
-(BOOL)_isTypeToSiriPermittedAndEnabledForRequestOptions;
-(BOOL)isATVRemotePTTEligible;
-(BOOL)isH1Activation;
-(BOOL)isHTTRequestSource;
-(NSInteger)_presentationIdentifierFromUIPresentationIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestSource:(NSInteger)arg0 ;
-(id)initWithRequestSource:(NSInteger)arg0 uiPresentationIdentifier:(id)arg1 ;
-(id)initWithRequestSource:(NSInteger)arg0 uiPresentationIdentifier:(id)arg1 buttonContext:(id)arg2 ;
-(id)initWithRequestSource:(NSInteger)arg0 uiPresentationIdentifier:(id)arg1 systemState:(id)arg2 ;
-(void)_configureStreamingDictationForSource:(NSInteger)arg0 ;
-(void)_updateWithSystemState:(id)arg0 forcefully:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateIfNeededWithSystemState:(id)arg0 ;


@end


#endif