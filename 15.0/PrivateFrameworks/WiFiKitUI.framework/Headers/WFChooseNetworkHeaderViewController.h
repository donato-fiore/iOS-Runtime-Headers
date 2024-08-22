// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCHOOSENETWORKHEADERVIEWCONTROLLER_H
#define WFCHOOSENETWORKHEADERVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, UILabel, NSString;



@interface WFChooseNetworkHeaderViewController : UIViewController

@property (weak, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (nonatomic) BOOL animating; // ivar: _animating
@property (weak, nonatomic) UILabel *label; // ivar: _label
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif