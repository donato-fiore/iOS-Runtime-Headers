// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SESSESSIONMANAGER_H
#define SESSESSIONMANAGER_H

@class NSXPCConnection, NSString, NSMutableSet;
@protocol SESSessionManagerCallbackInterface;

#import <Foundation/Foundation.h>


@interface SESSessionManager : NSObject <SESSessionManagerCallbackInterface>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain) NSMutableSet *sessions; // ivar: _sessions
@property (readonly) Class superclass;


+(id)getVehicleReports:(*id)arg0 ;
+(id)pauseRangingForReaderIdentifier:(id)arg0 durationInSec:(id)arg1 ;
+(id)resumeRangingForReaderIdentifier:(id)arg0 ;
+(id)sharedInstance;
+(void)setMachServiceName:(id)arg0 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)startDCKAssertionForKeyIdentifier:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(id)startDigitalCarKeySessionWithOptions:(id)arg0 startCallback:(id)arg1 ;
-(id)startRKESessionWithOptions:(id)arg0 startCallback:(id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)connect;
-(void)sessionEnded:(id)arg0 ;


@end


#endif