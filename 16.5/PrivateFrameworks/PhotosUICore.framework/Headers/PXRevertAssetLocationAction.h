// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXREVERTASSETLOCATIONACTION_H
#define PXREVERTASSETLOCATIONACTION_H



#import "PXAssetLocationAction.h"

@interface PXRevertAssetLocationAction : PXAssetLocationAction



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(id)actionIdentifier;
-(id)analyticsActionString;
-(id)locationForAsset:(id)arg0 shifted:(*BOOL)arg1 ;


@end


#endif