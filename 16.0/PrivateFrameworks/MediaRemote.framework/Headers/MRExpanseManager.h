// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MREXPANSEMANAGER_H
#define MREXPANSEMANAGER_H

@class NSString, AVAudioSession, TUNeighborhoodActivityConduit, TUConversationManager, NSHashTable;
@protocol TUConversationManagerDelegate, TUNeighborhoodActivityConduitDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MRExpanseManager : NSObject <TUConversationManagerDelegate, TUNeighborhoodActivityConduitDelegate>



@property (readonly, nonatomic) NSString *activeTelevisionRouteID;
@property (retain, nonatomic) AVAudioSession *auxiliaryPlaybackAudioSession; // ivar: _auxiliaryPlaybackAudioSession
@property (readonly, nonatomic) TUNeighborhoodActivityConduit *conduit; // ivar: _conduit
@property (readonly, nonatomic) TUConversationManager *conversationManager; // ivar: _conversationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL expanseHandoffSupported;
@property (readonly, nonatomic) BOOL expanseSessionActive;
@property (readonly, nonatomic) BOOL expanseSessionHasActiveActivity;
@property (readonly, nonatomic) BOOL expanseSessionHasRemoteActivity;
@property (readonly, nonatomic) BOOL expanseSessionHasScreenSharingActivity;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // ivar: _notifyQueue
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)activeActivityExistsForBundle:(id)arg0 ;
-(BOOL)deviceIsActiveTelevision:(id)arg0 ;
-(id)activeConversation;
-(id)initWithQueue:(id)arg0 ;
-(void)_handleConversationStateChanged;
-(void)_handleExpanseSessionJoined;
-(void)_handleExpanseSessionLeft;
-(void)_notifyObserversThatExpanseSessionJoined;
-(void)_notifyObserversThatExpanseSessionLeft;
-(void)_notifyObserversThatTelevisionJoinedSession;
-(void)_notifyObserversThatTelevisionLeftSession;
-(void)addObserver:(id)arg0 ;
-(void)addTelevisionWithRouteIdentifierToSession:(id)arg0 completion:(id)arg1 ;
-(void)conversationManager:(id)arg0 stateChangedForConversation:(id)arg1 ;
-(void)dealloc;
-(void)neighborhoodActivityConduit:(id)arg0 splitSessionEnded:(id)arg1 ;
-(void)neighborhoodActivityConduit:(id)arg0 splitSessionStarted:(id)arg1 ;
-(void)neighborhoodActivityConduit:(id)arg0 tvDeviceAppeared:(id)arg1 ;
-(void)neighborhoodActivityConduit:(id)arg0 tvDeviceDisappeared:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeTelevisionWithRouteIdentifierFromSession:(id)arg0 completion:(id)arg1 ;
-(void)serverDisconnectedForConversationManager:(id)arg0 ;


@end


#endif