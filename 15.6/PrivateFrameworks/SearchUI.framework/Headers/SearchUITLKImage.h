// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUITLKIMAGE_H
#define SEARCHUITLKIMAGE_H

@class TLKImage;


#import "SearchUIImage.h"

@interface SearchUITLKImage : TLKImage

@property (retain) SearchUIImage *searchUIImage; // ivar: _searchUIImage


-(CGFloat)aspectRatio;
-(id)initWithSearchUIImage:(id)arg0 ;
-(void)loadImageWithScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif