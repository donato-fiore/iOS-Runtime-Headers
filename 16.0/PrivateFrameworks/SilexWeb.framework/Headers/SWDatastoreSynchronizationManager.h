// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWDATASTORESYNCHRONIZATIONMANAGER_H
#define SWDATASTORESYNCHRONIZATIONMANAGER_H

@class NSString;
@protocol SWMessageHandler, SWDatastoreSynchronizationManager, SWDatastoreManager, SWLogger, SWScriptsManager, SWSessionManager, SWDatastoreFactory;

#import <Foundation/Foundation.h>


@interface SWDatastoreSynchronizationManager : NSObject <SWMessageHandler, SWDatastoreSynchronizationManager>



@property (weak, nonatomic) NSObject<SWDatastoreManager> *datastoreManager; // ivar: _datastoreManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SWDatastoreManager> *localDatastoreManager; // ivar: _localDatastoreManager
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<SWScriptsManager> *scriptsManager; // ivar: _scriptsManager
@property (readonly, nonatomic) NSObject<SWSessionManager> *sessionManager; // ivar: _sessionManager
@property (readonly, nonatomic) NSObject<SWDatastoreFactory> *settingsFactory; // ivar: _settingsFactory
@property (readonly) Class superclass;


-(id)initWithSettingsFactory:(id)arg0 scriptsManager:(id)arg1 messageHandlerManager:(id)arg2 sessionManager:(id)arg3 logger:(id)arg4 ;
-(void)didReceiveMessage:(id)arg0 securityOrigin:(id)arg1 ;
-(void)synchronizeDatastore:(id)arg0 from:(id)arg1 previousDatastore:(id)arg2 originatingSession:(id)arg3 completion:(id)arg4 ;


@end


#endif