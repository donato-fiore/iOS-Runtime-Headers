// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC5TEAUI22JSONTEXTVIEWCONTROLLER_H
#define _TTC5TEAUI22JSONTEXTVIEWCONTROLLER_H

@class UIViewController, UIView;



@interface _TtC5TeaUI22JSONTextViewController : UIViewController {
    ? textView;
    ? textParser;
    ? _textSize;
    ? $__lazy_storage_$_searchToolbar;
    ? $__lazy_storage_$_resultsBarButtonItem;
    ? $__lazy_storage_$_nextTokenBarButtonItem;
    ? $__lazy_storage_$_previousTokenBarButtonItem;
}


@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic, readonly) UIView *inputAccessoryView;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)nextToken;
-(void)previousToken;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif