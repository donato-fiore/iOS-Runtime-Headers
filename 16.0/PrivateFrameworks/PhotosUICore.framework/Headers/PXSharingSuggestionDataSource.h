// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHARINGSUGGESTIONDATASOURCE_H
#define PXSHARINGSUGGESTIONDATASOURCE_H

@class NSString;
@protocol PHPhotoLibraryChangeObserver, OS_dispatch_queue;


#import "PXPeopleDataSource.h"

@interface PXSharingSuggestionDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver>

 {
    NSObject<OS_dispatch_queue> *_fetchQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL prefetchingStarted; // ivar: _prefetchingStarted
@property (readonly) Class superclass;


-(id)initWithName:(id)arg0 objectsReloadBlock:(id)arg1 ;
-(id)titleAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)imageCacheDidChanged:(id)arg0 ;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)prefetchThumbnailsForTargetSize:(struct CGSize )arg0 maxFetchCount:(NSUInteger)arg1 ;
-(void)setMembers:(id)arg0 ;
-(void)startListeningForChanges;
-(void)stopListeningForChanges;


@end


#endif