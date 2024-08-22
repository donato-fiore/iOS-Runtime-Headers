// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSMARTALBUMISOCONDITION_H
#define PXSMARTALBUMISOCONDITION_H

@class NSArray;


#import "PXSmartAlbumEXIFCondition.h"
#import "PXLabeledValue.h"

@interface PXSmartAlbumISOCondition : PXSmartAlbumEXIFCondition {
    NSArray *_ISOValues;
}


@property (retain, nonatomic) PXLabeledValue *ISOValue;
@property (readonly, nonatomic) NSArray *ISOValues;
@property (retain, nonatomic) PXLabeledValue *secondISOValue;


+(id)defaultSingleQueryForEditingContext:(id)arg0 ;
+(id)formatter;


@end


#endif