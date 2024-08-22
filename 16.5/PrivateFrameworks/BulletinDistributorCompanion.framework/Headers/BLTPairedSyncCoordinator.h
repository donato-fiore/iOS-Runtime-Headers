// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTPAIREDSYNCCOORDINATOR_H
#define BLTPAIREDSYNCCOORDINATOR_H

@class NSString, PSYInitialSyncStateObserver, PSYSyncCoordinator, PSYSyncSessionObserver;
@protocol PSYSyncCoordinatorDelegate, PSYInitialSyncStateObserverDelegate, PSYSyncSessionObserverDelegate;

#import <Foundation/Foundation.h>


@interface BLTPairedSyncCoordinator : NSObject <PSYSyncCoordinatorDelegate, PSYInitialSyncStateObserverDelegate, PSYSyncSessionObserverDelegate>



@property (nonatomic) BOOL clientSyncComplete; // ivar: _clientSyncComplete
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PSYInitialSyncStateObserver *pairedInitialSyncObserver; // ivar: _pairedInitialSyncObserver
@property (retain, nonatomic) PSYSyncCoordinator *pairedSyncCoordinator; // ivar: _pairedSyncCoordinator
@property (retain, nonatomic) PSYSyncSessionObserver *pairedSyncObserver; // ivar: _pairedSyncObserver
@property (readonly) Class superclass;


+(id)syncState;
+(void)reportProgress:(CGFloat)arg0 ;
+(void)syncDidComplete;
-(id)init;
-(void)_initInitialSyncStateComplete;
-(void)_reportProgress:(CGFloat)arg0 ;
-(void)_syncDidComplete;
-(void)initialSyncStateObserver:(id)arg0 initialSyncDidCompleteForPairingIdentifier:(id)arg1 ;
-(void)initialSyncStateObserver:(id)arg0 syncDidCompleteForPairingIdentifier:(id)arg1 ;
-(void)initialSyncStateObserver:(id)arg0 syncDidResetForPairingIdentifier:(id)arg1 ;
-(void)syncCoordinator:(id)arg0 beginSyncSession:(id)arg1 ;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg0 ;
-(void)syncSessionObserver:(id)arg0 didInvalidateSyncSession:(id)arg1 ;
-(void)syncSessionObserver:(id)arg0 didReceiveUpdate:(id)arg1 ;
-(void)syncSessionObserver:(id)arg0 receivedSyncSession:(id)arg1 ;


@end


#endif