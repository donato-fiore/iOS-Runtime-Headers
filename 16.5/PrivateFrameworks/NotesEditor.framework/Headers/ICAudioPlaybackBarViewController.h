// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICAUDIOPLAYBACKBARVIEWCONTROLLER_H
#define ICAUDIOPLAYBACKBARVIEWCONTROLLER_H

@class ICAttachment, UILabel, ICMediaTimeLabel, ICAudioPlayPauseView, NSLayoutConstraint, UIButton;


#import "ICAudioBarViewController.h"
#import "ICAudioPlaybackScrubberView.h"

@interface ICAudioPlaybackBarViewController : ICAudioBarViewController

@property (retain, nonatomic) ICAttachment *audioAttachment; // ivar: _audioAttachment
@property (retain, nonatomic) UILabel *creationDateLabel; // ivar: _creationDateLabel
@property (retain, nonatomic) ICMediaTimeLabel *leadingTimeLabel; // ivar: _leadingTimeLabel
@property (retain, nonatomic) ICAudioPlayPauseView *playPauseView; // ivar: _playPauseView
@property (retain, nonatomic) NSLayoutConstraint *scrubberLeftConstraint; // ivar: _scrubberLeftConstraint
@property (retain, nonatomic) NSLayoutConstraint *scrubberRightConstraint; // ivar: _scrubberRightConstraint
@property (retain, nonatomic) ICAudioPlaybackScrubberView *scrubberView; // ivar: _scrubberView
@property (retain, nonatomic) UIButton *skipBackwardButton; // ivar: _skipBackwardButton
@property (retain, nonatomic) NSLayoutConstraint *skipBackwardLeftConstraint; // ivar: _skipBackwardLeftConstraint
@property (retain, nonatomic) NSLayoutConstraint *skipBackwardRightConstraint; // ivar: _skipBackwardRightConstraint
@property (retain, nonatomic) UIButton *skipForwardButton; // ivar: _skipForwardButton
@property (retain, nonatomic) NSLayoutConstraint *skipForwardRightConstraint; // ivar: _skipForwardRightConstraint
@property (retain, nonatomic) ICMediaTimeLabel *trailingTimeLabel; // ivar: _trailingTimeLabel
@property (retain, nonatomic) NSLayoutConstraint *trailingTimeWidthConstraint; // ivar: _trailingTimeWidthConstraint


-(BOOL)isRegularHorizontalLayout;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)attachmentWillBeDeletedNotification:(id)arg0 ;
-(void)audioPlaybackTimeChangedNotification:(id)arg0 ;
-(void)dealloc;
-(void)done:(id)arg0 ;
-(void)noteWillBeDeletedNotification:(id)arg0 ;
-(void)refreshTime:(id)arg0 ;
-(void)registerForNotifications;
-(void)scrubberValueChangedAction:(id)arg0 ;
-(void)skipBackward:(id)arg0 ;
-(void)skipForward:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateLayout;
-(void)updateMediaTimeAccessibilityLabels;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif