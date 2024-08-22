// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCSESSIONCONTEXT_H
#define HDCLOUDSYNCSESSIONCONTEXT_H

@class NSMutableSet, _HKArchiveCreator, NSURL, NSString, NSProgress;
@protocol NSProgressReporting;

#import <Foundation/Foundation.h>

#import "HDSyncAnchorRangeMap.h"
#import "HDProfile.h"

@interface HDCloudSyncSessionContext : NSObject <NSProgressReporting>

 {
    NSMutableSet *_syncEntityClassesWithProcessedChanges;
}


@property (nonatomic) NSUInteger archiveCount; // ivar: _archiveCount
@property (readonly, nonatomic) _HKArchiveCreator *archiveCreator; // ivar: _archiveCreator
@property (readonly, nonatomic) NSUInteger archiveSize;
@property (readonly, copy, nonatomic) NSURL *archiveURL; // ivar: _archiveURL
@property (nonatomic) NSUInteger changesetCount; // ivar: _changesetCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasOpenSequence; // ivar: _hasOpenSequence
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HDSyncAnchorRangeMap *pendingAnchorRangeMap; // ivar: _pendingAnchorRangeMap
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly) Class superclass;


-(BOOL)addChangeData:(id)arg0 changes:(id)arg1 sessionIdentifier:(id)arg2 outError:(*id)arg3 ;
-(BOOL)resetInvalidArchiveCreatorWithSessionUUID:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithChangedSyncEntityCount:(NSUInteger)arg0 profile:(id)arg1 ;
-(void)finishProgress;


@end


#endif