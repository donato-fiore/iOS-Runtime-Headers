// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PISOURCESELECTADJUSTMENTCONTROLLER_H
#define PISOURCESELECTADJUSTMENTCONTROLLER_H



#import "PIAdjustmentController.h"

@interface PISourceSelectAdjustmentController : PIAdjustmentController

@property (nonatomic) NSInteger sourceSelection;


+(NSInteger)sourceSelectionForString:(id)arg0 ;
+(id)stringForSourceSelection:(NSInteger)arg0 ;


@end


#endif