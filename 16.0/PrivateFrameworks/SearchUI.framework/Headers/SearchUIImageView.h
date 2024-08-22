// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIIMAGEVIEW_H
#define SEARCHUIIMAGEVIEW_H

@class TLKImageView, SFImage, NSString, CALayer, UIView;
@protocol TLKImageViewDelegate;


#import "SearchUIButton.h"

@interface SearchUIImageView : TLKImageView <TLKImageViewDelegate>



@property (retain, nonatomic) SFImage *currentImage; // ivar: _currentImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SFImage *fallbackImage; // ivar: _fallbackImage
@property (readonly) NSUInteger hash;
@property (readonly) CALayer *highlightReferenceLayer;
@property (retain, nonatomic) SearchUIButton *overlayPlayButton; // ivar: _overlayPlayButton
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *tintView; // ivar: _tintView


+(id)imageViewWithImage:(id)arg0 ;
+(id)thumbnailForRowModel:(id)arg0 ;
-(id)init;
-(void)appIconDidChange:(id)arg0 ;
-(void)didFailToLoadImage;
-(void)didUpdateWithImage:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateWithImage:(id)arg0 ;
-(void)updateWithImage:(id)arg0 fallbackImage:(id)arg1 needsOverlayButton:(BOOL)arg2 ;


@end


#endif