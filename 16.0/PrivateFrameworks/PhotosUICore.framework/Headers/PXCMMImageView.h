// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMIMAGEVIEW_H
#define PXCMMIMAGEVIEW_H

@class UIView, UIImageView, NSString;
@protocol PXChangeObserver;


#import "PXImageRequesterHelper.h"
#import "PXCMMImageViewModel.h"

@interface PXCMMImageView : UIView <PXChangeObserver>

 {
    UIImageView *_imageView;
    UIView *_highlightView;
    PXImageRequesterHelper *_imageRequesterHelper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PXCMMImageViewModel *viewModel; // ivar: _viewModel


-(BOOL)test_highlighted;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateContentsRect;
-(void)_updateHighlighted;
-(void)_updateImage;
-(void)_updateImageRequestHelper;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif