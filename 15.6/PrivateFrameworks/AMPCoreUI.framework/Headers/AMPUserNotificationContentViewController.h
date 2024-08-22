// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMPUSERNOTIFICATIONCONTENTVIEWCONTROLLER_H
#define AMPUSERNOTIFICATIONCONTENTVIEWCONTROLLER_H

@class UIViewController, NSString, UIImageView, AMSMetrics, UILabel, AMSUserNotification, AVPlayerViewController;
@protocol AMPUserNotificationContentDelegate;



@interface AMPUserNotificationContentViewController : UIViewController

@property (retain, nonatomic) NSString *audioSessionCategory; // ivar: _audioSessionCategory
@property (nonatomic) NSUInteger audioSessionCategoryOptions; // ivar: _audioSessionCategoryOptions
@property (weak, nonatomic) NSObject<AMPUserNotificationContentDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGSize expectedContentSize;
@property (nonatomic) BOOL hasAppeared; // ivar: _hasAppeared
@property (nonatomic) BOOL hasPlayedVideo; // ivar: _hasPlayedVideo
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) AMSMetrics *metrics; // ivar: _metrics
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) AMSUserNotification *userNotification; // ivar: _userNotification
@property (readonly, nonatomic) AVPlayerViewController *videoPlayerController; // ivar: _videoPlayerController


-(id)initWithNotification:(id)arg0 delegate:(id)arg1 ;
-(void)imageViewTapped:(id)arg0 ;
-(void)loadView;
-(void)mediaPause;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif