// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMSHAREORIENTATIONSELECTIONVIEWCONTROLLER_H
#define PMSHAREORIENTATIONSELECTIONVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint;


#import "PMActivityItemProvider.h"
#import "PMPosterViewController.h"

@interface PMShareOrientationSelectionViewController : UIViewController

@property (retain, nonatomic) NSLayoutConstraint *aspectRatioConstraint; // ivar: _aspectRatioConstraint
@property (nonatomic) CGFloat exportAspect; // ivar: _exportAspect
@property (weak, nonatomic) PMActivityItemProvider *itemProvider; // ivar: _itemProvider
@property (retain, nonatomic) PMPosterViewController *posterViewController; // ivar: _posterViewController


-(CGFloat)upScalingFactor;
-(id)init;
-(void)_updateSharingHeaderIcons;
-(void)createConstraints;
-(void)viewDidLoad;


@end


#endif