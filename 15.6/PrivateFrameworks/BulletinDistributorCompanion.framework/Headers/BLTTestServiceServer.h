// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTTESTSERVICESERVER_H
#define BLTTESTSERVICESERVER_H

@class NSMutableArray, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, BLTTTestServiceServerExportedInterface;

#import <Foundation/Foundation.h>


@interface BLTTestServiceServer : NSObject <NSXPCListenerDelegate, BLTTTestServiceServerExportedInterface>



@property (retain, nonatomic) NSMutableArray *clientConnections; // ivar: _clientConnections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


+(id)sharedTestServer;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_removeClientConnection:(id)arg0 ;
-(void)addBulletin:(id)arg0 forFeed:(NSUInteger)arg1 playLightsAndSirens:(BOOL)arg2 attachment:(id)arg3 attachmentType:(NSInteger)arg4 alwaysSend:(BOOL)arg5 completion:(id)arg6 ;
-(void)clearSectionInfoSentCacheWithCompletion:(id)arg0 ;
-(void)disableStandaloneTestModeWithCompletion:(id)arg0 ;
-(void)enableStandaloneTestModeWithMinimumSendDelay:(NSUInteger)arg0 maximumSendDelay:(NSUInteger)arg1 minimumResponseDelay:(NSUInteger)arg2 maximumResponseDelay:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)getStandaloneTestModeEnabledWithCompletion:(id)arg0 ;
-(void)logFaultWithCompletion:(id)arg0 ;
-(void)originalSettingsWithCompletion:(id)arg0 ;
-(void)overriddenSettingsWithCompletion:(id)arg0 ;
-(void)removeSectionID:(id)arg0 completion:(id)arg1 ;
-(void)resume;
-(void)sendAllSectionInfoWithSpool:(BOOL)arg0 completion:(id)arg1 ;
-(void)sendSectionInfoWithSectionID:(id)arg0 completion:(id)arg1 ;
-(void)settingOverridesWithCompletion:(id)arg0 ;
-(void)simulateAnalytics:(id)arg0 completion:(id)arg1 ;
-(void)spoolSectionInfoWithCompletion:(id)arg0 ;
-(void)willAlertForSectionID:(id)arg0 subtype:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif