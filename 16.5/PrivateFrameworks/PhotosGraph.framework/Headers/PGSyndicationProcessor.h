// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSYNDICATIONPROCESSOR_H
#define PGSYNDICATIONPROCESSOR_H

@class CLSSimilarStacker, PHPhotoLibrary, CLSCurationSession;

#import <Foundation/Foundation.h>

#import "PGManagerWorkingContext.h"

@interface PGSyndicationProcessor : NSObject {
    PGManagerWorkingContext *_workingContext;
    CLSSimilarStacker *_similarStacker;
    PHPhotoLibrary *_syndicationLibrary;
    CLSCurationSession *_curationSession;
}




-(BOOL)processSavedSyndicatedAssetsWithError:(*id)arg0 progressBlock:(id)arg1 ;
-(BOOL)processSyndicatedAssetCurationWithError:(*id)arg0 progressBlock:(id)arg1 ;
-(BOOL)processSyndicatedAssetGuestInferenceWithError:(*id)arg0 progressBlock:(id)arg1 ;
// -(BOOL)processSyndicatedAssetGuestInferenceWithError:(*id)arg0 progressBlock:(id)arg1 shareBackSuggester:(unk)arg2  ;
-(BOOL)processSyndicatedAssetRevGeoCodingWithError:(*id)arg0 progressBlock:(id)arg1 ;
-(id)_bestAssetUUIDInAssetCluster:(id)arg0 ;
-(id)duplicateAssetUUIDsForSuggesterResult:(id)arg0 assetsInferredAsGuestAsset:(id)arg1 syndicationLibrary:(id)arg2 error:(*id)arg3 progressBlock:(id)arg4 ;
-(id)guestAssetSenderIdentifiersByMomentUUIDForMomentUUIDs:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(id)initWithWorkingContext:(id)arg0 ;
-(id)initWithWorkingContext:(id)arg0 syndicationLibrary:(id)arg1 ;
-(id)similarStacker;
-(id)syndicationPhotoLibraryWithError:(*id)arg0 ;
-(void)_persistCurationScores:(id)arg0 inPhotoLibrary:(id)arg1 ;


@end


#endif