// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERSNAPSHOTCOORDINATOR_H
#define PBFPOSTERSNAPSHOTCOORDINATOR_H

@class PRSServerPosterPath, NSMapTable, NSString;
@protocol BSCancellable;

#import <Foundation/Foundation.h>


@interface PBFPosterSnapshotCoordinator : NSObject <BSCancellable>

 {
    PRSServerPosterPath *_path;
    NSMapTable *_lock_definitionToSnapshotReservationMap;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSnapshots;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)snapshotExistsForDefinition:(id)arg0 configuredProperties:(id)arg1 ;
-(id)_lock_ingestImageAtURL:(id)arg0 forDefinition:(id)arg1 configuredProperties:(id)arg2 ;
-(id)initWithPath:(id)arg0 ;
-(id)removeSnapshotsAtURLs:(id)arg0 ;
-(id)snapshotReservationForDefinition:(id)arg0 configuredProperties:(id)arg1 ;
-(id)snapshotURLForDefinition:(id)arg0 configuredProperties:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)ingestSnapshotsByDefinition:(id)arg0 path:(id)arg1 configuredProperties:(id)arg2 ;
-(void)removeAllSnapshots;


@end


#endif