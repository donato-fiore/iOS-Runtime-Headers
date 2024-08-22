// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPIMAGECOMPOSER_H
#define TSWPIMAGECOMPOSER_H

@class TSUImage;

#import <Foundation/Foundation.h>


@interface TSWPImageComposer : NSObject

@property (retain, nonatomic) TSUImage *baseImage; // ivar: _baseImage
@property (retain, nonatomic) TSUImage *compositedImage; // ivar: _compositedImage
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale


-(id)initWithBaseImage:(id)arg0 screenScale:(CGFloat)arg1 ;
-(id)overlayImage:(id)arg0 usingFrame:(struct CGRect )arg1 ;


@end


#endif