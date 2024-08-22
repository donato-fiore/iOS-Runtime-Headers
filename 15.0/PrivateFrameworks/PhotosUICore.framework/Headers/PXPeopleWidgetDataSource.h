// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLEWIDGETDATASOURCE_H
#define PXPEOPLEWIDGETDATASOURCE_H

@class NSString, NSArray;
@protocol PHPhotoLibraryChangeObserver, OS_dispatch_queue;


#import "PXPeopleDataSource.h"
#import "PXPeopleDetailsContext.h"

@interface PXPeopleWidgetDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver>

 {
    NSObject<OS_dispatch_queue> *_fetchQueue;
}


@property (nonatomic) BOOL containsSocialGroups; // ivar: _containsSocialGroups
@property (retain, nonatomic) PXPeopleDetailsContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isForOneUp; // ivar: _isForOneUp
@property (readonly, nonatomic) NSArray *members;
@property (nonatomic) BOOL prefetchingStarted; // ivar: _prefetchingStarted
@property (readonly) Class superclass;


-(id)_socialGroupsForIdentifiers:(id)arg0 ;
-(id)initWithName:(id)arg0 objectsReloadBlock:(id)arg1 ;
-(id)titleAtIndex:(NSUInteger)arg0 ;
-(void)_updateMembers;
-(void)dealloc;
-(void)imageCacheDidChanged:(id)arg0 ;
-(void)loadMembersWithCompletionBlock:(id)arg0 ;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)prefetchThumbnailsForTargetSize:(struct CGSize )arg0 displayScale:(CGFloat)arg1 maxFetchCount:(NSUInteger)arg2 ;
-(void)startListeningForChanges;
-(void)stopListeningForChanges;


@end


#endif