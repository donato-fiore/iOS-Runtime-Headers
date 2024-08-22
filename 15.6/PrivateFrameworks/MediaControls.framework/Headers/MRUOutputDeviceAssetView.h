// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUOUTPUTDEVICEASSETVIEW_H
#define MRUOUTPUTDEVICEASSETVIEW_H

@class UIView, NSString, UIImageView, CCUICAPackageView, BSUIEmojiLabelView;
@protocol MRUVisualStylingProviderObserver;


#import "MRUOutputDeviceAsset.h"
#import "MRUVisualStylingProvider.h"

@interface MRUOutputDeviceAssetView : UIView <MRUVisualStylingProviderObserver>



@property (retain, nonatomic) MRUOutputDeviceAsset *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *glyphState; // ivar: _glyphState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) CCUICAPackageView *packageView; // ivar: _packageView
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) BSUIEmojiLabelView *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)updateContentSizeCategory;
-(void)updateVisibility;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif