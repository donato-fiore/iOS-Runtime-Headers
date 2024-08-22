// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCSYNCCONTEXT_H
#define BRCSYNCCONTEXT_H

@class CKContainer, NSMutableSet, NSString, NSDate, NSHashTable, NSOperationQueue, CKContainerID;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRCThrottleBase.h"
#import "BRCUserDefaults.h"
#import "BRCTransferStream.h"
#import "BRCAccountSession.h"

@interface BRCSyncContext : NSObject {
    CKContainer *_ckContainer;
    BOOL _isCancelled;
    int _notifyTokenForFramework;
    NSMutableSet *_foregroundClients;
    NSString *_lastForegroundClientDescription;
    NSDate *_dateWhenLastForegroundClientLeft;
    NSObject<OS_dispatch_source> *_timerForGraceForegroundPeriod;
    NSObject<OS_dispatch_source> *_timerForForcedForegroundPeriod;
    NSObject<OS_dispatch_queue> *_foregroundStateQueue;
    NSUInteger _foregroundState;
    NSHashTable *_nonDiscretionaryModifyOperations;
    NSHashTable *_discretionaryModifyOperations;
    NSOperationQueue *_nonDiscretionaryRecursiveListOperationQueue;
    NSOperationQueue *_discretionaryRecursiveListOperationQueue;
}


@property (readonly, nonatomic) BRCThrottleBase *applyThrottle; // ivar: _applyThrottle
@property (readonly, nonatomic) CKContainer *ckContainer;
@property (readonly, nonatomic) CKContainerID *ckContainerID;
@property (readonly, nonatomic) NSString *contextIdentifier; // ivar: _contextIdentifier
@property (readonly, nonatomic) BRCUserDefaults *defaults;
@property (readonly, nonatomic) BRCTransferStream *downloadStream; // ivar: _downloadStream
@property (readonly, nonatomic) BRCThrottleBase *downloadThrottle; // ivar: _downloadThrottle
@property (readonly, nonatomic) BOOL isShared; // ivar: _isShared
@property (readonly, nonatomic) BRCThrottleBase *perItemSyncUpThrottle; // ivar: _perItemSyncUpThrottle
@property (readonly, nonatomic) BRCThrottleBase *readerThrottle; // ivar: _readerThrottle
@property (readonly, nonatomic) BRCAccountSession *session; // ivar: _session
@property (readonly, nonatomic) BRCThrottleBase *uploadFileModifiedThrottle; // ivar: _uploadFileModifiedThrottle
@property (readonly, nonatomic) BRCTransferStream *uploadStream; // ivar: _uploadStream
@property (readonly, nonatomic) BRCThrottleBase *uploadThrottle; // ivar: _uploadThrottle


+(id)_contextIdentifierForMangledID:(id)arg0 metadata:(BOOL)arg1 ;
+(id)metadataContextIdentifierForMangledID:(id)arg0 ;
+(id)transferContextForServerZone:(id)arg0 appLibrary:(id)arg1 ;
+(id)transferContextIdentifierForMangledID:(id)arg0 ;
-(BOOL)allowsCellularAccess;
-(BOOL)isForeground;
-(id)_database;
-(id)description;
-(id)foregroundClients;
-(id)initWithSession:(id)arg0 contextIdentifier:(id)arg1 isShared:(BOOL)arg2 ;
-(void)_armForegroundGraceTimerForClientDescription:(id)arg0 ;
-(void)_notifyContainerBeingNowForeground;
-(void)_notifyFrameworkContainersMonitorWithState:(BOOL)arg0 ;
-(void)_preventConcurrentModifyRecordsOperations:(id)arg0 nonDiscretionary:(BOOL)arg1 ;
-(void)addForegroundClient:(id)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)addOperation:(id)arg0 allowsCellularAccess:(id)arg1 ;
-(void)addOperation:(id)arg0 allowsCellularAccess:(id)arg1 nonDiscretionary:(id)arg2 ;
-(void)addOperation:(id)arg0 nonDiscretionary:(BOOL)arg1 ;
-(void)cancel;
-(void)close;
-(void)dealloc;
-(void)didReceiveHandoffRequest;
-(void)dumpToContext:(id)arg0 ;
-(void)forceContainerForegroundForDuration:(CGFloat)arg0 ;
-(void)notifyDuetFromAccessByBundleID:(id)arg0 ;
-(void)removeForegroundClient:(id)arg0 ;
-(void)resume;
-(void)setupIfNeeded;
-(void)waitForAllOperations;


@end


#endif