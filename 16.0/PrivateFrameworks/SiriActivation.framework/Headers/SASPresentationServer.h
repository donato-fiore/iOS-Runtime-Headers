// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASPRESENTATIONSERVER_H
#define SASPRESENTATIONSERVER_H

@class BSServiceConnection<BSServiceConnectionHost>, NSMutableArray, BSServiceConnectionEndpointInjector;
@protocol SASPresentationServerDelegate;

#import <Foundation/Foundation.h>


@interface SASPresentationServer : NSObject

@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection; // ivar: _connection
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (nonatomic) NSInteger presentationIdentifier; // ivar: _presentationIdentifier
@property (retain, nonatomic) NSMutableArray *waitForConnectBlocks; // ivar: _waitForConnectBlocks
@property (weak, nonatomic) NSObject<SASPresentationServerDelegate> *weak_delegate; // ivar: _weak_delegate
@property (retain, nonatomic) BSServiceConnectionEndpointInjector *workspaceServiceInjector; // ivar: _workspaceServiceInjector


+(id)interface;
+(id)serverForConnection:(id)arg0 ;
+(id)serviceQuality;
+(void)_unregisterConnection:(id)arg0 ;
-(id)allBulletins;
-(id)bulletinForIdentifier:(id)arg0 ;
-(id)bulletinsOnLockScreen;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)didDismiss;
-(void)didPresentSiri;
-(void)didUpdatePresentationState:(id)arg0 ;
-(void)failedToPresentSiriWithError:(id)arg0 ;
-(void)pong;
-(void)registerPresentationIdentifier:(id)arg0 ;
-(void)resetSiriToActive;
-(void)speechRequestCancelledFromSiriOrb;
-(void)speechRequestStartedFromSiriOrb;
-(void)unregisterPresentationIdentifier:(id)arg0 ;
-(void)willDismiss;


@end


#endif