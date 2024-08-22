// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSDEBUGINTERFACE_H
#define SBSDEBUGINTERFACE_H

@class NSXPCConnection;
@protocol SBSDebugInfoImplementer;

#import <Foundation/Foundation.h>


@interface SBSDebugInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSDebugInfoImplementer> *_sbProxy;
}




-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(void)dealloc;
-(void)disassociateCurrentNetwork;
-(void)disassociateNetworkWithName:(id)arg0 ;
-(void)getAllDebugInfo:(id)arg0 ;
-(void)getFeatureFlags:(id)arg0 ;
-(void)getLEDInfo:(id)arg0 ;
-(void)getSelectDebugInfo:(id)arg0 reply:(id)arg1 ;
-(void)getTuningInfo:(id)arg0 ;
-(void)getUserDefaults:(id)arg0 ;
-(void)getVolume:(id)arg0 ;
-(void)injectSWUpdateToHome:(id)arg0 ;
-(void)playTone:(unsigned int)arg0 ;
-(void)resetAllUserDefaults;
-(void)resetUserDefault:(id)arg0 ;
-(void)sendButtonCommand:(id)arg0 ;
-(void)sendLEDCommand:(id)arg0 ;
-(void)setBootSpinner:(BOOL)arg0 ;
-(void)setFeatureFlags:(id)arg0 ;
-(void)setLEDContents:(id)arg0 ;
-(void)setTuningInfoOnBox:(id)arg0 at:(id)arg1 withValue:(float)arg2 ;
-(void)setUserDefaults:(id)arg0 withValue:(id)arg1 ;
-(void)setVolume:(float)arg0 ;
-(void)setWifiEnabled:(BOOL)arg0 ;
-(void)siriSay:(id)arg0 ;
-(void)stopTone:(unsigned int)arg0 ;
-(void)suScanForSoftwareUpdate;
-(void)triggerWiFiCoreCapture:(id)arg0 ;


@end


#endif