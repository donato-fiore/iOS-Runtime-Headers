// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHPERSONRESETOPERATION_H
#define PHPERSONRESETOPERATION_H

@class NSOperation;


#import "PHPhotoLibrary.h"
#import "PHFetchResult.h"

@interface PHPersonResetOperation : NSOperation {
    PHPhotoLibrary *_library;
    BOOL _shouldResetPhotoAnalysis;
    NSUInteger _batchSize;
    PHFetchResult *_personsToDelete;
    NSUInteger _totalPersonsToDelete;
    NSUInteger _deletedPersons;
    PHFetchResult *_facesToDelete;
    NSUInteger _totalFacesToDelete;
    NSUInteger _deletedFaces;
    BOOL _shouldDeleteAllFaceCrops;
    PHFetchResult *_faceCropsToDelete;
    NSUInteger _totalFaceCropsToDelete;
    NSUInteger _deletedFaceCrops;
    id *_completionHandler;
    id *_progressHandler;
}




// +(id)resetAllPersonsOperationWithBatchSize:(NSUInteger)arg0 shouldResetPhotoAnalysis:(BOOL)arg1 photoLibrary:(id)arg2 progressHandler:(id)arg3 completionHandler:(unk)arg4  ;
// +(id)resetOperationsForPersons:(id)arg0 batchSize:(NSUInteger)arg1 photoLibrary:(id)arg2 progressHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(BOOL)isAsynchronous;
// -(id)initWithPersonsToDelete:(id)arg0 facesToDelete:(id)arg1 shouldDeleteAllFaceCrops:(BOOL)arg2 shouldResetPhotoAnalysis:(BOOL)arg3 batchSize:(NSUInteger)arg4 photoLibrary:(id)arg5 progressHandler:(id)arg6 completionHandler:(unk)arg7  ;
-(void)_enumerateFetchResult:(id)arg0 withBatchSize:(NSUInteger)arg1 handler:(id)arg2 ;
-(void)_prepareToDeleteFaceCrops;
-(void)main;


@end


#endif