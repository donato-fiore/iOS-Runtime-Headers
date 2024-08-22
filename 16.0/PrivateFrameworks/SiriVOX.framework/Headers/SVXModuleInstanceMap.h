// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXMODULEINSTANCEMAP_H
#define SVXMODULEINSTANCEMAP_H

@class NSString, NSDictionary;
@protocol SVXModuleInstanceProviding;

#import <Foundation/Foundation.h>

#import "SVXClientServiceServer.h"
#import "SVXDeviceSetupManager.h"
#import "SVXServiceCommandHandler.h"
#import "SVXSessionManager.h"
#import "SVXSpeechSynthesizer.h"
#import "SVXSystemObserver.h"

@interface SVXModuleInstanceMap : NSObject <SVXModuleInstanceProviding>



@property (readonly, nonatomic) SVXClientServiceServer *clientServiceServer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SVXDeviceSetupManager *deviceSetupManager;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation; // ivar: _dictionaryRepresentation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SVXServiceCommandHandler *serviceCommandHandler;
@property (readonly, nonatomic) SVXSessionManager *sessionManager;
@property (readonly, nonatomic) SVXSpeechSynthesizer *speechSynthesizer;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SVXSystemObserver *systemObserver;


-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)moduleInstanceWithIdentifier:(id)arg0 ;


@end


#endif