// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIREDEYEADJUSTMENTCONTROLLER_H
#define PIREDEYEADJUSTMENTCONTROLLER_H

@class NSArray;


#import "PIAdjustmentController.h"

@interface PIRedEyeAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSArray *inputCorrectionInfo;


-(BOOL)hasCorrections;
-(id)pasteKeysForMediaType:(NSInteger)arg0 ;


@end


#endif