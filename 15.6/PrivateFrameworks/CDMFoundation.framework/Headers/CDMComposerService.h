// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMCOMPOSERSERVICE_H
#define CDMCOMPOSERSERVICE_H

@class NSString, NSDictionary, NSMutableDictionary, NSArray, NSLock, NSOrderedSet;


#import "CDMBaseService.h"
#import "CDMServiceGraphRunner.h"

@interface CDMComposerService : CDMBaseService {
    NSString *_languageCode;
    NSDictionary *_startCommand;
    NSMutableDictionary *_clientIdPropDict;
    NSArray *_servicesArray;
    CDMServiceGraphRunner *_serviceGraphRunner;
    NSLock *_aneLock;
    NSOrderedSet *_availableServiceGraphs;
    NSString *_currentServiceGraph;
}




-(id)createWithId:(id)arg0 serviceGraphType:(id)arg1 graphInput:(id)arg2 languageCode:(id)arg3 startCommand:(id)arg4 selfMetadata:(id)arg5 ;
-(id)getCurrentServiceGraph;
-(id)initWithConfig:(id)arg0 ;
-(id)supportedCommands;
-(void)_handleListGraphs:(id)arg0 withCallback:(id)arg1 ;
-(void)_handleNLURequest:(id)arg0 withCallback:(id)arg1 ;
-(void)_handleSetActiveGraph:(id)arg0 withCallback:(id)arg1 ;
-(void)_handleSetupRequest:(id)arg0 withCallback:(id)arg1 ;
-(void)failWithError:(id)arg0 rawCommand:(id)arg1 callback:(id)arg2 ;
-(void)handleCommand:(id)arg0 withCallback:(id)arg1 ;
-(void)logNluRequestForInsights:(id)arg0 ;
-(void)setCurrentServiceGraph:(id)arg0 ;
-(void)updateServiceGraphRunner:(id)arg0 ;
-(void)updateServices:(id)arg0 ;


@end


#endif