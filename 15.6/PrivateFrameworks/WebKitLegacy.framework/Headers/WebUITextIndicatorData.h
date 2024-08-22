// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBUITEXTINDICATORDATA_H
#define WEBUITEXTINDICATORDATA_H

@class UIImage, UIColor, NSArray;

#import <Foundation/Foundation.h>


@interface WebUITextIndicatorData : NSObject

@property (retain, nonatomic) UIImage *contentImage; // ivar: _contentImage
@property (nonatomic) CGFloat contentImageScaleFactor; // ivar: _contentImageScaleFactor
@property (retain, nonatomic) UIImage *contentImageWithHighlight; // ivar: _contentImageWithHighlight
@property (retain, nonatomic) UIImage *contentImageWithoutSelection; // ivar: _contentImageWithoutSelection
@property (nonatomic) CGRect contentImageWithoutSelectionRectInRootViewCoordinates; // ivar: _contentImageWithoutSelectionRectInRootViewCoordinates
@property (retain, nonatomic) UIImage *dataInteractionImage; // ivar: _dataInteractionImage
@property (retain, nonatomic) UIColor *estimatedBackgroundColor; // ivar: _estimatedBackgroundColor
@property (nonatomic) CGRect selectionRectInRootViewCoordinates; // ivar: _selectionRectInRootViewCoordinates
@property (nonatomic) CGRect textBoundingRectInRootViewCoordinates; // ivar: _textBoundingRectInRootViewCoordinates
@property (retain, nonatomic) NSArray *textRectsInBoundingRectCoordinates; // ivar: _textRectsInBoundingRectCoordinates


-(id)initWithImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 ;
-(id)initWithImage:(struct CGImage *)arg0 textIndicatorData:(*void)arg1 scale:(CGFloat)arg2 ;
-(void)dealloc;


@end


#endif