// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSMARTALBUMDATEVALUECONDITION_H
#define PXSMARTALBUMDATEVALUECONDITION_H

@class NSArray, NSDate, NSNumber;


#import "PXSmartAlbumCondition.h"
#import "PXLabeledValue.h"

@interface PXSmartAlbumDateValueCondition : PXSmartAlbumCondition {
    NSArray *_unitValues;
}


@property (retain, nonatomic) NSDate *dateValue;
@property (readonly, nonatomic) BOOL hasNumberOfUnitValue;
@property (retain, nonatomic) NSNumber *numberOfUnitValue;
@property (retain, nonatomic) NSDate *secondDateValue;
@property (retain, nonatomic) PXLabeledValue *unitValue;
@property (readonly, nonatomic) NSArray *unitValues;


-(NSInteger)comparatorMode;
-(void)setComparatorValue:(id)arg0 ;


@end


#endif