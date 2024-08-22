// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUASSETVIEW_H
#define MRUASSETVIEW_H

@class UIView, NSString, UIImageSymbolConfiguration, UIImageView;
@protocol MRUVisualStylingProviderObserver;


#import "MRUAsset.h"
#import "MRUCAPackageView.h"
#import "MRUVisualStylingProvider.h"

@interface MRUAssetView : UIView <MRUVisualStylingProviderObserver>



@property (retain, nonatomic) MRUAsset *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *glyphState; // ivar: _glyphState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // ivar: _imageSymbolConfiguration
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) CGFloat packageScale; // ivar: _packageScale
@property (retain, nonatomic) MRUCAPackageView *packageView; // ivar: _packageView
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg0 ;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif