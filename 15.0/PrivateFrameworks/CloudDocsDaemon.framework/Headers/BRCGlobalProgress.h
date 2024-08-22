// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCGLOBALPROGRESS_H
#define BRCGLOBALPROGRESS_H

@class br_pacer, NSMutableSet, NSString;
@protocol BRCReachabilityDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "BRCProgress.h"
#import "_BRCUploadInfo.h"
#import "_BRCDownloadInfo.h"
#import "BRCAccountSession.h"

@interface BRCGlobalProgress : NSObject <BRCReachabilityDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _lazyInitDone;
    br_pacer *_updatePacer;
    NSObject<OS_dispatch_source> *_operationTimer;
    unsigned int _operationTimerSuspendCount;
    BOOL _showExtendedInfo;
    BOOL _networkReachable;
    BRCProgress *_globalProgress;
    NSMutableSet *_appLibrariesNotLive;
    _BRCUploadInfo *_uploads;
    _BRCDownloadInfo *_downloads;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) BRCAccountSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)_keyPathsToObserve;
-(id)initWithSession:(id)arg0 ;
-(void)_cancelDownloadForDocumentID:(id)arg0 ;
-(void)_cancelDownloadForDocumentID:(id)arg0 destroyIfLast:(BOOL)arg1 willRetryTransfer:(BOOL)arg2 ;
-(void)_cancelUploadForDocumentID:(id)arg0 inState:(unsigned int)arg1 ;
-(void)_cancelUploadForDocumentID:(id)arg0 inState:(unsigned int)arg1 willRetryTransfer:(BOOL)arg2 ;
-(void)_cancelUploadForDocumentID:(id)arg0 inState:(unsigned int)arg1 willRetryTransfer:(BOOL)arg2 pendingQuota:(BOOL)arg3 ;
-(void)_createDownloadMetadataWithCompletedUnitCount:(NSInteger)arg0 totalUnitCount:(NSInteger)arg1 ;
-(void)_createNewGlobalProgressInGroup:(id)arg0 completedUnitCount:(NSInteger)arg1 totalUnitCount:(NSInteger)arg2 ;
-(void)_createNewIndeterminateGlobalProgress;
-(void)_createUploadMetadataWithCompletedUnitCount:(NSInteger)arg0 totalUnitCount:(NSInteger)arg1 ;
-(void)_deleteDocument:(id)arg0 reason:(char)arg1 ;
-(void)_destroyDownloadWithReason:(char)arg0 ;
-(void)_destroyProgressInGroup:(id)arg0 reason:(char)arg1 ;
-(void)_destroyUploadWithReason:(char)arg0 ;
-(void)_resumeProgressForAnotherOperationIfNeeded;
-(void)_startObservingProgress:(id)arg0 ;
-(void)_stopObservingProgress:(id)arg0 ;
-(void)_updateAppLibraryID:(id)arg0 ;
-(void)_updateDocument:(id)arg0 ;
-(void)_updateGlobalProgress;
-(void)addProgress:(id)arg0 forDocument:(id)arg1 inGroup:(char)arg2 ;
-(void)clearOutOfQuotaState;
-(void)dealloc;
-(void)didDeleteDocument:(id)arg0 ;
-(void)didUpdateClientZone:(id)arg0 ;
-(void)didUpdateDocument:(id)arg0 ;
-(void)dumpDictionary:(id)arg0 withMaxCount:(NSUInteger)arg1 toContext:(id)arg2 ;
-(void)dumpToContext:(id)arg0 ;
-(void)networkReachabilityChanged:(BOOL)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)resumeProgressForZones:(id)arg0 ;
-(void)stopPublishingProgress;
-(void)updateDownloadThrottleForDocument:(id)arg0 toState:(int)arg1 ;
-(void)updateUploadThrottleForDocument:(id)arg0 toState:(int)arg1 ;
-(void)willScheduleDocumentForDownload:(id)arg0 ;


@end


#endif