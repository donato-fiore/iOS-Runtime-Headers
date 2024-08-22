// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWDATASTORESYNCHRONIZATIONMANAGER_H
#define SWDATASTORESYNCHRONIZATIONMANAGER_H

@class NSString;
@protocol SWMessageHandler, SWDatastoreObserver, SWDatastoreSynchronizationManager, SWDatastoreManager, SWLogger, SWScriptsManager, SWSessionManager, SWDatastoreFactory;

#import <Foundation/Foundation.h>


@interface SWDatastoreSynchronizationManager : NSObject <SWMessageHandler, SWDatastoreObserver, SWDatastoreSynchronizationManager>



@property (readonly, nonatomic) NSObject<SWDatastoreManager> *datastoreManager; // ivar: _datastoreManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<SWScriptsManager> *scriptsManager; // ivar: _scriptsManager
@property (readonly, nonatomic) NSObject<SWSessionManager> *sessionManager; // ivar: _sessionManager
@property (readonly, nonatomic) NSObject<SWDatastoreFactory> *settingsFactory; // ivar: _settingsFactory
@property (readonly) Class superclass;


-(id)initWithDatastoreManager:(id)arg0 settingsFactory:(id)arg1 scriptsManager:(id)arg2 messageHandlerManager:(id)arg3 sessionManager:(id)arg4 logger:(id)arg5 ;
-(void)datastoreManager:(id)arg0 didChangeFromDatastore:(id)arg1 originatingSession:(id)arg2 ;
-(void)dealloc;
-(void)didReceiveMessage:(id)arg0 securityOrigin:(id)arg1 ;


@end


#endif