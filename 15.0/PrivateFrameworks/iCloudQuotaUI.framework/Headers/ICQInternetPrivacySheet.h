// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQINTERNETPRIVACYSHEET_H
#define ICQINTERNETPRIVACYSHEET_H

@class UIViewController, UILabel, NSString, UIImageView, UIScrollView, UIStackView;


#import "ICQInternetPrivacyViewModel.h"

@interface ICQInternetPrivacySheet : UIViewController

@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (copy, nonatomic) NSString *bodyText; // ivar: _bodyText
@property (copy, nonatomic) NSString *headerText; // ivar: _headerText
@property (retain, nonatomic) UILabel *heaerLabel; // ivar: _heaerLabel
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (weak, nonatomic) ICQInternetPrivacyViewModel *viewModel; // ivar: _viewModel


-(BOOL)_deviceIsiPad;
-(id)createTextViewWithText:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 viewModel:(id)arg1 ;
-(void)addBodyText;
-(void)addHeaderIcon;
-(void)addHeaderText;
-(void)doneButtonTapped:(id)arg0 ;
-(void)setTextForIdentifier:(id)arg0 ;
-(void)setupScrollView;
-(void)setupStack;
-(void)setupUI;
-(void)viewDidLoad;


@end


#endif