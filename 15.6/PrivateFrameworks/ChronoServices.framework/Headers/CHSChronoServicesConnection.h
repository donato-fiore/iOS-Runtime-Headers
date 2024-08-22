// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSCHRONOSERVICESCONNECTION_H
#define CHSCHRONOSERVICESCONNECTION_H

@class BSServiceConnection, NSMutableSet, NSDictionary, NSMutableDictionary, NSString;
@protocol CHSChronoWidgetServiceClientInterface, CHSChronoWidgetServiceServer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHSChronoServicesConnection : NSObject <CHSChronoWidgetServiceClientInterface, CHSChronoWidgetServiceServer>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BSServiceConnection *_queue_connection;
    BOOL _queue_connectionIsActive;
    NSMutableSet *_queue_clients;
    NSDictionary *_queue_lastDescriptorsByExtensionIdentifier;
    NSMutableDictionary *_queue_widgetConfigurationsByHostIdentifier;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    int _serverStartupToken;
}


@property (readonly, nonatomic) NSDictionary *cachedDescriptorsByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)_debugRestartServer;
-(BOOL)reloadTimeline:(id)arg0 error:(*id)arg1 ;
-(BOOL)reloadTimelineForAvocadoWithIdentifier:(id)arg0 inBundleWithIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)arg0 info:(id)arg1 ;
-(id)_init;
-(id)_queue_remoteTargetCreatingConnectionIfNecessary:(BOOL)arg0 ;
-(id)descriptors:(*id)arg0 ;
-(id)init;
-(id)widgetEnvironmentDataForBundleIdentifier:(id)arg0 ;
-(void)_queue_addClient:(id)arg0 ;
-(void)_queue_createConnection;
-(void)_queue_invalidateConnection;
-(void)_queue_noteDescriptorsDidChange:(id)arg0 ;
-(void)_queue_removeClient:(id)arg0 ;
-(void)addClient:(id)arg0 ;
-(void)allWidgetConfigurationsByHostWithCompletion:(id)arg0 ;
-(void)applicationWithBundleIdentifierEnteredForeground:(id)arg0 ;
-(void)avocadoDescriptorsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)flushPowerlog;
-(void)loadSuggestedWidget:(id)arg0 metrics:(id)arg1 stackIdentifier:(id)arg2 reason:(id)arg3 completion:(id)arg4 ;
-(void)removeClient:(id)arg0 ;
-(void)removeWidgetHostWithIdentifier:(id)arg0 ;
-(void)setWidgetConfiguration:(id)arg0 forWidgetHostWithIdentifier:(id)arg1 ;
-(void)suggestionBudgetsForStackIdentifiers:(id)arg0 completion:(id)arg1 ;


@end


#endif