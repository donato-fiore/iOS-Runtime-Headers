// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUVIEWSERVICEROUTINGHEADERVIEW_H
#define MRUVIEWSERVICEROUTINGHEADERVIEW_H

@class UIView, NSString, UIImage, UIImageView, UILabel;
@protocol MRUVisualStylingProviderObserver;


#import "MRUVisualStylingProvider.h"

@interface MRUViewServiceRoutingHeaderView : UIView <MRUVisualStylingProviderObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)updateContentSizeCategory;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif