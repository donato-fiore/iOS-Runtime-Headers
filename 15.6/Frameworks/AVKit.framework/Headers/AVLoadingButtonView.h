// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVLOADINGBUTTONVIEW_H
#define AVLOADINGBUTTONVIEW_H

@class UIView, NSString, UIActivityIndicatorView;
@protocol AVPlaybackControlsViewItem;


#import "AVButton.h"
#import "AVLayoutItemAttributes.h"

@interface AVLoadingButtonView : UIView <AVPlaybackControlsViewItem>



@property (readonly, nonatomic) AVButton *button; // ivar: _button
@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded; // ivar: _collapsedOrExcluded
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize extrinsicContentSize;
@property (nonatomic) BOOL hasAlternateAppearance; // ivar: _hasAlternateAppearance
@property (nonatomic) BOOL hasFullScreenAppearance; // ivar: _hasFullScreenAppearance
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isIncluded) BOOL included; // ivar: _included
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // ivar: _layoutAttributes
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // ivar: _loadingIndicator
@property (nonatomic, getter=isRemoved) BOOL removed; // ivar: _removed
@property (nonatomic) BOOL showsLoadingIndicator; // ivar: _showsLoadingIndicator
@property (readonly) Class superclass;


-(id)initWithTitle:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateLayoutItem;
-(void)layoutSubviews;


@end


#endif