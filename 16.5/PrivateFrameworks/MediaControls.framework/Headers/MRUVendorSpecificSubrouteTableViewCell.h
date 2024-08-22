// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUVENDORSPECIFICSUBROUTETABLEVIEWCELL_H
#define MRUVENDORSPECIFICSUBROUTETABLEVIEWCELL_H

@class UITableViewCell, NSString, UIImage, UIImageView, UILabel, UIView;
@protocol MRURoutingSubtitleControllerDelegate, MRUVisualStylingProviderObserver;


#import "MRURoutingAccessoryView.h"
#import "MRUVisualStylingProvider.h"
#import "MRURoutingSubtitleController.h"
#import "MRURoutingSubtitleView.h"

@interface MRUVendorSpecificSubrouteTableViewCell : UITableViewCell <MRURoutingSubtitleControllerDelegate, MRUVisualStylingProviderObserver>



@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *protocolIcon; // ivar: _protocolIcon
@property (retain, nonatomic) UIImageView *protocolIconView; // ivar: _protocolIconView
@property (copy, nonatomic) NSString *protocolName; // ivar: _protocolName
@property (retain, nonatomic) UILabel *protocolNameLabel; // ivar: _protocolNameLabel
@property (readonly, nonatomic) MRURoutingAccessoryView *routingAccessoryView; // ivar: _routingAccessoryView
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly, nonatomic) MRURoutingSubtitleController *subtitleStateController; // ivar: _subtitleStateController
@property (retain, nonatomic) MRURoutingSubtitleView *subtitleView; // ivar: _subtitleView
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)routingSubtitleStateController:(id)arg0 didUpdateText:(id)arg1 icon:(id)arg2 accessory:(NSInteger)arg3 ;
-(void)setIcon:(id)arg0 ;
-(void)setSubtitle:(id)arg0 ;
-(void)setSubtitleAccessory:(NSInteger)arg0 ;
-(void)updateContentSizeCategory;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif