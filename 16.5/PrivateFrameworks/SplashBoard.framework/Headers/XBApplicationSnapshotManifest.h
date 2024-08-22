// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XBAPPLICATIONSNAPSHOTMANIFEST_H
#define XBAPPLICATIONSNAPSHOTMANIFEST_H

@class NSString;
@protocol XBApplicationSnapshotManifestDelegate, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "XBApplicationSnapshotManifestImpl.h"

@interface XBApplicationSnapshotManifest : NSObject <XBApplicationSnapshotManifestDelegate, BSDescriptionProviding>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *containerPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *defaultGroupIdentifier;
@property (weak, nonatomic) NSObject<XBApplicationSnapshotManifestDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) XBApplicationSnapshotManifestImpl *manifestImpl; // ivar: _manifestImpl
@property (readonly) Class superclass;


+(id)_manifestsByIdentity;
+(void)deleteAllSystemSnapshots;
+(void)handleTrackingStateChange;
+(void)initialize;
-(BOOL)_invalidate;
-(BOOL)snapshotsConsideredUnpurgableByAPFS;
-(id)_allSnapshotGroups;
-(id)createSnapshotWithGroupID:(id)arg0 ;
-(id)createVariantForSnapshot:(id)arg0 withIdentifier:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithApplicationInfo:(id)arg0 ;
-(id)initWithContainerIdentity:(id)arg0 store:(id)arg1 ;
-(id)snapshotsForGroupID:(id)arg0 ;
-(id)snapshotsForGroupID:(id)arg0 fetchRequest:(id)arg1 ;
-(id)snapshotsForGroupID:(id)arg0 matchingPredicate:(id)arg1 ;
-(id)snapshotsForGroupIDs:(id)arg0 ;
-(id)snapshotsForGroupIDs:(id)arg0 fetchRequest:(id)arg1 ;
-(id)snapshotsForGroupIDs:(id)arg0 matchingPredicate:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)archive;
// -(void)beginSnapshotAccessTransaction:(id)arg0 completion:(unk)arg1  ;
-(void)beginTrackingImageDeletions;
-(void)dealloc;
-(void)deleteAllSnapshots;
-(void)deleteSnapshot:(id)arg0 ;
-(void)deleteSnapshots:(id)arg0 ;
-(void)deleteSnapshotsForGroupID:(id)arg0 ;
-(void)deleteSnapshotsForGroupID:(id)arg0 matchingPredicate:(id)arg1 ;
-(void)deleteSnapshotsForGroupID:(id)arg0 predicateBuilder:(id)arg1 ;
-(void)deleteSnapshotsMatchingPredicate:(id)arg0 ;
-(void)deleteSnapshotsUsingPredicateBuilder:(id)arg0 ;
-(void)endTrackingImageDeletions;
// -(void)generateImageForSnapshot:(id)arg0 dataProvider:(id)arg1 options:(NSUInteger)arg2 imageGeneratedHandler:(id)arg3 imageDataSavedHandler:(unk)arg4  ;
-(void)generateImageForSnapshot:(id)arg0 dataProvider:(id)arg1 writeToFile:(BOOL)arg2 completion:(id)arg3 ;
// -(void)generateImageForSnapshot:(id)arg0 dataProvider:(id)arg1 writeToFile:(BOOL)arg2 didGenerateImage:(id)arg3 didSaveImage:(unk)arg4  ;
// -(void)generateImageForSnapshot:(id)arg0 dataProvider:(id)arg1 writeToFile:(BOOL)arg2 imageGeneratedHandler:(id)arg3 imageDataSavedHandler:(unk)arg4  ;
-(void)manifest:(id)arg0 didPurgeProtectedContentSnapshotsWithGroupIdentifiers:(id)arg1 ;
-(void)purgeSnapshotsWithProtectedContent;
-(void)saveSnapshot:(id)arg0 atPath:(id)arg1 withContext:(id)arg2 ;
-(void)updateSnapshotsAPFSPurgability:(BOOL)arg0 ;


@end


#endif