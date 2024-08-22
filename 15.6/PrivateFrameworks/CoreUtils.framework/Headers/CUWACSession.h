// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUWACSESSION_H
#define CUWACSESSION_H

@class NSDictionary, EasyConfigDevice, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUWiFiDevice.h"

@interface CUWACSession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    *LogCategory _ucat;
    int _saveOriginalWiFiState;
    NSDictionary *_originalWiFiInfo;
    int _joinSoftAPState;
    CGFloat _joinSoftAPStartTime;
    EasyConfigDevice *_easyConfigDevice;
    int _easyConfigPreConfigState;
    ? _easyConfigPreConfigMetrics;
    int _restoreOriginalWiFiState;
    CGFloat _restoreStartTime;
    int _easyConfigPostConfigState;
    ? _easyConfigPostConfigMetrics;
    int _finishState;
}


@property (copy, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (copy, nonatomic) id *promptForSetupCodeHandler; // ivar: _promptForSetupCodeHandler
@property (retain, nonatomic) CUWiFiDevice *wacDevice; // ivar: _wacDevice


-(id)init;
-(int)_runEasyConfigPostConfig;
-(int)_runEasyConfigPreConfig;
-(int)_runFinish;
-(int)_runJoinSoftAP;
-(int)_runRestoreOriginalWiFi;
-(int)_runSaveOriginalWiFi;
-(void)_cleanup;
-(void)_progress:(unsigned int)arg0 info:(id)arg1 ;
-(void)_run;
-(void)_runEasyConfigPreConfigStart;
-(void)_runEasyConfigProgress:(int)arg0 info:(id)arg1 ;
-(void)_runFinishRestored:(int)arg0 ;
-(void)_runJoinSoftAPFinished:(int)arg0 ;
-(void)_runJoinSoftAPStart;
-(void)_runRestoreOriginalWiFiFinished:(int)arg0 ;
-(void)_runRestoreOriginalWiFiStart;
-(void)activate;
-(void)dealloc;
-(void)invalidate;
-(void)trySetupCode:(id)arg0 ;


@end


#endif