// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSIRIVOCABULARYCONTROLLER_H
#define PXSIRIVOCABULARYCONTROLLER_H

@class PHFetchResult, NSString;
@protocol PHPhotoLibraryChangeObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXSiriVocabularyController : NSObject <PHPhotoLibraryChangeObserver>



@property (retain, nonatomic) PHFetchResult *albumFetchResult; // ivar: _albumFetchResult
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsAlbumsVocabularyUpdate; // ivar: _needsAlbumsVocabularyUpdate
@property (nonatomic) BOOL needsPeopleVocabularyUpdate; // ivar: _needsPeopleVocabularyUpdate
@property (retain, nonatomic) PHFetchResult *peopleFetchResult; // ivar: _peopleFetchResult
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // ivar: _propertyQueue
@property (readonly) Class superclass;


+(id)sharedManager;
-(id)_localizedTitlesForAssetCollectionFetchResult:(id)arg0 ;
-(id)init;
-(void)_onQueueUpdateAlbumVocabulary;
-(void)_onQueueUpdatePeopleVocabulary;
-(void)dealloc;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)updateVocabulary;


@end


#endif