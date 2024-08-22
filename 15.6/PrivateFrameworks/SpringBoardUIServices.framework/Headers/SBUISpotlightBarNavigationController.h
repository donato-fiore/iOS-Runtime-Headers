// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBUISPOTLIGHTBARNAVIGATIONCONTROLLER_H
#define SBUISPOTLIGHTBARNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString, _UILegibilitySettings, UIViewController<SBUISearchBarControlling>;
@protocol UINavigationControllerDelegate;


#import "SBSearchBar.h"

@interface SBUISpotlightBarNavigationController : UINavigationController <UINavigationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly) SBSearchBar *navigationBar;
@property (getter=isNavigationBarBottomTrailingCornerRounded) BOOL navigationBarBottomTrailingCornerRounded;
@property (nonatomic, getter=isPullingToSearch) BOOL pullingToSearch; // ivar: _pullingToSearch
@property (retain, nonatomic) UIViewController<SBUISearchBarControlling> *searchBarViewController; // ivar: _searchBarViewController
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(CGFloat)_statusBarHeightAdjustmentForCurrentOrientation;
-(id)initWithRootViewController:(id)arg0 ;
-(id)initWithRootViewController:(id)arg0 searchBarViewController:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif