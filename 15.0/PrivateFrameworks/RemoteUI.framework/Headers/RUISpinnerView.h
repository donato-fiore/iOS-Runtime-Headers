// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RUISPINNERVIEW_H
#define RUISPINNERVIEW_H

@class UIView, UIActivityIndicatorView, UILabel, UIColor;


#import "RUIElement.h"
#import "RUIHeaderView.h"
#import "RemoteUISectionFooter.h"
#import "RUIFooterElement.h"
#import "RUIHeaderElement.h"
#import "RUIObjectModel.h"

@interface RUISpinnerView : RUIElement {
    UIView *_view;
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
    RUIHeaderView *_headerView;
    RemoteUISectionFooter *_footerView;
}


@property (retain, nonatomic) RUIFooterElement *footer; // ivar: _footer
@property (retain, nonatomic) RUIHeaderElement *header; // ivar: _header
@property (weak, nonatomic) RUIObjectModel *objectModel; // ivar: _objectModel
@property (retain, nonatomic) UIColor *spinnerColor; // ivar: _spinnerColor


-(id)spinnerView;
-(void)viewDidLayout;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif