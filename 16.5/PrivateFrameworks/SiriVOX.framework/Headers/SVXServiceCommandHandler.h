// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSERVICECOMMANDHANDLER_H
#define SVXSERVICECOMMANDHANDLER_H

@class NSMutableSet, MDFixedModeProvider, NSString;
@protocol SVXModuleInstance;

#import <Foundation/Foundation.h>

#import "SVXModule.h"
#import "SVXServiceCommandHandlerRegistry.h"
#import "SVXServiceCommandHandlerFallback.h"
#import "SVXServiceCommandDelayedActionStore.h"

@interface SVXServiceCommandHandler : NSObject <SVXModuleInstance>

 {
    SVXModule *_module;
    SVXServiceCommandHandlerRegistry *_handlerRegistry;
    SVXServiceCommandHandlerFallback *_fallbackHandler;
    SVXServiceCommandDelayedActionStore *_delayedActionStore;
    NSMutableSet *_transactions;
    MDFixedModeProvider *_fallbackModeProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isCommandUUFR:(id)arg0 ;
-(id)fallbackModeProvider;
-(id)initWithModule:(id)arg0 ;
-(void)_handleCommand:(id)arg0 taskTracker:(id)arg1 completion:(id)arg2 ;
-(void)_reset;
-(void)handleCommand:(id)arg0 taskTracker:(id)arg1 completion:(id)arg2 ;
-(void)handleResult:(id)arg0 forCommand:(id)arg1 completion:(id)arg2 ;
-(void)reset;
-(void)startWithModuleInstanceProvider:(id)arg0 platformDependencies:(id)arg1 ;
-(void)stopWithModuleInstanceProvider:(id)arg0 ;


@end


#endif