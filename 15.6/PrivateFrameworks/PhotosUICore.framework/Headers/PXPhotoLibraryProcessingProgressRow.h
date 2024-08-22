// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOLIBRARYPROCESSINGPROGRESSROW_H
#define PXPHOTOLIBRARYPROCESSINGPROGRESSROW_H

@class PTButtonRow, PHPhotoLibrary;



@interface PXPhotoLibraryProcessingProgressRow : PTButtonRow

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(Class)tableViewCellClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultUIAction;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 titleKeyPath:(id)arg1 imageKeyPath:(id)arg2 ;


@end


#endif