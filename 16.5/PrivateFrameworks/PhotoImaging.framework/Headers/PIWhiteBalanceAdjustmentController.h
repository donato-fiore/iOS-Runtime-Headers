// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIWHITEBALANCEADJUSTMENTCONTROLLER_H
#define PIWHITEBALANCEADJUSTMENTCONTROLLER_H



#import "PIAdjustmentController.h"

@interface PIWhiteBalanceAdjustmentController : PIAdjustmentController

@property (nonatomic) NSInteger colorType;
@property (nonatomic) CGFloat faceI;
@property (nonatomic) CGFloat faceQ;
@property (nonatomic) CGFloat faceStrength;
@property (nonatomic) CGFloat faceWarmth;
@property (nonatomic) CGFloat grayI;
@property (nonatomic) CGFloat grayQ;
@property (nonatomic) CGFloat grayStrength;
@property (nonatomic) CGFloat grayWarmth;
@property (nonatomic) CGFloat grayY;
@property (nonatomic) CGFloat temperature;
@property (nonatomic) CGFloat tint;
@property (nonatomic) BOOL warmFace;
@property (nonatomic) CGFloat warmTemp;
@property (nonatomic) CGFloat warmTint;


+(NSInteger)colorTypeForString:(id)arg0 ;
+(id)stringForColorType:(NSInteger)arg0 ;
-(BOOL)canHaveAuto;


@end


#endif