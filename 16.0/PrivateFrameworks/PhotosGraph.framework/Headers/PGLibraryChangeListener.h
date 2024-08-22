// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGLIBRARYCHANGELISTENER_H
#define PGLIBRARYCHANGELISTENER_H

@class NSHashTable, NSString, PHPersistentChangeToken, NSCountedSet, NSMutableOrderedSet, NSMapTable, PHPhotoLibrary;
@protocol PHPhotoLibraryChangeObserver, PHPhotoLibraryAvailabilityObserver, PGLibraryChangeProducer, OS_dispatch_queue, PGGraphUpdateHealthRecording;

#import <Foundation/Foundation.h>

#import "PGLibraryChangeListenerStateStore.h"

@interface PGLibraryChangeListener : NSObject <PHPhotoLibraryChangeObserver, PHPhotoLibraryAvailabilityObserver, PGLibraryChangeProducer>

 {
    NSObject<OS_dispatch_queue> *_changeObservationQueue;
}


@property (readonly, nonatomic) NSHashTable *changeConsumers; // ivar: _changeConsumers
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) PHPersistentChangeToken *currentToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHPersistentChangeToken *lastReadToken; // ivar: _lastReadToken
@property BOOL libraryBecameUnavailable; // ivar: _libraryBecameUnavailable
@property (readonly, nonatomic) NSUInteger maximumNumberOfMutationsToFetch; // ivar: _maximumNumberOfMutationsToFetch
@property NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic) NSCountedSet *outstandingChangeTokenCounts; // ivar: _outstandingChangeTokenCounts
@property (readonly, nonatomic) NSMutableOrderedSet *outstandingChangeTokens; // ivar: _outstandingChangeTokens
@property (readonly, nonatomic) NSMapTable *outstandingChangeTokensByConsumer; // ivar: _outstandingChangeTokensByConsumer
@property (readonly, nonatomic) NSUInteger outstandingTokensHighWaterMark; // ivar: _outstandingTokensHighWaterMark
@property (readonly, nonatomic) NSUInteger outstandingTokensLowWaterMark; // ivar: _outstandingTokensLowWaterMark
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) PGLibraryChangeListenerStateStore *stateStore; // ivar: _stateStore
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PGGraphUpdateHealthRecording> *updateHealthRecorder; // ivar: _updateHealthRecorder


-(BOOL)_distributeChangesInFetchResult:(id)arg0 ;
-(id)_consumer:(id)arg0 withChangeTokens:(id)arg1 processedChangeTokens:(id)arg2 consumedTokens:(BOOL)arg3 ;
-(id)initWithPhotoLibrary:(id)arg0 clientIdentifier:(id)arg1 analytics:(id)arg2 ;
-(void)_clearConsumerTokenState;
-(void)_notifyConsumersWithChangesFromFromChangeToken:(id)arg0 ;
-(void)consumer:(id)arg0 didConsumeChangeTokens:(id)arg1 ;
-(void)consumer:(id)arg0 didIgnoreChangeTokens:(id)arg1 ;
-(void)persistToken:(id)arg0 ;
-(void)photoLibraryDidBecomeUnavailable:(id)arg0 ;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)registerChangeConsumer:(id)arg0 ;
-(void)startListening;
-(void)stopListening;
-(void)unregisterChangeConsumer:(id)arg0 ;


@end


#endif