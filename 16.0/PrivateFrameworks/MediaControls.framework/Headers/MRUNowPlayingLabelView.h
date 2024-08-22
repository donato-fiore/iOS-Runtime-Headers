// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUNOWPLAYINGLABELVIEW_H
#define MRUNOWPLAYINGLABELVIEW_H

@class UIControl, UIView, NSString, MPAVRoute, MPRouteLabel;
@protocol MRUVisualStylingProviderObserver;


#import "MRUMarqueeLabel.h"
#import "MRUVisualStylingProvider.h"

@interface MRUNowPlayingLabelView : UIControl <MRUVisualStylingProviderObserver>



@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled; // ivar: _marqueeEnabled
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (retain, nonatomic) MRUMarqueeLabel *placeholderMarqueeView; // ivar: _placeholderMarqueeView
@property (retain, nonatomic) MPAVRoute *route; // ivar: _route
@property (retain, nonatomic) MPRouteLabel *routeLabel; // ivar: _routeLabel
@property (nonatomic) BOOL showPlaceholder; // ivar: _showPlaceholder
@property (nonatomic) BOOL showRoute; // ivar: _showRoute
@property (nonatomic) BOOL showSubtitle; // ivar: _showSubtitle
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) MRUMarqueeLabel *subtitleMarqueeView; // ivar: _subtitleMarqueeView
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) MRUMarqueeLabel *titleMarqueeView; // ivar: _titleMarqueeView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(struct CGSize )sizeForText:(id)arg0 font:(id)arg1 layout:(NSInteger)arg2 availableSize:(struct CGSize )arg3 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)didMoveToWindow;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)updateContentSizeCategory;
-(void)updateMarquee;
-(void)updateVisibility;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif