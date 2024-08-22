// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXREMOVEASSETSFROMASSETCOLLECTIONACTION_H
#define PXREMOVEASSETSFROMASSETCOLLECTIONACTION_H

@class NSDictionary;


#import "PXAssetsSelectionAction.h"

@interface PXRemoveAssetsFromAssetCollectionAction : PXAssetsSelectionAction {
    NSDictionary *_removedAssetIdentifiers;
    NSDictionary *_removedAssetIndexes;
}




-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif