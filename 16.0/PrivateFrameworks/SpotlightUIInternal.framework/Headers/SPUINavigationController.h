// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPUINAVIGATIONCONTROLLER_H
#define SPUINAVIGATIONCONTROLLER_H

@class UINavigationController, NSString;
@protocol UINavigationControllerDelegate, SPUISearchViewControllerSizingDelegate, SearchUICardViewDelegate, SPUINavigationControllerDelegate, SPUIUnifiedFieldNavigationDelegate;


#import "SPUINavigationBar.h"
#import "SPUISearchViewController.h"

@interface SPUINavigationController : UINavigationController <UINavigationControllerDelegate, SPUISearchViewControllerSizingDelegate, SearchUICardViewDelegate>



@property (readonly) CGFloat contentHeight; // ivar: _contentHeight
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SPUINavigationBar *navigationBar;
@property (nonatomic) NSInteger navigationMode; // ivar: _navigationMode
@property (retain) SPUISearchViewController *searchViewController; // ivar: _searchViewController
@property (weak, nonatomic) NSObject<SPUINavigationControllerDelegate> *sizingDelegate; // ivar: _sizingDelegate
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<SPUIUnifiedFieldNavigationDelegate> *unifiedFieldDelegate; // ivar: _unifiedFieldDelegate


-(BOOL)_canShowWhileLocked;
-(CGFloat)heightOfNavigationBar;
-(NSInteger)preferredUserInterfaceStyle;
-(id)init;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)initWithSearchViewController:(id)arg0 ;
-(void)applyCardHeightAnimated:(BOOL)arg0 ;
-(void)cardViewController:(id)arg0 preferredContentSizeDidChange:(struct CGSize )arg1 animated:(BOOL)arg2 ;
-(void)didInvalidateSizeAnimated:(BOOL)arg0 ;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateSearchFieldForViewController:(id)arg0 ;


@end


#endif