// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AIAUDIOGRAMLOADINGVIEWCONTROLLER_H
#define AIAUDIOGRAMLOADINGVIEWCONTROLLER_H

@class OBWelcomeController, UIActivityIndicatorView, UILabel, UIProgressView;



@interface AIAudiogramLoadingViewController : OBWelcomeController

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (nonatomic) float progress; // ivar: _progress
@property (retain, nonatomic) UILabel *progressLabel; // ivar: _progressLabel
@property (retain, nonatomic) UIProgressView *progressView; // ivar: _progressView
@property (nonatomic) NSInteger style; // ivar: _style


-(id)initWithTitle:(id)arg0 style:(NSInteger)arg1 ;
-(void)showLoadingMessage:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif