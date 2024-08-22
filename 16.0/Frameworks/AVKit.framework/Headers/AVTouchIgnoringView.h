// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTOUCHIGNORINGVIEW_H
#define AVTOUCHIGNORINGVIEW_H

@class UIView, NSString;
@protocol AVPlaybackControlsViewItem;


#import "AVLayoutItemAttributes.h"

@interface AVTouchIgnoringView : UIView <AVPlaybackControlsViewItem>



@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded; // ivar: _collapsedOrExcluded
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize extrinsicContentSize; // ivar: _extrinsicContentSize
@property (nonatomic) BOOL hasAlternateAppearance; // ivar: _hasAlternateAppearance
@property (nonatomic) BOOL hasFullScreenAppearance; // ivar: _hasFullScreenAppearance
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isIncluded) BOOL included; // ivar: _included
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // ivar: _layoutAttributes
@property (nonatomic, getter=isRemoved) BOOL removed; // ivar: _removed
@property (readonly) Class superclass;


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )minimumSize;
-(void)_updateLayoutItem;


@end


#endif