// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSMARTALBUMAPERTURECONDITION_H
#define PXSMARTALBUMAPERTURECONDITION_H

@class NSArray;


#import "PXSmartAlbumEXIFCondition.h"
#import "PXLabeledValue.h"

@interface PXSmartAlbumApertureCondition : PXSmartAlbumEXIFCondition {
    NSArray *_apertureValues;
}


@property (retain, nonatomic) PXLabeledValue *apertureValue;
@property (readonly, nonatomic) NSArray *apertureValues;
@property (retain, nonatomic) PXLabeledValue *secondApertureValue;


+(id)defaultSingleQueryForEditingContext:(id)arg0 ;
+(id)formatter;


@end


#endif