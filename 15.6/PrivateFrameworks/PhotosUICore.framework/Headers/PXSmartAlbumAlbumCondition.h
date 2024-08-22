// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSMARTALBUMALBUMCONDITION_H
#define PXSMARTALBUMALBUMCONDITION_H

@class NSArray;


#import "PXSmartAlbumCondition.h"
#import "PXLabeledValue.h"

@interface PXSmartAlbumAlbumCondition : PXSmartAlbumCondition {
    NSArray *_albumValues;
}


@property (retain, nonatomic) PXLabeledValue *albumValue;
@property (readonly, nonatomic) BOOL albumValueIsOrphaned;


+(id)anyAlbumValue;
+(id)defaultSingleQueryForEditingContext:(id)arg0 ;


@end


#endif