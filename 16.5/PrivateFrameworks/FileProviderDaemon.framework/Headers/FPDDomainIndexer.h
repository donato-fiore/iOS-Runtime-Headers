// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDDOMAININDEXER_H
#define FPDDOMAININDEXER_H

@class NSString, NSURL, NSDate, NSError;
@protocol OS_dispatch_source, FPDDomainIndexerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FPDDomain.h"
#import "FPDExtension.h"

@interface FPDDomainIndexer : NSObject {
    NSString *_providerDomainID;
    NSObject<OS_dispatch_source> *_timerSource;
    NSURL *_stateURL;
    NSURL *_needsAuthURL;
    NSURL *_droppedIndexURL;
    BOOL _needsIndexing;
    BOOL _isIndexing;
    BOOL _enabled;
    BOOL _invalidated;
    BOOL _isStarted;
    BOOL _clearNeedsIndexing;
    BOOL _droppedIndex;
    NSUInteger _batchIndexedCount;
    NSUInteger _batchIndexedCountSinceLastIndexing;
    NSUInteger _consecutiveBatchErrorCount;
    NSDate *_lastIndexingStartDate;
    NSError *_lastError;
    NSString *_spotlightDomainIdentifier;
    BOOL _registeredWithScheduler;
}


@property (weak, nonatomic) NSObject<FPDDomainIndexerDelegate> *delegate; // ivar: _delegate
@property (readonly, weak, nonatomic) FPDDomain *domain; // ivar: _domain
@property (retain, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (weak, nonatomic) FPDExtension *extension; // ivar: _extension
@property (readonly, nonatomic) BOOL isIndexed;
@property (readonly, nonatomic) BOOL learnNeedsAuthenticationFromBatchError;
@property (nonatomic) NSUInteger maxRetryDelayInSec; // ivar: _maxRetryDelayInSec
@property (nonatomic) BOOL needsAuthentication; // ivar: _needsAuthentication
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)readDroppedIndexFromDisk;
-(BOOL)readNeedsAuthFromDisk;
-(BOOL)readNeedsIndexingFromDisk;
-(id)description;
-(id)initWithExtension:(id)arg0 domain:(id)arg1 enabled:(BOOL)arg2 ;
-(id)localSpotlightIndexer;
-(void)__indexOneBatchIfPossibleClearingNeedsIndexing:(BOOL)arg0 ;
-(void)_cancelTimer;
-(void)_handleOneBatchCompletionWithError:(id)arg0 hasMoreChanges:(BOOL)arg1 ;
-(void)_indexOneBatchIfPossibleClearingNeedsIndexing:(BOOL)arg0 ;
-(void)_signalChangesWithCompletionHandler:(id)arg0 ;
-(void)_unregisterFromScheduler;
-(void)clearDroppedIndexOnDisk;
-(void)clearNeedsAuth;
-(void)clearNeedsAuthOnDisk;
-(void)clearNeedsIndexingOnDisk;
-(void)dropIndexForDomainRemoval:(BOOL)arg0 completion:(id)arg1 ;
-(void)dumpStateTo:(id)arg0 ;
-(void)indexOneBatchWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)persistDroppedIndexOnDisk;
-(void)persistNeedsIndexingOnDisk;
-(void)persistsNeedsAuthOnDisk;
-(void)setIndexingEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)setNeedsAuth;
-(void)signalChangesWithCompletionHandler:(id)arg0 ;
-(void)signalNeedsReindexFromScratchWithCompletionHandler:(id)arg0 ;
-(void)start;


@end


#endif