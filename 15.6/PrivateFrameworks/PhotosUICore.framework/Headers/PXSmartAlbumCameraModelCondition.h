// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSMARTALBUMCAMERAMODELCONDITION_H
#define PXSMARTALBUMCAMERAMODELCONDITION_H

@class NSArray, NSString;


#import "PXSmartAlbumEXIFCondition.h"

@interface PXSmartAlbumCameraModelCondition : PXSmartAlbumEXIFCondition {
    NSArray *_cameraModels;
}


@property (retain, nonatomic) NSString *cameraModel;
@property (readonly, nonatomic) NSArray *cameraModels;


+(id)defaultSingleQueryForEditingContext:(id)arg0 ;


@end


#endif