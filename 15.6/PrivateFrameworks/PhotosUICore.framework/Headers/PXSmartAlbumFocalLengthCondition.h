// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSMARTALBUMFOCALLENGTHCONDITION_H
#define PXSMARTALBUMFOCALLENGTHCONDITION_H

@class NSArray;


#import "PXSmartAlbumEXIFCondition.h"
#import "PXLabeledValue.h"

@interface PXSmartAlbumFocalLengthCondition : PXSmartAlbumEXIFCondition {
    NSArray *_focalLengthValues;
}


@property (retain, nonatomic) PXLabeledValue *focalLengthValue;
@property (readonly, nonatomic) NSArray *focalLengthValues;
@property (retain, nonatomic) PXLabeledValue *secondFocalLengthValue;


+(id)defaultSingleQueryForEditingContext:(id)arg0 ;
+(id)formatter;


@end


#endif