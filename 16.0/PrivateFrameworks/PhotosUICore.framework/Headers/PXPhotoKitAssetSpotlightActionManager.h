// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOKITASSETSPOTLIGHTACTIONMANAGER_H
#define PXPHOTOKITASSETSPOTLIGHTACTIONMANAGER_H



#import "PXPhotoKitAssetActionManager.h"

@interface PXPhotoKitAssetSpotlightActionManager : PXPhotoKitAssetActionManager



+(id)notThisPersonLocalizedTitleForPerson:(id)arg0 ;
+(id)notThisPersonSystemImage;
-(BOOL)canPerformActionType:(id)arg0 ;
-(BOOL)supportsActionType:(id)arg0 ;
-(NSUInteger)presentationSource;
-(void)px_registerAdditionalPerformerClasses;


@end


#endif