// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACCCOMMUNICATIONSCENTER_H
#define ACCCOMMUNICATIONSCENTER_H

@class NSMutableDictionary, NSString, NSXPCConnection, NSSet;
@protocol ACCCommunicationsXPCClientProtocol, ACCCommunicationsCenterCallControlsDelegate, ACCCommunicationsCenterCallStateDelegate, ACCCommunicationsCenterCommunicationsDelegate, ACCCommunicationsCenterListUpdatesDelegate, ACCCommunicationsXPCServerProtocol;

#import <Foundation/Foundation.h>


@interface ACCCommunicationsCenter : NSObject <ACCCommunicationsXPCClientProtocol>



@property (retain) NSMutableDictionary *cachedCommStatus; // ivar: _cachedCommStatus
@property (weak, nonatomic) NSObject<ACCCommunicationsCenterCallControlsDelegate> *callControlsDelegate; // ivar: _callControlsDelegate
@property (retain) NSMutableDictionary *callStateCache; // ivar: _callStateCache
@property (weak, nonatomic) NSObject<ACCCommunicationsCenterCallStateDelegate> *callStateDelegate; // ivar: _callStateDelegate
@property (weak, nonatomic) NSObject<ACCCommunicationsCenterCommunicationsDelegate> *communicationsDelegate; // ivar: _communicationsDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<ACCCommunicationsCenterListUpdatesDelegate> *listUpdatesDelegate; // ivar: _listUpdatesDelegate
@property (readonly, nonatomic) NSUInteger maxFavoritesListEntries; // ivar: _maxFavoritesListEntries
@property (readonly, nonatomic) NSUInteger maxRecentsListEntries; // ivar: _maxRecentsListEntries
@property (retain, nonatomic) NSObject<ACCCommunicationsXPCServerProtocol> *remoteObject; // ivar: _remoteObject
@property (retain, nonatomic) NSXPCConnection *serverConnection; // ivar: _serverConnection
@property (retain, nonatomic) NSSet *subscriberList; // ivar: _subscriberList
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCallStateDelegate:(id)arg0 andCommunicationsDelegate:(id)arg1 andCallControlsDelegate:(id)arg2 andListUpdatesDelegate:(id)arg3 ;
-(void)acceptCallWithAction:(int)arg0 callUUID:(id)arg1 ;
-(void)callStateDidChange:(id)arg0 ;
-(void)commStatusDidChange:(id)arg0 ;
-(void)connectToServer;
-(void)dealloc;
-(void)endAllCalls;
-(void)endCallWithAction:(int)arg0 callUUID:(id)arg1 ;
-(void)favoritesListDidChange;
-(void)initiateCallToDestination:(id)arg0 withService:(int)arg1 addressBookID:(id)arg2 ;
-(void)initiateCallToVoicemail;
-(void)initiateRedial;
-(void)mergeCalls;
-(void)recentsListDidChange;
-(void)sendDTMF:(int)arg0 forCallWithUUID:(id)arg1 ;
-(void)swapCalls;
-(void)triggerCallStateUpdatesWithReply:(id)arg0 ;
-(void)triggerCommunicationsUpdateWithReply:(id)arg0 ;
-(void)triggerUpdateForListType:(int)arg0 coalesce:(BOOL)arg1 withReply:(id)arg2 ;
-(void)updateHoldStatus:(BOOL)arg0 forCallWithUUID:(id)arg1 ;
-(void)updateMuteStatus:(BOOL)arg0 ;
-(void)updateSubscriberList:(id)arg0 withReply:(id)arg1 ;


@end


#endif