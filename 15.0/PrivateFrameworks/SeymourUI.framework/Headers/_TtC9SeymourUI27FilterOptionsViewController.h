// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI27FILTEROPTIONSVIEWCONTROLLER_H
#define _TTC9SEYMOURUI27FILTEROPTIONSVIEWCONTROLLER_H

@class UIViewController, UILabel;



@interface _TtC9SeymourUI27FilterOptionsViewController : UIViewController {
    ? visibility;
    ? dataProvider;
    ? dependencies;
    ? eventHub;
    ? storefrontLocalizer;
    ? layout;
    ? titleLabel;
}


@property (nonatomic, readonly) UILabel *subtitleLabel; // ivar: subtitleLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)onCancel;
-(void)onDone;
-(void)textSizeChanged:(id)arg0 ;
-(void)updateTitleView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif