// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCONNECTIONUNLOCKCLIENT_H
#define PUCONNECTIONUNLOCKCLIENT_H

@class NSString;
@protocol PUUnlockClient;

#import <Foundation/Foundation.h>

#import "PUConnection.h"

@interface PUConnectionUnlockClient : NSObject <PUUnlockClient>



@property (weak, nonatomic) PUConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 ;
-(void)didDisableOnlyRemoteUnlock:(BOOL)arg0 error:(id)arg1 ;
-(void)didEnableOnlyRemoteUnlock:(BOOL)arg0 error:(id)arg1 ;
-(void)didGetRemoteDeviceState:(id)arg0 error:(id)arg1 ;
-(void)didPairForUnlock:(BOOL)arg0 error:(id)arg1 ;
-(void)didUnpairForUnlock:(BOOL)arg0 error:(id)arg1 ;
-(void)remoteDeviceDidCompleteRemoteAction:(BOOL)arg0 remoteDeviceState:(id)arg1 error:(id)arg2 ;
-(void)remoteDeviceDidRemoveLockout:(BOOL)arg0 error:(id)arg1 ;
-(void)remoteDeviceDidUnlock;


@end


#endif