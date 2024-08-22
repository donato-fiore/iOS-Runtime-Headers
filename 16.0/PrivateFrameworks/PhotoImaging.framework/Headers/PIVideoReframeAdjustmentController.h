// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIVIDEOREFRAMEADJUSTMENTCONTROLLER_H
#define PIVIDEOREFRAMEADJUSTMENTCONTROLLER_H

@class NSArray;


#import "PIAdjustmentController.h"

@interface PIVideoReframeAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSArray *keyframes;
@property (nonatomic) ? stabCropRect;


-(BOOL)isEqual:(id)arg0 forKeys:(id)arg1 ;
-(id)copyKeyframesTrimmingToTimeRange:(struct ? )arg0 ;
-(id)pasteKeysForMediaType:(NSInteger)arg0 ;


@end


#endif