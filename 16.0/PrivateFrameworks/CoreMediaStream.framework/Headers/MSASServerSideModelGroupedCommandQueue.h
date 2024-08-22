// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSASSERVERSIDEMODELGROUPEDCOMMANDQUEUE_H
#define MSASSERVERSIDEMODELGROUPEDCOMMANDQUEUE_H



#import "MSASGroupedQueue.h"
#import "MSASEnqueuedCommand.h"

@interface MSASServerSideModelGroupedCommandQueue : MSASGroupedQueue

@property (retain, nonatomic) MSASEnqueuedCommand *lastEnqueuedCommand; // ivar: _lastEnqueuedCommand


+(id)calloutBlockForCommand:(SEL)arg0 ;
-(BOOL)hasEnqueuedItems;
-(void)MSASModel:(id)arg0 didDeleteComment:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg0 didFindDeletedAccessControl:(id)arg1 inAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg0 didFindDeletedAlbum:(id)arg1 info:(id)arg2 ;
-(void)MSASModel:(id)arg0 didFindDeletedAssetCollection:(id)arg1 inAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg0 didFindDeletedInvitation:(id)arg1 info:(id)arg2 ;
-(void)MSASModel:(id)arg0 didFindNewAccessControl:(id)arg1 inAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg0 didFindNewAlbum:(id)arg1 info:(id)arg2 ;
-(void)MSASModel:(id)arg0 didFindNewAssetCollection:(id)arg1 inAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg0 didFindNewComment:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg0 didFindNewInvitation:(id)arg1 info:(id)arg2 ;
-(void)flushQueue;
-(void)workQueueEnqueueCommand:(id)arg0 variantParam:(id)arg1 invariantParam:(id)arg2 ;
-(void)workQueueFlushQueue;


@end


#endif