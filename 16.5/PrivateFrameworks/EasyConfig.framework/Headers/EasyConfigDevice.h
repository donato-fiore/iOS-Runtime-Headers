// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EASYCONFIGDEVICE_H
#define EASYCONFIGDEVICE_H

@class NSDictionary, NSString;
@protocol NSCopying, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface EasyConfigDevice : NSObject <NSCopying>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDictionary *_scanRecord;
    BOOL _started;
    int _firstErr;
    *BonjourBrowser _airplayBrowser;
    NSDictionary *_airplayBonjourInfo;
    *BonjourBrowser _raopBrowser;
    NSDictionary *_raopBonjourInfo;
    *BonjourBrowser _mfiConfigBrowser;
    NSDictionary *_mfiConfigBonjourInfo;
    *BonjourBrowser _hapBrowser;
    NSDictionary *_hapBonjourInfo;
    unsigned int _configSeed;
    *HTTPClientPrivate _httpClient;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    int _state;
    CGFloat _securityStartTime;
    CGFloat _securityFinishTime;
    *MFiSAP _mfiSAP;
    *PairingSessionPrivate _pairingSession;
    id *_promptForSetupCodeBlock;
    NSDictionary *_configResponse;
    BOOL _supportsHAP;
    BOOL _supportsHAP2;
    BOOL _supportsMFi;
    BOOL _supportsPairSetup;
    BOOL _supportsTLV;
    BOOL _preConfigMetricsSet;
    ? _preConfigMetrics;
    BOOL _postConfigMetricsSet;
    ? _postConfigMetrics;
    CGFloat _configStartTime;
    CGFloat _findPreConfigStartTime;
    CGFloat _findPreConfigFoundTime;
    CGFloat _findPostConfigStartTime;
    CGFloat _findPostConfigFoundTime;
    CGFloat _applyConfigStartTime;
    CGFloat _applyConfigFinishTime;
    CGFloat _postConfigCheckStartTime;
    CGFloat _postConfigCheckFinishTime;
    NSDictionary *_deviceInfo;
    CGFloat _promptForSetupCodeTime;
    unsigned int _enterSetupCodeMs;
    BOOL _hasPairingDelegate;
    ? _pairingDelegate;
}


@property (copy, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (nonatomic) NSUInteger deviceIdentifier; // ivar: _deviceIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _userQueue
@property (nonatomic) NSUInteger features; // ivar: _features
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned int pairSetupFlags; // ivar: _pairSetupFlags
@property (nonatomic) unsigned int pairVerifyFlags; // ivar: _pairVerifyFlags
@property (nonatomic) BOOL pausesAfterApply; // ivar: _pausesAfterApply
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (nonatomic) BOOL skipPairSetup; // ivar: _skipPairSetup


+(BOOL)supportedScanRecord:(id)arg0 ;
+(id)deviceWithInfo:(id)arg0 ;
+(id)deviceWithScanRecord:(id)arg0 ;
-(?)_applyConfigCompletion;
-(?)_postConfigCheckCompletion;
-(BOOL)removed:(id)arg0 ;
-(BOOL)updated:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(int)_applyConfigStart;
-(int)_configureStart:(id)arg0 ;
-(int)_findDevicePostConfigStart;
-(int)_findDevicePreConfigStart;
-(int)_mfiSAPNext:(struct HTTPMessagePrivate *)arg0 ;
-(int)_mfiSAPStart;
-(int)_pairSetupNext:(struct HTTPMessagePrivate *)arg0 ;
-(int)_pairSetupStart;
-(int)_pairVerifyNext:(struct HTTPMessagePrivate *)arg0 ;
-(int)_pairVerifyStart;
-(int)_setupClient:(id)arg0 ;
-(int)_startBonjourWithTimeout:(int)arg0 handler:(id)arg1 ;
-(int)_timeoutTimerStart:(int)arg0 block:(id)arg1 ;
-(void)_findDevicePostConfigEvent:(unsigned int)arg0 info:(id)arg1 ;
-(void)_findDevicePreConfigEvent:(unsigned int)arg0 info:(id)arg1 ;
-(void)_handleError:(int)arg0 ;
-(void)_logEnded;
-(void)_postConfigCheckStart:(id)arg0 ;
-(void)_postNote:(id)arg0 info:(id)arg1 ;
-(void)_postProgress:(int)arg0 info:(id)arg1 ;
-(void)_postProgress:(int)arg0 withResponse:(id)arg1 ;
-(void)_start;
-(void)_stop:(int)arg0 ;
-(void)_trySetupCode:(id)arg0 ;
-(void)dealloc;
-(void)resumePostConfig;
-(void)setPairingDelegate:(*void)arg0 ;
-(void)setPostConfigMetrics:(struct ? *)arg0 ;
-(void)setPreConfigMetrics:(struct ? *)arg0 ;
-(void)setPromptForSetupCodeHandler:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)trySetupCode:(id)arg0 ;


@end


#endif