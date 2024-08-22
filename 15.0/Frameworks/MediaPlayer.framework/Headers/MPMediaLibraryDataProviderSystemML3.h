// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIALIBRARYDATAPROVIDERSYSTEMML3_H
#define MPMEDIALIBRARYDATAPROVIDERSYSTEMML3_H

@protocol OS_dispatch_queue;


#import "MPMediaLibraryDataProviderML3.h"

@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3 {
    NSInteger _currentRevision;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)_localizedCloudGeniusErrorForError:(id)arg0 ;
+(id)_localizedGeniusErrorForError:(id)arg0 geniusEnabled:(BOOL)arg1 ;
-(*NSInteger)generateItemIdentifiersForGeniusClusterPlaylist:(*void)arg0 count:(*NSUInteger)arg1 error:(*id)arg2 ;
-(*void)createGeniusClusterPlaylistWithSeedItemIdentifiers:(*NSInteger)arg0 count:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)isGeniusEnabled;
-(BOOL)supportsEntityChangeTrackingForMediaEntityType:(NSInteger)arg0 collectionGroupingType:(NSInteger)arg1 dataProviderClass:(*Class)arg2 ;
-(NSInteger)_currentRevision;
-(id)errorResolverForItem:(id)arg0 ;
-(id)initWithLibrary:(id)arg0 ;
-(void)_initInstanceVariableOnce;
-(void)_seedCloudPlaylistWithTrack:(id)arg0 container:(id)arg1 completionBlock:(id)arg2 ;
-(void)geniusItemsForSeedItem:(id)arg0 completion:(id)arg1 ;
-(void)releaseGeniusClusterPlaylist:(*void)arg0 ;
-(void)seedPlaylistWithIdentifier:(NSInteger)arg0 withItemWithIdentifier:(NSInteger)arg1 completionBlock:(id)arg2 ;
-(void)updateEntitesToCurrentRevision;


@end


#endif