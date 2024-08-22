// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSMETADATAFETCHER_H
#define PXPHOTOSMETADATAFETCHER_H

@class NSMutableDictionary, NSString, PHPhotoLibrary;
@protocol PXPhotoLibraryUIInternalChangeObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXPhotosMetadataFetcher : NSObject <PXPhotoLibraryUIInternalChangeObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queue_fetchResultByFetchedFact;
    NSMutableDictionary *_queue_OIDsByDerivedFacts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;


+(id)sharedFetcherForPhotoLibrary:(id)arg0 ;
-(BOOL)getAssetCounts:(struct ? *)arg0 guestAssetCounts:(struct ? *)arg1 forFetchResult:(id)arg2 allowFetch:(BOOL)arg3 ;
-(id)_predicateForFact:(NSUInteger)arg0 ;
-(id)_queue_fetchResultForFact:(NSUInteger)arg0 allowFetch:(BOOL)arg1 ;
-(id)_queue_oidsForFacts:(NSUInteger)arg0 allowFetch:(BOOL)arg1 ;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)photoLibraryWillChange:(id)arg0 ;


@end


#endif