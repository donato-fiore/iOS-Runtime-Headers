// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIAUTOLOOPADJUSTMENTCONTROLLER_H
#define PIAUTOLOOPADJUSTMENTCONTROLLER_H

@class NSString, NSDictionary;


#import "PIAdjustmentController.h"

@interface PIAutoLoopAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSString *flavor;
@property (copy, nonatomic) NSDictionary *recipe;
@property (readonly, nonatomic) CGRect stabilizedCropRect;


-(id)pasteKeysForMediaType:(NSInteger)arg0 ;


@end


#endif