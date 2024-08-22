// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXCLIENTSERVICESERVER_H
#define SVXCLIENTSERVICESERVER_H

@class NSMutableDictionary, NSString;
@protocol SVXModuleInstance;

#import <Foundation/Foundation.h>

#import "SVXModule.h"
#import "SVXDeviceSetupManager.h"
#import "SVXSessionManager.h"
#import "SVXSpeechSynthesizer.h"

@interface SVXClientServiceServer : NSObject <SVXModuleInstance>

 {
    SVXModule *_module;
    NSMutableDictionary *_connectionsByUUID;
    SVXDeviceSetupManager *_deviceSetupManager;
    SVXSessionManager *_sessionManager;
    SVXSpeechSynthesizer *_speechSynthesizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithModule:(id)arg0 ;
-(void)_addConnection:(id)arg0 ;
-(void)_removeAllConnections;
-(void)_removeConnection:(id)arg0 ;
-(void)addConnection:(id)arg0 ;
-(void)dealloc;
-(void)removeConnection:(id)arg0 ;
-(void)startWithModuleInstanceProvider:(id)arg0 platformDependencies:(id)arg1 ;
-(void)stopWithModuleInstanceProvider:(id)arg0 ;


@end


#endif