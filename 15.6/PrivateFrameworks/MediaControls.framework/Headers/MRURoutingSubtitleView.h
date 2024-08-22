// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUROUTINGSUBTITLEVIEW_H
#define MRUROUTINGSUBTITLEVIEW_H

@class UIView, NSString, UILabel;
@protocol MRUVisualStylingProviderObserver;


#import "MRUEqualizerView.h"
#import "MRUVisualStylingProvider.h"

@interface MRURoutingSubtitleView : UIView <MRUVisualStylingProviderObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MRUEqualizerView *equalizerView; // ivar: _equalizerView
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateContentSizeCategory;
-(void)updateVisibility;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif