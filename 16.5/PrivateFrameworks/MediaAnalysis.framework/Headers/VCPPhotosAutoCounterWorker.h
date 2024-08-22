// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPPHOTOSAUTOCOUNTERWORKER_H
#define VCPPHOTOSAUTOCOUNTERWORKER_H

@class PHPhotoLibrary;

#import <Foundation/Foundation.h>


@interface VCPPhotosAutoCounterWorker : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSUInteger _detectionVersion;
    NSUInteger _recognitionVersion;
    NSUInteger _personClusterVersion;
    int _processingVersion;
    NSUInteger _clusterDumpFaceFetched;
}




+(BOOL)_dumpAssetsToFaces;
+(BOOL)_dumpFaceprint;
+(id)workerWithPhotoLibrary:(id)arg0 ;
// -(BOOL)optInPerson:(id)arg0 error:(*id)arg1 extendTimeoutBlock:(id)arg2 cancelBlock:(unk)arg3  ;
-(BOOL)optInStatus:(id)arg0 error:(*id)arg1 ;
-(CGFloat)_overlapRatioOf:(struct CGRect )arg0 with:(struct CGRect )arg1 ;
-(NSUInteger)optInPersonCount;
-(id)_anonymizedName:(id)arg0 ;
-(id)_fetchPeopleHomePersons;
-(id)_groundTruthURL;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(int)_loadGroundTruth:(*id)arg0 error:(*id)arg1 ;
-(int)_loadGroundTruthURL:(id)arg0 toGroundTruth:(*id)arg1 error:(*id)arg2 ;
// -(int)_measureClusterWithClusterStateURL:(id)arg0 groundTruthFaceCountPerPerson:(id)arg1 groundTruthPersonInformation:(id)arg2 groundTruthFaceToPerson:(id)arg3 groundTruthAssetToFaces:(id)arg4 measures:(*id)arg5 extendTimeoutBlock:(id)arg6 cancelBlock:(unk)arg7  ;
// -(int)_measurePVPersonClusters:(id)arg0 groundTruthFaceCountPerPerson:(id)arg1 groundTruthPersonInformation:(id)arg2 groundTruthFaceToPerson:(id)arg3 groundTruthAssetToFaces:(id)arg4 measures:(*id)arg5 extendTimeoutBlock:(id)arg6 cancelBlock:(unk)arg7  ;
// -(int)_parseGroundTruthWithURL:(id)arg0 faceCountPerPerson:(*id)arg1 personInformation:(*id)arg2 faceToPerson:(*id)arg3 assetToFaces:(*id)arg4 extendTimeoutBlock:(id)arg5 cancelBlock:(unk)arg6  ;
// -(int)_parseSIMLGroundTruthWithURL:(id)arg0 faceCountPerPerson:(*id)arg1 personInformation:(*id)arg2 faceToPerson:(*id)arg3 assetToFaces:(*id)arg4 extendTimeoutBlock:(id)arg5 cancelBlock:(unk)arg6  ;
// -(int)_processFetchedFaceGroup:(id)arg0 forPersonID:(id)arg1 facesPerAsset:(id)arg2 assetInformation:(id)arg3 extendTimeoutBlock:(id)arg4 cancelBlock:(unk)arg5  ;
-(int)_reportCoreAnalyticsWithVisionClusterMeasure:(id)arg0 personClusterMeasure:(id)arg1 personClusters:(id)arg2 andGroundTruthInformation:(id)arg3 ;
// -(int)calculateAndReportClusterAccuracyWithVisionClusterURL:(id)arg0 andPersonClusters:(id)arg1 results:(*id)arg2 extendTimeoutBlock:(id)arg3 cancelBlock:(unk)arg4  ;
// -(int)calculateAndReportClusterAccuracyWithVisionClusterURL:(id)arg0 andPersonClusters:(id)arg1 withGroundtruth:(id)arg2 results:(*id)arg3 extendTimeoutBlock:(id)arg4 cancelBlock:(unk)arg5  ;
// -(int)exportClustersStates:(*id)arg0 error:(*id)arg1 extendTimeoutBlock:(id)arg2 cancelBlock:(unk)arg3  ;
// -(int)validateClusterAccuracyWithSIMLGroundtruth:(id)arg0 results:(*id)arg1 extendTimeoutBlock:(id)arg2 cancelBlock:(unk)arg3  ;
-(void)_exportAssetsToFacesDetails:(id)arg0 ;
// -(void)_fetchPersonWithIdentifier:(id)arg0 facesPerAsset:(id)arg1 assetInformation:(id)arg2 extendTimeoutBlock:(id)arg3 cancelBlock:(unk)arg4  ;


@end


#endif