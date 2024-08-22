// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXSTORYRECIPEPHOTOKITLIBRARYREFERENCE_H
#define _PXSTORYRECIPEPHOTOKITLIBRARYREFERENCE_H

@class PFStoryConcreteRecipeLibrary, PHPhotoLibrary;



@interface _PXStoryRecipePhotoKitLibraryReference : PFStoryConcreteRecipeLibrary

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(id)initWithKind:(NSInteger)arg0 url:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 ;


@end


#endif