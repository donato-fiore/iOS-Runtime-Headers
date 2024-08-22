// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIWATCHLISTICONIMAGE_H
#define SEARCHUIWATCHLISTICONIMAGE_H

@class WLKArtworkVariantListing;


#import "SearchUIImage.h"

@interface SearchUIWatchListIconImage : SearchUIImage

@property (readonly) WLKArtworkVariantListing *artwork; // ivar: _artwork


-(id)initWithArtwork:(id)arg0 ;
-(int)defaultCornerRoundingStyle;
-(void)loadImageWithScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif