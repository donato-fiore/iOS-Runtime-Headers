// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSMARTALBUMFLASHCONDITION_H
#define PXSMARTALBUMFLASHCONDITION_H

@class NSArray;


#import "PXSmartAlbumCondition.h"
#import "PXLabeledValue.h"

@interface PXSmartAlbumFlashCondition : PXSmartAlbumCondition {
    NSArray *_flashFiredValues;
}


@property (retain, nonatomic) PXLabeledValue *flashFiredValue;
@property (readonly, nonatomic) NSArray *flashFiredValues;


+(id)defaultSingleQueryForEditingContext:(id)arg0 ;


@end


#endif