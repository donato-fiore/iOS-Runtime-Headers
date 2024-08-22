// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSMARTALBUMSHUTTERSPEEDCONDITION_H
#define PXSMARTALBUMSHUTTERSPEEDCONDITION_H

@class NSArray;


#import "PXSmartAlbumEXIFCondition.h"
#import "PXLabeledValue.h"

@interface PXSmartAlbumShutterSpeedCondition : PXSmartAlbumEXIFCondition {
    NSArray *_shutterSpeedValues;
}


@property (retain, nonatomic) PXLabeledValue *secondShutterSpeedValue;
@property (retain, nonatomic) PXLabeledValue *shutterSpeedValue;
@property (readonly, nonatomic) NSArray *shutterSpeedValues;


+(id)defaultSingleQueryForEditingContext:(id)arg0 ;
+(id)formatter;


@end


#endif