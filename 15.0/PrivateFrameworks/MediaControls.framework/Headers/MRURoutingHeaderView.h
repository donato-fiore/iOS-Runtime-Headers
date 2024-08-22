// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUROUTINGHEADERVIEW_H
#define MRUROUTINGHEADERVIEW_H

@class UITableViewHeaderFooterView, NSString, UIView, UILabel;
@protocol MRUVisualStylingProviderObserver;


#import "MRUVisualStylingProvider.h"

@interface MRURoutingHeaderView : UITableViewHeaderFooterView <MRUVisualStylingProviderObserver>



@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithReuseIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)updateContentSizeCategory;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif