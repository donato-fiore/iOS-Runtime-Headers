// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSMARTALBUMPHOTOCONDITION_H
#define PXSMARTALBUMPHOTOCONDITION_H

@class NSArray;


#import "PXSmartAlbumCondition.h"
#import "PXLabeledValue.h"

@interface PXSmartAlbumPhotoCondition : PXSmartAlbumCondition {
    NSArray *_photoTypeValues;
}


@property (retain, nonatomic) PXLabeledValue *photoTypeValue;
@property (readonly, nonatomic) NSArray *photoTypeValues;


+(id)defaultSingleQueryForEditingContext:(id)arg0 ;


@end


#endif