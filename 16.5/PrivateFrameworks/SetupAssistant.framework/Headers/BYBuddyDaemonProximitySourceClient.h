// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BYBUDDYDAEMONPROXIMITYSOURCECLIENT_H
#define BYBUDDYDAEMONPROXIMITYSOURCECLIENT_H

@class NSXPCConnection, NSString;
@protocol BYDaemonProximitySourceProtocol, BYBuddyDaemonProximitySourceProtocol;

#import <Foundation/Foundation.h>


@interface BYBuddyDaemonProximitySourceClient : NSObject <BYDaemonProximitySourceProtocol, BYBuddyDaemonProximitySourceProtocol>



@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<BYBuddyDaemonProximitySourceProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)proximitySourceClientInterface;
-(id)init;
-(void)activateWithSharingChannel:(id)arg0 ;
-(void)backupCompletedWithError:(id)arg0 ;
-(void)backupProgress:(CGFloat)arg0 estimatedTimeRemaining:(NSInteger)arg1 ;
-(void)connectToDaemon;
-(void)finishedWithError:(id)arg0 ;
-(void)invalidate;
-(void)receivedData:(id)arg0 ;
-(void)syncCompletedWithErrors:(id)arg0 ;
-(void)syncProgress:(CGFloat)arg0 ;


@end


#endif