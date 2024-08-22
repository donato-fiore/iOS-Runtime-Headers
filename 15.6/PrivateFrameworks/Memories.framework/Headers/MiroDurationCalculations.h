// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIRODURATIONCALCULATIONS_H
#define MIRODURATIONCALCULATIONS_H


#import <Foundation/Foundation.h>


@interface MiroDurationCalculations : NSObject



+(CGFloat)biasedDurationOfItems:(id)arg0 inRange:(struct _NSRange )arg1 ;
+(CGFloat)durationForItemCount:(NSInteger)arg0 inPickList:(id)arg1 withBlueprint:(id)arg2 respectTrim:(BOOL)arg3 localOnly:(BOOL)arg4 ;
+(CGFloat)maxDurationForPickList:(id)arg0 withBlueprint:(id)arg1 ;
+(CGFloat)maxPleasantDurationOfItems:(id)arg0 inRange:(struct _NSRange )arg1 ;
+(CGFloat)rawDurationOfItems:(id)arg0 inRange:(struct _NSRange )arg1 ;
+(NSInteger)itemCountInPickList:(id)arg0 forDuration:(CGFloat)arg1 ;
+(NSInteger)itemCountInPickList:(id)arg0 forDuration:(CGFloat)arg1 withBlueprint:(id)arg2 respectTrim:(BOOL)arg3 outputResidual:(*CGFloat)arg4 ;
+(id)_itemsForDuration:(CGFloat)arg0 inPickList:(id)arg1 blueprint:(id)arg2 localOnly:(BOOL)arg3 respectTrim:(BOOL)arg4 ;
+(int)durationRangeForFrozenPickList:(id)arg0 ;
+(struct Buckets )doAllTheThingsForPickList:(id)arg0 ;


@end


#endif