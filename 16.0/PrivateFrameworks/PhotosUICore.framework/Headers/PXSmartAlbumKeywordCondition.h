// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSMARTALBUMKEYWORDCONDITION_H
#define PXSMARTALBUMKEYWORDCONDITION_H

@class NSArray;


#import "PXSmartAlbumCondition.h"
#import "PXLabeledValue.h"

@interface PXSmartAlbumKeywordCondition : PXSmartAlbumCondition {
    NSArray *_keywordValues;
}


@property (retain, nonatomic) PXLabeledValue *keywordValue;
@property (readonly, nonatomic) NSArray *keywordValues;


+(id)anyKeywordValue;
+(id)defaultSingleQueryForEditingContext:(id)arg0 ;


@end


#endif