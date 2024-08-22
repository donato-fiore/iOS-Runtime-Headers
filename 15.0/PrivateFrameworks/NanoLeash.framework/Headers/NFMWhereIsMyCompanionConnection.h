// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFMWHEREISMYCOMPANIONCONNECTION_H
#define NFMWHEREISMYCOMPANIONCONNECTION_H

@class NSString, NSXPCConnection;
@protocol NFMWhereIsMyCompanionConnectionProtocol;

#import <Foundation/Foundation.h>


@interface NFMWhereIsMyCompanionConnection : NSObject <NFMWhereIsMyCompanionConnectionProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *playSoundAndLEDCompletion; // ivar: _playSoundAndLEDCompletion
@property (copy, nonatomic) id *playSoundCompletion; // ivar: _playSoundCompletion
@property (retain) NSXPCConnection *serverConnection; // ivar: _serverConnection
@property (readonly) Class superclass;


+(id)sharedDeviceConnection;
-(id)init;
-(void)applicationIdentifierWithReply:(id)arg0 ;
-(void)playSoundAndLightsOnCompanionWithCompletion:(id)arg0 ;
-(void)playSoundOnCompanionWithCompletion:(id)arg0 ;
-(void)playedSound:(BOOL)arg0 ;
-(void)playedSoundAndLED:(BOOL)arg0 ;


@end


#endif