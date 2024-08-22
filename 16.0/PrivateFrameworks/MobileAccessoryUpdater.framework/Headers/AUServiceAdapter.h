// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUSERVICEADAPTER_H
#define AUSERVICEADAPTER_H

@class NSXPCConnection, NSString;
@protocol AUServiceProtocol, FudPluginDelegate, FudPlugin;

#import <Foundation/Foundation.h>


@interface AUServiceAdapter : NSObject <AUServiceProtocol, FudPluginDelegate>



@property (nonatomic) NSXPCConnection *activeConnection; // ivar: _activeConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<FudPlugin> *updater; // ivar: _updater


+(id)sharedInstance;
-(BOOL)hasActiveConnection;
-(id)_init;
-(void)accessoryDisconnected:(id)arg0 ;
-(void)applyFirmwareWithOptions:(id)arg0 ;
-(void)bootstrapWithOptions:(id)arg0 ;
-(void)deviceClassAttached:(id)arg0 options:(id)arg1 withReply:(id)arg2 ;
-(void)didApply:(BOOL)arg0 info:(id)arg1 error:(id)arg2 ;
-(void)didBootstrap:(BOOL)arg0 info:(id)arg1 error:(id)arg2 ;
-(void)didDownload:(BOOL)arg0 info:(id)arg1 error:(id)arg2 ;
-(void)didFind:(BOOL)arg0 info:(id)arg1 updateAvailable:(BOOL)arg2 needsDownload:(BOOL)arg3 error:(id)arg4 ;
-(void)didFinish:(BOOL)arg0 info:(id)arg1 error:(id)arg2 ;
-(void)didPrepare:(BOOL)arg0 info:(id)arg1 error:(id)arg2 ;
-(void)downloadFirmwareWithOptions:(id)arg0 ;
-(void)findFirmwareWithOptions:(id)arg0 remote:(BOOL)arg1 ;
-(void)finishWithOptions:(id)arg0 ;
-(void)issueNotification:(id)arg0 ;
-(void)log:(int)arg0 format:(id)arg1 ;
-(void)logv:(int)arg0 format:(id)arg1 arguments:(char *)arg2 ;
-(void)personalizationRequest:(id)arg0 ;
-(void)personalizationResponse:(id)arg0 response:(id)arg1 status:(id)arg2 ;
-(void)prepareFirmwareWithOptions:(id)arg0 ;
-(void)progress:(CGFloat)arg0 ;
-(void)queryDeviceList:(id)arg0 ;
-(void)reportAnalytics:(id)arg0 info:(id)arg1 ;


@end


#endif