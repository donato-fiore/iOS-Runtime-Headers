// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PISEMANTICENHANCEADJUSTMENTCONTROLLER_H
#define PISEMANTICENHANCEADJUSTMENTCONTROLLER_H

@class NSArray;


#import "PIAdjustmentController.h"

@interface PISemanticEnhanceAdjustmentController : PIAdjustmentController

@property (readonly, copy, nonatomic) NSArray *boundingBoxes;
@property (nonatomic) CGFloat intensity;
@property (readonly, nonatomic) NSInteger scene;
@property (readonly, nonatomic) CGFloat sceneConfidence;


+(id)faceBoundingBoxesKey;
+(id)genericLandscapeSceneLabel;
+(id)platedFoodSceneLabel;
-(BOOL)isSettingEqual:(id)arg0 forKey:(id)arg1 ;
-(void)setFaceBoundingBoxesFromObservations:(id)arg0 orientation:(NSInteger)arg1 ;


@end


#endif