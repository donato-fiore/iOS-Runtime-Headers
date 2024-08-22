// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSONSCREENCODEWEBSITEWRAPPERVIEW_H
#define VSONSCREENCODEWEBSITEWRAPPERVIEW_H

@class UIButton, UILabel, UIView;
@protocol VSOnscreenCodeViewDelegate;


#import "VSOnscreenCodeWrapperView.h"

@interface VSOnscreenCodeWebsiteWrapperView : VSOnscreenCodeWrapperView

@property (retain, nonatomic) UIButton *buttonLockup; // ivar: _buttonLockup
@property (retain, nonatomic) UILabel *codeLabel; // ivar: _codeLabel
@property (weak, nonatomic) NSObject<VSOnscreenCodeViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIView *detailsContentView; // ivar: _detailsContentView
@property (retain, nonatomic) UIView *detailsView; // ivar: _detailsView
@property (retain, nonatomic) UILabel *enterCodeLabel; // ivar: _enterCodeLabel
@property (retain, nonatomic) UILabel *infoDescriptionLabel; // ivar: _infoDescriptionLabel
@property (retain, nonatomic) UILabel *infoTitleLabel; // ivar: _infoTitleLabel
@property (retain, nonatomic) UIView *infoView; // ivar: _infoView
@property (nonatomic) BOOL showButtonLockup; // ivar: _showButtonLockup
@property (retain, nonatomic) UILabel *urlLabel; // ivar: _urlLabel
@property (retain, nonatomic) UILabel *visitWebsiteLabel; // ivar: _visitWebsiteLabel


-(id)initWithButtonLockup:(BOOL)arg0 ;
-(void)setupDetailsView;
-(void)setupInfoView;
-(void)setupLayout;
-(void)setupLocalizedStrings;
-(void)updateUIWithViewModel:(id)arg0 ;


@end


#endif