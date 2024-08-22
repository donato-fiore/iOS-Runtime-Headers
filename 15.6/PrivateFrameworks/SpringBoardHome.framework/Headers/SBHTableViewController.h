// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHTABLEVIEWCONTROLLER_H
#define SBHTABLEVIEWCONTROLLER_H

@class UITableViewController, NSArray, UIView;



@interface SBHTableViewController : UITableViewController {
    NSInteger _styleBeforeShowingNoResults;
    NSArray *_centerNoResultsViewConstraints;
    CGRect _rawKeyboardFrame;
}


@property (readonly, nonatomic) CGRect keyboardFrame;
@property (retain, nonatomic) UIView *noResultsView; // ivar: _noResultsView
@property (nonatomic) BOOL showNoResultsView; // ivar: _showNoResultsView


+(Class)tableViewClass;
-(CGFloat)headerTopOccludingInset;
-(void)_addAutoLayoutConstraintsForNoResultsView;
-(void)_keyboardWillDismiss:(id)arg0 ;
-(void)_keyboardWillResize:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_reloadNoResultsViewForKeyboardNotification:(id)arg0 ;
-(void)_removeAutoLayoutConstraintsForNoResultsView;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif