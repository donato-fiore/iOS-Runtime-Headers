// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUOUTPUTDEVICEASSETVIEW_H
#define MRUOUTPUTDEVICEASSETVIEW_H

@class UIView, NSString, BSUIEmojiLabelView;
@protocol MRUVisualStylingProviderObserver;


#import "MRUOutputDeviceAsset.h"
#import "MRUAssetView.h"
#import "MRUVisualStylingProvider.h"

@interface MRUOutputDeviceAssetView : UIView <MRUVisualStylingProviderObserver>



@property (retain, nonatomic) MRUOutputDeviceAsset *asset; // ivar: _asset
@property (retain, nonatomic) MRUAssetView *assetView; // ivar: _assetView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *glyphState; // ivar: _glyphState
@property (readonly) NSUInteger hash;
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