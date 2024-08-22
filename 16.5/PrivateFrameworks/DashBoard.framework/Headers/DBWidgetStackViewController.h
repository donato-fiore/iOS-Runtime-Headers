// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBWIDGETSTACKVIEWCONTROLLER_H
#define DBWIDGETSTACKVIEWCONTROLLER_H

@class UIViewController, NSArray;



@interface DBWidgetStackViewController : UIViewController

@property (retain, nonatomic) NSArray *currentConstraints; // ivar: _currentConstraints
@property (readonly, nonatomic) NSUInteger visibleCount;
@property (retain, nonatomic) NSArray *widgetViewControllers; // ivar: _widgetViewControllers


-(id)linearFocusItems;
-(void)_reloadConstraints;
-(void)_setAnchorPoint:(struct CGPoint )arg0 forView:(id)arg1 ;
// -(void)animateUpdateForWidgetViewController:(id)arg0 updateBlock:(id)arg1 completion:(unk)arg2  ;
// -(void)animateWithUpdates:(id)arg0 completion:(unk)arg1  ;
-(void)viewDidLoad;


@end


#endif