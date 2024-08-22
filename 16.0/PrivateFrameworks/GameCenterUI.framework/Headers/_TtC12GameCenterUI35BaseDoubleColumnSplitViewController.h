// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI35BASEDOUBLECOLUMNSPLITVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI35BASEDOUBLECOLUMNSPLITVIEWCONTROLLER_H

@class UISplitViewController;
@protocol UISplitViewControllerDelegate;



@interface _TtC12GameCenterUI35BaseDoubleColumnSplitViewController : UISplitViewController <UISplitViewControllerDelegate>

 {
    ? secondaryOverrideTraitCollection;
    ? $__lazy_storage_$_backgroundView;
    ? secondaryContainerViewController;
    ? secondarySource;
}




-(NSInteger)splitViewController:(id)arg0 displayModeForExpandingToProposedDisplayMode:(NSInteger)arg1 ;
-(NSInteger)splitViewController:(id)arg0 topColumnForCollapsingToProposedTopColumn:(NSInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)setViewController:(id)arg0 forColumn:(NSInteger)arg1 ;
-(void)showDetailViewController:(id)arg0 sender:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif