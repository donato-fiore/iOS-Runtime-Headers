// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXREPEATABLEIMAGEFILLVIEW_H
#define SXREPEATABLEIMAGEFILLVIEW_H



#import "SXFillView.h"
#import "SXClippingView.h"
#import "SXRepeatableImageFill.h"
#import "SXRepeatableImageView.h"

@interface SXRepeatableImageFillView : SXFillView

@property (readonly, nonatomic) SXClippingView *clippingView; // ivar: _clippingView
@property (readonly, nonatomic) SXRepeatableImageFill *fill;
@property (readonly, nonatomic) SXRepeatableImageView *imageView; // ivar: _imageView
@property (nonatomic) CGSize patternSize; // ivar: _patternSize


-(id)initWithRepeatableImageFill:(id)arg0 imageView:(id)arg1 ;
-(struct CGRect )contentFrame;
-(struct CGRect )fillFrameWithBoundingSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)load;
-(void)pause;
-(void)play;
-(void)setContentFrame:(struct CGRect )arg0 ;


@end


#endif