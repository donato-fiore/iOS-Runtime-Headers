// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EAFIRMWAREUPDATER_H
#define EAFIRMWAREUPDATER_H

@class MobileAssetUpdater, NSString, NSDictionary, NSNumber, NSDate, NSURL, NSArray, NSMutableData, NSTimer, EAAccessory, EASession;
@protocol NSStreamDelegate, iAUPServerDelegate, OS_dispatch_queue;


#import "iAUPServer.h"

@interface EAFirmwareUpdater : MobileAssetUpdater <NSStreamDelegate, iAUPServerDelegate>

 {
    NSString *_multiassetAppProtocol;
    NSString *_deviceClass;
    NSDictionary *_deviceOptions;
    NSUInteger _firmwareVersionMajor;
    NSUInteger _firmwareVersionMinor;
    NSUInteger _firmwareVersionRelease;
    NSNumber *_cumulativeBytesDownloaded;
    NSNumber *_totalBytesForCompleteUpdate;
    NSNumber *_cumulativeCloakTime;
    NSNumber *_currentSessionCloakTime;
    NSDate *_updateStartTime;
    NSString *_firmwareBundleFilename;
    NSURL *_firmwareBundleURL;
    id *_progressHandler;
    id *_updateHandler;
    id *_personalizationRequestHandler;
    NSArray *_buildIdentities;
    NSArray *_manifestList;
    unsigned int _manifestIndex;
    NSMutableData *_outputData;
    _opaque_pthread_mutex_t _flushOutputLock;
    iAUPServer *_iAUPServer;
    NSObject<OS_dispatch_queue> *_eaNotificationDispatchQueue;
    BOOL _firmwareUpdateComplete;
    BOOL _firmwareUpdateIsUrgent;
    int _isExpectingReconnect;
    NSTimer *_reconnectTimer;
    BOOL _byteEscape;
    BOOL _skipReconnect;
    BOOL _skipVersionCheck;
}


@property (retain, nonatomic) EAAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) NSString *appProtocol; // ivar: _appProtocol
@property (copy, nonatomic) id *applyCompletion; // ivar: _applyCompletion
@property (retain, nonatomic) NSString *bootloaderProtocol; // ivar: _bootloaderProtocol
@property (nonatomic) BOOL closeEASession; // ivar: _closeEASession
@property (retain, nonatomic) NSNumber *cumulativeCloak; // ivar: _cumulativeCloak
@property (retain, nonatomic) NSNumber *cumulativeProgressPercent; // ivar: _cumulativeProgressPercent
@property (retain, nonatomic) NSNumber *cumulativeTimeTaken; // ivar: _cumulativeTimeTaken
@property (retain, nonatomic) NSString *currentFirmwareVersionOnAcc; // ivar: _currentFirmwareVersionOnAcc
@property (retain, nonatomic) NSNumber *currentSessionTimeTaken; // ivar: _currentSessionTimeTaken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL excludeUniqueAccessoryCheck; // ivar: _excludeUniqueAccessoryCheck
@property (retain, nonatomic) NSString *firmwareBundleFilename; // ivar: _updateBundleFilename
@property (retain, nonatomic) NSURL *firmwareBundleURL; // ivar: _updateBundleURL
@property (retain, nonatomic) NSString *firmwareVersionAvailable; // ivar: _firmwareVersionAvailable
@property (nonatomic) BOOL forceSilentUpdate; // ivar: _forceSilentUpdate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isMultiAssetSession; // ivar: _isMultiAssetSession
@property (copy, nonatomic) NSDictionary *manifestIDs; // ivar: _manifestIDs
@property (retain, nonatomic) NSString *modelNumber; // ivar: _modelNumber
@property (retain, nonatomic) NSString *multiAssetAppProtocol; // ivar: _multiAssetAppProtocol
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL overrideProtocol; // ivar: _overrideProtocol
@property (retain, nonatomic) NSString *protocolString; // ivar: _protocolString
@property (retain, nonatomic) NSNumber *resumeCount; // ivar: _resumeCount
@property (retain, nonatomic) NSNumber *resumedFromPercentNum; // ivar: _resumedFromPercentNum
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (retain, nonatomic) EASession *session; // ivar: _session
@property (nonatomic) BOOL skipDFUMode; // ivar: _skipDFUMode
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *transportType; // ivar: _transportType


+(id)appProtocolStringWithEAID:(id)arg0 ;
+(id)bootloaderProtocolStringWithEAID:(id)arg0 ;
+(id)findAccessoryWithProtocolString:(id)arg0 serialNum:(id)arg1 ;
+(id)getEAFirmwareRevisionActive:(id)arg0 forProtocol:(id)arg1 ;
+(id)getEAFirmwareRevisionPending:(id)arg0 forProtocol:(id)arg1 ;
-(BOOL)findAccessory;
-(BOOL)isDeploymentAllowed:(id)arg0 ;
-(BOOL)isRestartRequired;
-(BOOL)isSleepWakeRequired;
-(BOOL)isUrgentUpdate;
-(BOOL)stitchManifestInSuperBinary:(id)arg0 withManifest:(id)arg1 withId:(unsigned int)arg2 ;
-(BOOL)updateRequiresPersonalization;
-(BOOL)updateRequiresSuperBinary;
// -(id)applyFirmware:(id)arg0 progress:(unk)arg1 update:(id)arg2 personalization:(unk)arg3  ;
-(id)assetWithMaxVersion:(id)arg0 ;
-(id)createEndOfUpdateEventDict:(id)arg0 error:(id)arg1 ;
-(id)flushOutput;
-(id)getDeviceClassName;
-(id)initWithDeviceClass:(id)arg0 assetType:(id)arg1 skipDFU:(BOOL)arg2 byteEscape:(BOOL)arg3 skipReconnect:(BOOL)arg4 skipVersionCheck:(BOOL)arg5 options:(id)arg6 serialNum:(id)arg7 ;
-(id)openSession;
-(id)queryPredicate;
-(id)supportedProtocolForAccessory:(id)arg0 ;
-(id)validateAsset;
-(id)validateAssetAttributes:(id)arg0 ;
-(id)writeData:(id)arg0 ;
-(unsigned char)getPersonalizationID;
-(unsigned int)getWhitelistedPersonalizationFields;
-(void)_accessoryDidConnect:(id)arg0 ;
-(void)_accessoryDidDisconnect:(id)arg0 ;
-(void)closeSession;
-(void)dealloc;
-(void)firmwareUpdateComplete:(id)arg0 error:(id)arg1 ;
-(void)handleFirmwareUpdateStatus:(id)arg0 ;
-(void)handleInputData;
-(void)handleSessionError:(unsigned int)arg0 message:(id)arg1 ;
-(void)logStatusString:(id)arg0 ;
-(void)personalizationResponse:(id)arg0 error:(id)arg1 ;
-(void)processPersonalizationInfoFromAccessory:(id)arg0 ;
-(void)reconnectTimerDidFire:(id)arg0 ;
-(void)setFirmwareBundle:(id)arg0 ;
-(void)setFirmwareLocalURL:(id)arg0 ;
-(void)setFirmwareURL:(id)arg0 withManifest:(id)arg1 signature:(id)arg2 certificate:(id)arg3 hash:(id)arg4 ;
-(void)startReconnectTimer:(int)arg0 ;
-(void)stopReconnectTimer;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)updateComplete:(id)arg0 error:(id)arg1 ;
-(void)updateProgress:(CGFloat)arg0 ;


@end


#endif