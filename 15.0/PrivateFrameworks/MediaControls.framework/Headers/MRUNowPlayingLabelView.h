// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUNOWPLAYINGLABELVIEW_H
#define MRUNOWPLAYINGLABELVIEW_H

@class UIView, NSString, UILabel, MPAVRoute, MPRouteLabel, BSUIEmojiLabelView, MPUMarqueeView;
@protocol MRUVisualStylingProviderObserver;


#import "MRUVisualStylingProvider.h"

@interface MRUNowPlayingLabelView : UIView <MRUVisualStylingProviderObserver>



@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled; // ivar: _marqueeEnabled
@property (retain, nonatomic) UILabel *placeholderLabel; // ivar: _placeholderLabel
@property (copy, nonatomic) NSString *placeholderText; // ivar: _placeholderText
@property (retain, nonatomic) MPAVRoute *route; // ivar: _route
@property (retain, nonatomic) MPRouteLabel *routeLabel; // ivar: _routeLabel
@property (nonatomic) BOOL showPlaceholderText; // ivar: _showPlaceholderText
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) BSUIEmojiLabelView *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) MPUMarqueeView *subtitleMarqueeView; // ivar: _subtitleMarqueeView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) BSUIEmojiLabelView *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) MPUMarqueeView *titleMarqueeView; // ivar: _titleMarqueeView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)didMoveToWindow;
-(void)updateContentSizeCategory;
-(void)updateMarquee;
-(void)updateVisibility;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif