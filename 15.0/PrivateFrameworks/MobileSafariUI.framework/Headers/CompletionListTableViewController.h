// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMPLETIONLISTTABLEVIEWCONTROLLER_H
#define COMPLETIONLISTTABLEVIEWCONTROLLER_H

@class SFPopoverSizingTableViewController, _UIVisualEffectBackdropView, UIView, UITableViewHeaderFooterView;



@interface CompletionListTableViewController : SFPopoverSizingTableViewController {
    _UIVisualEffectBackdropView *_headerBackdropCaptureView;
    CGFloat _keyboardBottomInset;
}


@property (readonly, nonatomic) UIView *defaultHeaderFooterBackgroundView;
@property (readonly, nonatomic) UITableViewHeaderFooterView *defaultHeaderFooterView;


+(id)tableViewCellForSizeEstimation;
-(NSInteger)maximumNumberOfRows;
-(NSInteger)minimumNumberOfRows;
-(void)keyboardDidChangeFrame:(id)arg0 ;
-(void)updateKeyboardBottomInsetFromKeyboardFrame:(struct CGRect )arg0 ;
-(void)viewDidLoad;
-(void)viewIsAppearing:(BOOL)arg0 ;


@end


#endif