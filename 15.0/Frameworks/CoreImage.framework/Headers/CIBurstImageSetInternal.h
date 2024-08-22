// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIBURSTIMAGESETINTERNAL_H
#define CIBURSTIMAGESETINTERNAL_H

@class NSDictionary, NSMutableArray, NSArray, NSString, NSMutableDictionary, NSCountedSet;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "CIBurstImageFaceAnalysisContext.h"
#import "CIBurstYUVImage.h"
#import "CIBurstActionClassifier.h"

@interface CIBurstImageSetInternal : NSObject {
    NSObject<OS_dispatch_queue> *dq;
    NSObject<OS_dispatch_queue> *dq_yuvdump;
    NSObject<OS_dispatch_semaphore> *sem;
    BOOL isAction;
    BOOL isPortrait;
    CIBurstImageFaceAnalysisContext *faceAnalysisContext;
    CIBurstYUVImage *overrideImage;
    NSDictionary *overrideProps;
    *__sFILE burstLogFileHandle;
    int curClusterIndexToProcess;
}


@property CIBurstActionClassifier *actionClassifier; // ivar: actionClassifier
@property NSMutableArray *allImageIdentifiers; // ivar: allImageIdentifiers
@property NSArray *bestImageIdentifiersArray; // ivar: bestImageIdentifiersArray
@property NSString *burstCoverSelection; // ivar: burstCoverSelection
@property (retain, nonatomic) NSString *burstId; // ivar: burstId
@property NSString *burstLogFileName; // ivar: burstLogFileName
@property NSMutableArray *clusterArray; // ivar: clusterArray
@property NSMutableDictionary *clusterByImageIdentifier; // ivar: clusterByImageIdentifier
@property int dummyAnalysisCount; // ivar: dummyAnalysisCount
@property BOOL enableAnalysis; // ivar: enableAnalysis
@property BOOL enableDumpYUV; // ivar: enableDumpYUV
@property BOOL enableFaceCore; // ivar: enableFaceCore
@property NSCountedSet *faceIDCounts; // ivar: faceIDCounts
@property int maxNumPendingFrames; // ivar: maxNumPendingFrames
@property NSMutableDictionary *statsByImageIdentifier; // ivar: statsByImageIdentifier
@property int temporalOrder; // ivar: temporalOrder
@property int version; // ivar: _version
@property NSString *versionString; // ivar: _versionString


+(id)defaultVersionString;
-(BOOL)isAction;
-(BOOL)isFaceDetectionForced;
-(BOOL)isPortrait;
-(float)computeActionSelectionThreshold;
-(float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;
-(float)computeCameraTravelDistance;
-(id)bestImageIdentifiers;
-(id)burstDocumentDirectory;
-(id)findBestImage:(id)arg0 useActionScores:(BOOL)arg1 ;
-(id)imageClusterForIdentifier:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(int)computeEmotion:(id)arg0 ;
-(void)addImageFromIOSurface:(struct __IOSurface *)arg0 properties:(id)arg1 identifier:(id)arg2 completionBlock:(id)arg3 ;
-(void)addYUVImage:(id)arg0 properties:(id)arg1 identifier:(id)arg2 imageProps:(id)arg3 completionBlock:(id)arg4 ;
-(void)computeAllImageScores;
-(void)dealloc;
-(void)performEmotionalRejectionOnCluster:(id)arg0 ;
-(void)processClusters:(BOOL)arg0 ;
-(void)selectCoverPhotoFromMultiple:(id)arg0 burstSize:(int)arg1 ;


@end


#endif