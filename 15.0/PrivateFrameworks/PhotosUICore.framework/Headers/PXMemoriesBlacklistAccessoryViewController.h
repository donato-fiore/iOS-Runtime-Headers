// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMEMORIESBLACKLISTACCESSORYVIEWCONTROLLER_H
#define PXMEMORIESBLACKLISTACCESSORYVIEWCONTROLLER_H

@class UIViewController, UIView, NSArray;


#import "PXMemoriesBlacklistAccessoryViewSpec.h"

@interface PXMemoriesBlacklistAccessoryViewController : UIViewController

@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (copy, nonatomic, setter=_setConstraints:) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) PXMemoriesBlacklistAccessoryViewSpec *viewSpec; // ivar: _viewSpec


-(id)initWithAccessoryView:(id)arg0 viewSpec:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)didReceiveMemoryWarning;
-(void)updateViewConstraints;
-(void)viewDidLoad;


@end


#endif