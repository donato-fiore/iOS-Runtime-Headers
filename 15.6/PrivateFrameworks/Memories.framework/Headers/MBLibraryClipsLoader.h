// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBLIBRARYCLIPSLOADER_H
#define MBLIBRARYCLIPSLOADER_H

@class PHAssetCollection, NSSet, NSString, PHFetchResult, NSMutableDictionary, NSRecursiveLock;
@protocol PHPhotoLibraryChangeObserver;


#import "MBClipsLoader.h"

@interface MBLibraryClipsLoader : MBClipsLoader <PHPhotoLibraryChangeObserver>



@property (retain, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (retain) NSSet *assetURLs; // ivar: _assetURLs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PHFetchResult *fetchResult; // ivar: _fetchResult
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *identifierURLsToClipsMap; // ivar: _identifierURLsToClipsMap
@property (retain) NSSet *insertedAssetURLs; // ivar: _insertedAssetURLs
@property (readonly) Class superclass;
@property (retain, nonatomic) NSRecursiveLock *updateLock; // ivar: _updateLock


-(NSInteger)countForAllClips;
-(id)clips;
-(id)fetchAssetURLs;
-(id)fetchAssets;
-(id)initWithAssetCollection:(id)arg0 showOnlyFavorites:(BOOL)arg1 ;
-(void)addClipWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)load;
-(void)loadClipsFromURLs:(id)arg0 ;
-(void)photoLibraryDidChange:(id)arg0 ;


@end


#endif