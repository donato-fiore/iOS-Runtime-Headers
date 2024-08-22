// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXREMOVEASSETLOCATIONACTION_H
#define PXREMOVEASSETLOCATIONACTION_H



#import "PXAssetLocationAction.h"

@interface PXRemoveAssetLocationAction : PXAssetLocationAction



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)analyticsActionString;
-(id)locationForAsset:(id)arg0 shifted:(*BOOL)arg1 ;


@end


#endif