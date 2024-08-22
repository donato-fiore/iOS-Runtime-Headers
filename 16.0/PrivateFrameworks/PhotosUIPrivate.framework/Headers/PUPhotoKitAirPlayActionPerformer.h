// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOKITAIRPLAYACTIONPERFORMER_H
#define PUPHOTOKITAIRPLAYACTIONPERFORMER_H



#import "PUPhotoKitActionPerformer.h"

@interface PUPhotoKitAirPlayActionPerformer : PUPhotoKitActionPerformer



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(void)_handleDismissedAirPlayPicker;
-(void)_showAirPlayPicker;
-(void)performUserInteractionTask;


@end


#endif