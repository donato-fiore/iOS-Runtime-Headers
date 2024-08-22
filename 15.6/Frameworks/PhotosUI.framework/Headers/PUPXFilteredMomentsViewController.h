// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPXFILTEREDMOMENTSVIEWCONTROLLER_H
#define PUPXFILTEREDMOMENTSVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PXChangeObserver, PXGridPresentationBarsUpdateDelegate;


#import "PUFilteredMomentsViewController.h"

@interface PUPXFilteredMomentsViewController : PUFilteredMomentsViewController <PXChangeObserver>



@property (weak, nonatomic) NSObject<PXGridPresentationBarsUpdateDelegate> *barsUpdateDelegate; // ivar: _barsUpdateDelegate
@property (weak, nonatomic) UIViewController *containerViewController; // ivar: _containerViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isInPlaces:(id)arg0 ;
-(id)oneUpPresentationHelperViewController:(id)arg0 ;
-(void)getEmptyPlaceholderViewTitle:(*id)arg0 message:(*id)arg1 buttonTitle:(*id)arg2 buttonAction:(*id)arg3 ;
-(void)loadView;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings )arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateNavigationBarAnimated:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif