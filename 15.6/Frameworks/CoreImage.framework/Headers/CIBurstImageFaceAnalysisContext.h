// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIBURSTIMAGEFACEANALYSISCONTEXT_H
#define CIBURSTIMAGEFACEANALYSISCONTEXT_H

@class NSMutableDictionary, NSMutableArray, FCRFaceDetector;

#import <Foundation/Foundation.h>


@interface CIBurstImageFaceAnalysisContext : NSObject {
    NSMutableDictionary *curConfig;
    NSMutableDictionary *faceIdMapping;
    NSMutableDictionary *renameMapping;
    int faceIdCounter;
    NSMutableArray *faceInfoArray;
    int numFramesSinceFullFaceCore;
    int numFramesNoFaces;
    FCRFaceDetector *faceDetector;
    NSMutableArray *faceTimestampArray;
    CGFloat latestImageTimestamp;
    int lastFaceIndex;
}


@property BOOL forceFaceDetectionEnable; // ivar: forceFaceDetectionEnable
@property CGFloat latestFaceTimestamp; // ivar: latestFaceTimestamp
@property CGFloat timeBlinkDetectionDone; // ivar: timeBlinkDetectionDone
@property CGFloat timeFaceDetectionDone; // ivar: timeFaceDetectionDone
@property int version; // ivar: _version


-(id)findOverlappingFaceStat:(struct CGRect )arg0 imageStat:(id)arg1 ;
-(id)initWithVersion:(id)arg0 ;
-(int)findFacesInImage:(id)arg0 imageStat:(id)arg1 ;
-(struct CGRect )calculateFaceCoreROI:(id)arg0 imageStat:(id)arg1 needFaceCore:(*BOOL)arg2 ;
-(struct CGRect )padRoiRect:(struct CGRect )arg0 paddingX:(float)arg1 paddingY:(float)arg2 ;
-(void)addFaceToArray:(id)arg0 ;
-(void)addFacesToImageStat:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(void)adjustFaceIdsForImageStat:(id)arg0 ;
-(void)calcFaceScores:(id)arg0 ;
-(void)calculateFaceFocusInImage:(id)arg0 imageStat:(id)arg1 ;
-(void)dealloc;
-(void)dumpFaceInfoArray;
-(void)extractFacesFromMetadata:(id)arg0 ;
-(void)setupFaceDetector;


@end


#endif