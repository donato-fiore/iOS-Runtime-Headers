// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKDEVICE_H
#define GKDEVICE_H

@class NSString, GKEventEmitter<GKLockStatusObserver>;

#import <Foundation/Foundation.h>


@interface GKDevice : NSObject {
    NSString *_udid;
}


@property (readonly, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) GKEventEmitter<GKLockStatusObserver> *emitter; // ivar: _emitter
@property (readonly, nonatomic, getter=isGameKitAvailable) BOOL gameKitAvailable; // ivar: _gameKitAvailable
@property (readonly, nonatomic) NSString *gameKitVersion; // ivar: _gameKitVersion
@property (readonly, nonatomic, getter=isInternalBuild) BOOL internalBuild;
@property (readonly, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (readonly, nonatomic) NSString *udid;


+(id)currentDevice;
-(BOOL)isDevelopmentDevice;
-(BOOL)isFocusDevice;
-(BOOL)isProductType:(unsigned int)arg0 ;
-(id)_platformUDID;
-(id)init;
-(id)platformBuildVersion;
-(id)processNameHeader;
-(id)protocolVersionHeader;
-(id)storeUserAgent;
-(id)userAgent;
-(id)userAgentWithProcessName:(id)arg0 protocolVersion:(id)arg1 ;
-(void)_initPlatform;
-(void)addLockStatusObserver:(id)arg0 ;
-(void)beginObservingKeyBagStatusWithCallback:(*unk)arg0 ;
-(void)dealloc;
-(void)removeLockStatusObserver:(id)arg0 ;
-(void)stopObservingKeyBagStatus;


@end


#endif