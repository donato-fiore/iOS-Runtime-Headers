// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PISLOMOADJUSTMENTCONTROLLER_H
#define PISLOMOADJUSTMENTCONTROLLER_H



#import "PIAdjustmentController.h"

@interface PISlomoAdjustmentController : PIAdjustmentController

@property (nonatomic) ? endTime;
@property (nonatomic) CGFloat rate;
@property (nonatomic) ? startTime;


+(id)endKey;
+(id)endScaleKey;
+(id)startKey;
+(id)startScaleKey;
-(id)pasteKeysForMediaType:(NSInteger)arg0 ;


@end


#endif