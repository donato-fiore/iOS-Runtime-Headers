// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXVIRTUALDEVICE_H
#define SVXVIRTUALDEVICE_H

@class NSDictionary, AFInstanceContext, AFAnalytics, AFPreferences;
@protocol SVXActivationHandling, SVXDeactivationHandling, SVXMyriadEventHandling, SVXPrewarmHandling;

#import <Foundation/Foundation.h>

#import "SVXModuleInstanceMap.h"
#import "SVXClientServiceServer.h"
#import "SVXDeviceSetupManager.h"
#import "SVXSessionManager.h"
#import "SVXSpeechSynthesizer.h"

@interface SVXVirtualDevice : NSObject {
    NSDictionary *_modulesByIdentifier;
    SVXModuleInstanceMap *_moduleInstanceMap;
    AFInstanceContext *_instanceContext;
    AFAnalytics *_analytics;
}


@property (readonly, nonatomic) NSObject<SVXActivationHandling> *activationHandler;
@property (readonly, nonatomic) SVXClientServiceServer *clientServiceServer;
@property (readonly, nonatomic) NSObject<SVXDeactivationHandling> *deactivationHandler;
@property (readonly, nonatomic) SVXDeviceSetupManager *deviceSetupManager;
@property (readonly, nonatomic) NSObject<SVXMyriadEventHandling> *myriadEventHandler;
@property (readonly, nonatomic) AFPreferences *preferences; // ivar: _preferences
@property (readonly, nonatomic) NSObject<SVXPrewarmHandling> *prewarmHandler;
@property (readonly, nonatomic) SVXSessionManager *sessionManager;
@property (readonly, nonatomic) SVXSpeechSynthesizer *speechSynthesizer;


-(id)description;
-(id)initWithInstanceContext:(id)arg0 ;
-(void)_startWithModuleInstanceMap:(id)arg0 platformDependencies:(id)arg1 ;
-(void)_stopWithModuleInstanceMap:(id)arg0 ;
-(void)startWithPlatformDependencies:(id)arg0 ;
-(void)stop;


@end


#endif