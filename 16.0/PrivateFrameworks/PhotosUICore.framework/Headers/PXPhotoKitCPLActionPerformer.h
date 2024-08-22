// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOKITCPLACTIONPERFORMER_H
#define PXPHOTOKITCPLACTIONPERFORMER_H

@class PHPhotoLibrary;


#import "PXCPLActionPerformer.h"

@interface PXPhotoKitCPLActionPerformer : PXCPLActionPerformer

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(id)initWithActionType:(id)arg0 ;
-(id)initWithActionType:(id)arg0 photoLibrary:(id)arg1 ;


@end


#endif