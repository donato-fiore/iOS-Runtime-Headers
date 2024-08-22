// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCACTIVITYVIEWCONTROLLER_H
#define DMCACTIVITYVIEWCONTROLLER_H

@class NSString, UIActivityIndicatorView, UILabel;


#import "DMCEnrollmentTemplateTableViewController.h"

@interface DMCActivityViewController : DMCEnrollmentTemplateTableViewController

@property (retain, nonatomic) NSString *activityText; // ivar: _activityText
@property (nonatomic) BOOL showBottomView; // ivar: _showBottomView
@property (retain, nonatomic) UIActivityIndicatorView *spinnerView; // ivar: _spinnerView
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(id)_textFont;
-(id)initWithActivityText:(id)arg0 showBottomView:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif