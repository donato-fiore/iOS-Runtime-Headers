// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEPROGRESSDATASOURCE_H
#define PXPEOPLEPROGRESSDATASOURCE_H

@class NSString, PHFetchResult, PHPhotoLibrary;
@protocol PXPhotoLibraryUIChangeObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXPeopleProgressDataSource : NSObject <PXPhotoLibraryUIChangeObserver>



@property (nonatomic) NSUInteger cachedUnlockValue; // ivar: _cachedUnlockValue
@property (getter=isCountCacheValid) BOOL countCacheValid; // ivar: _countCacheValid
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFaceProcessingComplete) BOOL faceProcessingComplete; // ivar: _faceProcessingComplete
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger homeMembersCount;
@property (retain, nonatomic) PHFetchResult *homeResult; // ivar: _homeResult
@property (readonly, nonatomic) BOOL isFaceProcessingComplete; // ivar: _isFaceProcessingComplete
@property (readonly, nonatomic) BOOL isPersonPromoterDone;
@property (readonly, nonatomic) NSUInteger pendingAssetCount;
@property (nonatomic) NSUInteger pendingCount; // ivar: _pendingCount
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) NSUInteger prioritizedProcessedAssetCount;
@property (nonatomic) NSUInteger prioritizedProcessedCount; // ivar: _prioritizedProcessedCount
@property (readonly, nonatomic) NSUInteger prioritizedTotalAllowedAssetCount;
@property (nonatomic) NSUInteger prioritizedTotalAllowedCount; // ivar: _prioritizedTotalAllowedCount
@property (readonly, nonatomic) NSUInteger processedAssetCount;
@property (nonatomic) NSUInteger processedCount; // ivar: _processedCount
@property (readonly) NSObject<OS_dispatch_queue> *scanningProgressQueue; // ivar: _scanningProgressQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger totalAssetCount;
@property (nonatomic) NSUInteger totalCount; // ivar: _totalCount
@property (retain, nonatomic) PHFetchResult *verifyResult; // ivar: _verifyResult


-(CGFloat)_updateProgressFromFaceAnalysisProgressDictionary:(id)arg0 ;
-(id)_cachedAnalysisCounts;
-(id)_faceAnalysisCounts;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)_appWillEnterForeground;
-(void)asyncUpdatePeopleProgressWithReportBlock:(id)arg0 ;
-(void)dealloc;
-(void)loadQueryData;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;
-(void)syncUpdatePeopleProgressWithReportBlock:(id)arg0 ;
-(void)updateProgressIfNeededWithReportBlock:(id)arg0 ;


@end


#endif