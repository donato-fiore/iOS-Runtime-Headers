// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFPOPOVERSIZINGTABLEVIEWCONTROLLER_H
#define SFPOPOVERSIZINGTABLEVIEWCONTROLLER_H

@class UITableViewController, UIBlurEffect;



@interface SFPopoverSizingTableViewController : UITableViewController {
    UIBlurEffect *_backgroundBlurEffect;
    BOOL _didUpdateTranslucentAppearanceAtLeastOnce;
    BOOL _didHaveTranslucentAppearance;
    CGSize _lastLayoutContentSize;
    BOOL _updatePreferredContentSizeAfterNextLayout;
}


@property (readonly, nonatomic) BOOL hasTranslucentAppearance;
@property (readonly, nonatomic) NSInteger maximumNumberOfRows;
@property (readonly, nonatomic) NSInteger minimumNumberOfRows;


+(CGFloat)caculateHeightForTableView:(id)arg0 targetGlobalRow:(NSInteger)arg1 outGlobalRow:(*NSInteger)arg2 ;
+(id)tableViewCellForSizeEstimation;
+(void)initialize;
-(BOOL)_needsTranslucentAppearanceUpdate;
-(id)_backgroundBlurEffect;
-(id)backgroundColorUsingTranslucentAppearance:(BOOL)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)_updateTranslucentAppearanceIfNeeded;
-(void)cancelKeyPressed;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePreferredContentSize;
-(void)updateTranslucentAppearance;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif