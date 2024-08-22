// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BYBUDDYDAEMONMIGRATIONSOURCECLIENT_H
#define BYBUDDYDAEMONMIGRATIONSOURCECLIENT_H

@class NSXPCConnection, NSString;
@protocol BYClientMigrationSourceProtocol, BYDeviceMigrationDelegate;

#import <Foundation/Foundation.h>


@interface BYBuddyDaemonMigrationSourceClient : NSObject <BYClientMigrationSourceProtocol>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BYDeviceMigrationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clientInterface;
-(id)init;
-(void)_connectToDaemon;
-(void)cancel;
-(void)didChangeConnectionInformation:(id)arg0 ;
-(void)didFinishWithError:(id)arg0 ;
-(void)didUpdateProgress:(id)arg0 ;
-(void)launchSetupForMigration;
-(void)registerAsUserInterfaceHost:(id)arg0 ;
-(void)setFileTransferTemplate:(id)arg0 ;


@end


#endif