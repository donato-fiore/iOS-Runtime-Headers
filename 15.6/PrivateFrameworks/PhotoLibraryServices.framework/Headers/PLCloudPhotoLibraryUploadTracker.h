// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLOUDPHOTOLIBRARYUPLOADTRACKER_H
#define PLCLOUDPHOTOLIBRARYUPLOADTRACKER_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLCloudPhotoLibraryUploadTracker : NSObject {
    NSUInteger _totalNumberOfPushedMasters;
    NSUInteger _totalSizeOfPushedOriginals;
    NSMutableSet *_mastersToUpload;
    NSMutableSet *_deferredAssetsToUpload;
    NSMutableDictionary *_trackedResourceProgressSize;
    NSMutableDictionary *_trackedResourceMasterUploaded;
    NSMutableDictionary *_masterRecordUploadState;
    NSMutableSet *_mastersToUploadTrackingSize;
}


@property NSUInteger totalNumberOfDeferredAssets; // ivar: _totalNumberOfDeferredAssets
@property NSUInteger totalNumberOfUnpushedMasters; // ivar: _totalNumberOfUnpushedMasters
@property NSUInteger totalNumberOfUploadedMasters; // ivar: _totalNumberOfUploadedMasters
@property NSUInteger totalSizeOfUnpushedOriginals; // ivar: _totalSizeOfUnpushedOriginals
@property NSUInteger totalUploadedOriginalSize; // ivar: _totalUploadedOriginalSize


-(BOOL)_isMasterRecordUploaded:(id)arg0 ;
-(BOOL)_trackingScopedIdentifier:(id)arg0 ;
-(id)_constructKeyForScopedIdentifier:(id)arg0 type:(int)arg1 ;
-(id)currentStateForDebug;
-(id)init;
-(void)_setBatchUploadStateForTrackedMasters:(id)arg0 withState:(BOOL)arg1 ;
-(void)_stopTrackingResourceWithScopedIdentifier:(id)arg0 fileSize:(NSUInteger)arg1 type:(int)arg2 ;
-(void)addSizeForUnpushedOriginals:(NSUInteger)arg0 forMasterScopedIdentifier:(id)arg1 forAssetScopedIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)reset;
-(void)resetIfNeededWithLibrary:(id)arg0 isInitialUpload:(BOOL)arg1 ;
-(void)setupFromCPLManager:(id)arg0 ;
-(void)setupFromLibrary:(id)arg0 isInitialUpload:(BOOL)arg1 ;
-(void)stopTrackingMaster:(id)arg0 ;
-(void)trackDeferredAssetForScopedIdentifier:(id)arg0 ;
-(void)updateForMasterResourceUploadWithScopedIdentifier:(id)arg0 progress:(float)arg1 fileSize:(NSUInteger)arg2 type:(int)arg3 ;
-(void)uploadFinishedForMasterRecordWithScopedIdentifier:(id)arg0 didUpdateStatus:(*BOOL)arg1 ;
-(void)uploadFinishedForMasterResourceWithScopedIdentifier:(id)arg0 fileSize:(NSUInteger)arg1 type:(int)arg2 withError:(BOOL)arg3 ;


@end


#endif