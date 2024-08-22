// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUILOCALIMAGE_H
#define SEARCHUILOCALIMAGE_H



#import "SearchUIImage.h"

@interface SearchUILocalImage : SearchUIImage

@property (nonatomic) int imageType; // ivar: _imageType


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithSFImage:(id)arg0 ;
-(id)loadImageWithScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 ;


@end


#endif