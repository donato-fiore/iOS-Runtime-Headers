// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSMARTALBUMLENSMODELCONDITION_H
#define PXSMARTALBUMLENSMODELCONDITION_H

@class NSArray, NSString;


#import "PXSmartAlbumEXIFCondition.h"

@interface PXSmartAlbumLensModelCondition : PXSmartAlbumEXIFCondition {
    NSArray *_lensModels;
}


@property (retain, nonatomic) NSString *lensModel;
@property (readonly, nonatomic) NSArray *lensModels;


+(id)defaultSingleQueryForEditingContext:(id)arg0 ;


@end


#endif