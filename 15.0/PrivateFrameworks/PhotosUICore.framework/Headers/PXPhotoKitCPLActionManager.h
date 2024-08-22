// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOKITCPLACTIONMANAGER_H
#define PXPHOTOKITCPLACTIONMANAGER_H

@class PHPhotoLibrary;


#import "PXCPLActionManager.h"

@interface PXPhotoKitCPLActionManager : PXCPLActionManager

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(id)actionPerformerForActionType:(id)arg0 ;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;


@end


#endif