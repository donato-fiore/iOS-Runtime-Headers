// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMAVCONTROLLER_H
#define IMAVCONTROLLER_H

@class NSMutableArray, NSArray;
@protocol IMAVControllerDelegate;

#import <Foundation/Foundation.h>


@interface IMAVController : NSObject

@property (retain, nonatomic) NSMutableArray *_delegates; // ivar: _delegates
@property (readonly, nonatomic) BOOL _ready;
@property (nonatomic) BOOL blockIncomingInvitationsDuringCall; // ivar: _blockIncomingInvitationsDuringCall
@property (nonatomic) BOOL blockMultipleIncomingInvitations; // ivar: _blockMultipleIncomingInvitations
@property (nonatomic) BOOL blockOutgoingInvitationsDuringCall; // ivar: _blockOutgoingInvitationsDuringCall
@property (readonly, nonatomic) BOOL cameraCapable;
@property (readonly, nonatomic) BOOL cameraConnected;
@property (nonatomic) NSObject<IMAVControllerDelegate> *delegate;
@property (readonly, nonatomic) NSArray *delegates;
@property (readonly, nonatomic) BOOL hasActiveConference;
@property (readonly, nonatomic) BOOL hasRunningConference;
@property (readonly, nonatomic) BOOL microphoneCapable;
@property (readonly, nonatomic) BOOL microphoneConnected;
@property (readonly, nonatomic) unsigned int overallChatState;


+(id)sharedInstance;
-(BOOL)_shouldObserveConferences;
-(BOOL)_shouldRunACConferences;
-(BOOL)_shouldRunConferences;
-(id)init;
-(id)vcResponseInfoWithSessionID:(unsigned int)arg0 ;
-(void)_dumpCaps;
-(void)_receivedPendingACRequests;
-(void)_receivedPendingVCRequests;
-(void)_setServiceVCCaps:(NSUInteger)arg0 toCaps:(NSUInteger)arg1 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)blockOnPendingVCInvitationsWithCapabilities:(NSInteger)arg0 ;
-(void)cancelVCRequestWithBuddy:(id)arg0 vcProps:(id)arg1 forAccount:(id)arg2 conferenceID:(id)arg3 reason:(id)arg4 ;
-(void)declineVCRequestWithBuddy:(id)arg0 response:(unsigned int)arg1 vcProps:(id)arg2 conferenceID:(id)arg3 ;
-(void)declineVCRequestWithBuddy:(id)arg0 response:(unsigned int)arg1 vcProps:(id)arg2 forAccount:(id)arg3 conferenceID:(id)arg4 ;
-(void)pushCachedVCCapsToDaemon;
-(void)removeDelegate:(id)arg0 ;
-(void)requestPendingACInvitations;
-(void)requestPendingVCInvitations;
-(void)setIMAVCapabilities:(NSInteger)arg0 toCaps:(NSInteger)arg1 ;
-(void)setupIMAVController;
-(void)updateActiveConference;
-(void)vcCapabilitiesChanged:(NSUInteger)arg0 ;


@end


#endif