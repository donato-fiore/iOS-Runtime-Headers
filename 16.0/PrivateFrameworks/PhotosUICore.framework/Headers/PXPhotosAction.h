// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSACTION_H
#define PXPHOTOSACTION_H

@class PHPhotoLibrary, PHFetchOptions;
@protocol PXFastEnumeration;


#import "PXAction.h"

@interface PXPhotosAction : PXAction

@property (readonly, nonatomic) NSInteger assetCount;
@property (readonly, nonatomic) NSObject<PXFastEnumeration> *assets;
@property (readonly, nonatomic) NSObject<PXFastEnumeration> *collections;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) PHFetchOptions *standardFetchOptions; // ivar: _standardFetchOptions


-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)_registerRedoWithUndoManager:(id)arg0 ;
-(void)_registerUndoWithUndoManager:(id)arg0 ;
// -(void)performChanges:(id)arg0 completionHandler:(unk)arg1  ;


@end


#endif