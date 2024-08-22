// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUVIEWCONTROLLERCOLLECTIONVIEWCELL_H
#define HUVIEWCONTROLLERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSString, UIViewController;
@protocol HUViewControllerCell;



@interface HUViewControllerCollectionViewCell : UICollectionViewCell <HUViewControllerCell>



@property (nonatomic) BOOL allowSelfSizing; // ivar: _allowSelfSizing
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (readonly) Class superclass;
@property (nonatomic) BOOL useDefaultCellBackgroundColor; // ivar: _useDefaultCellBackgroundColor
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_removeFromParentViewControllerAndClearProperty:(BOOL)arg0 ;
-(void)addToParentViewController:(id)arg0 ;
-(void)prepareForReuse;
-(void)removeFromParentViewController;


@end


#endif