// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUVENDORSPECIFICSUBTITLEVIEW_H
#define MRUVENDORSPECIFICSUBTITLEVIEW_H

@class UIView, UIStackView, NSString, UILabel;
@protocol MRUVisualStylingProviderObserver;


#import "MRUVendorSpecificTableViewCell.h"
#import "MRUVisualStylingProvider.h"

@interface MRUVendorSpecificSubtitleView : UIView <MRUVisualStylingProviderObserver>



@property (nonatomic) NSInteger cellType; // ivar: _cellType
@property (weak, nonatomic) MRUVendorSpecificTableViewCell *containerCell; // ivar: _containerCell
@property (retain, nonatomic) UIStackView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *protocolName; // ivar: _protocolName
@property (retain, nonatomic) UILabel *protocolNameLabel; // ivar: _protocolNameLabel
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateContentSizeCategory;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif