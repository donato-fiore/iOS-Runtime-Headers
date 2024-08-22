// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHOTFLOWDETECTORANODV3_H
#define SHOTFLOWDETECTORANODV3_H



#import "ShotflowDetectorANODBase.h"

@interface ShotflowDetectorANODv3 : ShotflowDetectorANODBase

@property (nonatomic) float faceDetectionPrecisionRecallThreshold;


+(Class)shotflowNetworkClass;
+(float)defaultFaceDetectionPrecisionRecallThreshold;
+(id)filterThresholds;
+(id)supportedLabelKeys;
-(id)getIndexBoxes:(id)arg0 filterThresholdIndex:(NSUInteger)arg1 ;
-(id)initWithNetwork:(id)arg0 ;
-(id)initWithNetwork:(id)arg0 filterThresholds:(id)arg1 ;
-(id)nmsBoxes:(id)arg0 ;
-(id)processBoxes:(id)arg0 withHeight:(float)arg1 andWidth:(float)arg2 ;


@end


#endif