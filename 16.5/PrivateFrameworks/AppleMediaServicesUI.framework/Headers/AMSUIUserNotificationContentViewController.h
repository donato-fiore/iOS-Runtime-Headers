// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIUSERNOTIFICATIONCONTENTVIEWCONTROLLER_H
#define AMSUIUSERNOTIFICATIONCONTENTVIEWCONTROLLER_H

@class UIViewController, NSString, UIImageView, AMSMetrics, UILabel, AMSUserNotification, AVPlayerViewController;
@protocol UIGestureRecognizerDelegate, AMSUIUserNotificationContentDelegate;



@interface AMSUIUserNotificationContentViewController : UIViewController <UIGestureRecognizerDelegate>



@property (retain, nonatomic) NSString *audioSessionCategory; // ivar: _audioSessionCategory
@property (nonatomic) NSUInteger audioSessionCategoryOptions; // ivar: _audioSessionCategoryOptions
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSUIUserNotificationContentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize expectedContentSize;
@property (nonatomic) BOOL hasAppeared; // ivar: _hasAppeared
@property (nonatomic) BOOL hasPlayedVideo; // ivar: _hasPlayedVideo
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) AMSMetrics *metrics; // ivar: _metrics
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) AMSUserNotification *userNotification; // ivar: _userNotification
@property (readonly, nonatomic) AVPlayerViewController *videoPlayerController; // ivar: _videoPlayerController


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)initWithNotification:(id)arg0 delegate:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)mediaPause;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)viewTapped:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif