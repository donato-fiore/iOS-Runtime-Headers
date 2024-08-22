// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCFSWRITER_H
#define BRCFSWRITER_H

@class NSString;
@protocol BRCModule, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRCAccountSession.h"
#import "brc_task_tracker.h"

@interface BRCFSWriter : NSObject <BRCModule>

 {
    uint8_t _suspendCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly, nonatomic) BRCAccountSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (readonly, nonatomic) brc_task_tracker *taskTracker; // ivar: _taskTracker


+(BOOL)_isPathMatchIdle:(struct ? *)arg0 ;
+(BOOL)_shouldForceApplyMetadataForItem:(id)arg0 ;
-(BOOL)_shouldBounceSourceItemWithLookup:(id)arg0 localItem:(id)arg1 serverItem:(id)arg2 bounceNamespace:(unsigned char)arg3 urlMatch:(struct ? *)arg4 ;
-(BOOL)applyLocalEditIfNecessaryToURL:(id)arg0 forItem:(id)arg1 serverItem:(id)arg2 forDelete:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)bouncePathMatch:(struct ? *)arg0 toApplyServerItem:(id)arg1 clientZone:(id)arg2 ;
-(BOOL)bouncePathMatchesForLookup:(id)arg0 toApplyServerItem:(id)arg1 clientZone:(id)arg2 ;
-(NSUInteger)computeSourceBounceNumberIfNecessaryWithLookup:(id)arg0 localItem:(id)arg1 serverItem:(id)arg2 ;
-(id)_generateGentlePhysicalBounceNameForPathMatch:(struct ? *)arg0 dirfd:(int)arg1 existingSourceLogicalName:(id)arg2 lastBounceNo:(*NSUInteger)arg3 ;
-(id)bouncePath:(id)arg0 forItemConflictingWithAnFSRoot:(id)arg1 ;
-(id)initWithAccountSession:(id)arg0 ;
-(int)_computeURLMatchWithLookup:(id)arg0 localItem:(id)arg1 serverItem:(id)arg2 bounceNamespace:(unsigned char)arg3 applyNamespace:(unsigned char)arg4 urlMatch:(struct ? *)arg5 ;
-(unsigned int)_computeDesiredVersionOptionsForDocument:(id)arg0 createdReservedItem:(BOOL)arg1 ;
-(void)_applyChangesForServerAlias:(id)arg0 localAlias:(id)arg1 jobID:(NSInteger)arg2 zone:(id)arg3 diffs:(NSUInteger)arg4 ;
-(void)_handleClashingItemIfNecessary:(id)arg0 parentID:(id)arg1 si:(id)arg2 ;
-(void)_scheduleActionCoordination:(id)arg0 dstURL:(id)arg1 action:(char *)arg2 li:(id)arg3 si:(id)arg4 diffs:(NSUInteger)arg5 hasFinished:(*BOOL)arg6 ;
-(void)_stageCreationOfDirectory:(id)arg0 ;
-(void)_stageCreationOfSymlink:(id)arg0 forLocalItem:(id)arg1 ;
-(void)_writeUnderCoordinationFromURL:(id)arg0 toURL:(id)arg1 canDelete:(BOOL)arg2 ;
-(void)applyChangesForServerItem:(id)arg0 localItem:(id)arg1 rank:(NSInteger)arg2 zone:(id)arg3 activity:(id)arg4 hasFinished:(*BOOL)arg5 ;
-(void)cancel;
-(void)close;
-(void)resume;
-(void)suspend;
-(void)writeUnderCoordinationFromURL:(id)arg0 toURL:(id)arg1 canDelete:(BOOL)arg2 ;


@end


#endif