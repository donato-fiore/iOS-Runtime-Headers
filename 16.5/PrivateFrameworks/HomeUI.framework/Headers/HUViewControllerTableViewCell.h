// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUVIEWCONTROLLERTABLEVIEWCELL_H
#define HUVIEWCONTROLLERTABLEVIEWCELL_H

@class UITableViewCell, NSString, UIViewController;
@protocol HUViewControllerCell;



@interface HUViewControllerTableViewCell : UITableViewCell <HUViewControllerCell>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreRounding; // ivar: _ignoreRounding
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_removeFromParentViewControllerAndClearProperty:(BOOL)arg0 ;
-(void)addToParentViewController:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)removeFromParentViewController;


@end


#endif