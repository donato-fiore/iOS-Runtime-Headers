// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALLDBMANAGERCLIENT_H
#define CALLDBMANAGERCLIENT_H

@class NSXPCConnection;


#import "CallDBManager.h"

@interface CallDBManagerClient : CallDBManager

@property (retain) NSXPCConnection *helperConnection; // ivar: _helperConnection
@property (retain) id *syncHelperReadyNotificationRef; // ivar: _syncHelperReadyNotificationRef


-(BOOL)validatePermDatabase;
-(BOOL)validateTempDatabase;
-(BOOL)willMoveCallsFromTempDatabase;
-(id)permDBLocation:(*unsigned char)arg0 ;
-(id)tempDBLocation:(*unsigned char)arg0 ;
-(void)createHelperConnection;
-(void)createPermanent;
-(void)createTemporary;
-(void)handlePermanentCreated;
-(void)moveCallsFromTempDatabase;
-(void)pokeSyncHelperToInitDB;


@end


#endif