// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIPHOTOSLIBRARYIMAGE_H
#define SEARCHUIPHOTOSLIBRARYIMAGE_H

@class PHAsset, SFPhotosLibraryImage;


#import "SearchUIImage.h"

@interface SearchUIPhotosLibraryImage : SearchUIImage

@property (retain) PHAsset *asset; // ivar: _asset
@property CGSize pixelSize; // ivar: _pixelSize
@property (retain) SFPhotosLibraryImage *sfImage;


-(BOOL)useFastPathShadow;
-(id)fetchAsset;
-(id)photoIdentifier;
-(struct CGSize )size;
-(void)loadImageWithScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif