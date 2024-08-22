// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSMARTALBUMPERSONCONDITION_H
#define PXSMARTALBUMPERSONCONDITION_H

@class NSArray, NSString;


#import "PXSmartAlbumCondition.h"

@interface PXSmartAlbumPersonCondition : PXSmartAlbumCondition {
    NSArray *_personNames;
}


@property (retain, nonatomic) NSString *personName;
@property (readonly, nonatomic) NSArray *personNames;


+(id)defaultSingleQueryForEditingContext:(id)arg0 ;


@end


#endif