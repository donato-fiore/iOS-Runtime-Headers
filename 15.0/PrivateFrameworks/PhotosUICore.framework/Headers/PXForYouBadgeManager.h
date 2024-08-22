// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFORYOUBADGEMANAGER_H
#define PXFORYOUBADGEMANAGER_H

@class NSString, PHFetchResult, PHPhotoLibrary;
@protocol PXMutableForYouBadgeManager, PXPhotoLibraryUIChangeObserver;


#import "PXObservable.h"

@interface PXForYouBadgeManager : PXObservable <PXMutableForYouBadgeManager, PXPhotoLibraryUIChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHFetchResult *memories; // ivar: _memories
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger unreadBadgeCount; // ivar: _unreadBadgeCount
@property (nonatomic) NSUInteger unreadMemoriesCount; // ivar: _unreadMemoriesCount
@property (nonatomic) NSUInteger unreadSharedAlbumCount; // ivar: _unreadSharedAlbumCount


+(id)lastSeenBadgeDate;
+(id)lastSeenBadgeDateAccessor;
+(void)setLastSeenBadgeDate:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)mutableChangeObject;
-(void)_didFinishPostingNotifications:(id)arg0 ;
-(void)_stopListeningForChanges;
-(void)_updateUnreadBadgeCount;
-(void)_updateUnreadSharedAlbumsCount;
-(void)dealloc;
-(void)performChanges:(id)arg0 ;
-(void)startListeningForChanges;


@end


#endif