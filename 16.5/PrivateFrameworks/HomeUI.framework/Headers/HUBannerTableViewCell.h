// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUBANNERTABLEVIEWCELL_H
#define HUBANNERTABLEVIEWCELL_H

@class UITableViewCell, NSString, HFItem;
@protocol HUGridCellProtocol, HUBannerViewDelegate, HUResizableCellDelegate;


#import "HUBannerView.h"
#import "HUGridCellLayoutOptions.h"

@interface HUBannerTableViewCell : UITableViewCell <HUGridCellProtocol>



@property (readonly, nonatomic) HUBannerView *bannerView; // ivar: _bannerView
@property (nonatomic, getter=areCellContentsHidden) BOOL cellContentsHidden;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUBannerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item;
@property (retain, nonatomic) HUGridCellLayoutOptions *layoutOptions;
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled;
@property (nonatomic) CGFloat pointerRegionMargin;
@property (nonatomic, getter=isRearranging) BOOL rearranging;
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif