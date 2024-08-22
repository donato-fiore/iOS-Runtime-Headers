// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMECARDSHARINGAVATARVIEWCONTROLLER_H
#define CNMECARDSHARINGAVATARVIEWCONTROLLER_H

@class UIViewController, UILabel, UIView, CAShapeLayer, UIImageView, UITapGestureRecognizer;
@protocol CNMeCardSharingAvatarProvider, CNMeCardSharingAvatarViewControllerDelegate, CNAvatarImageProvider;


#import "CNAvatarViewController.h"

@interface CNMeCardSharingAvatarViewController : UIViewController

@property (retain, nonatomic) UILabel *addPhotoLabel; // ivar: _addPhotoLabel
@property (retain, nonatomic) UIView *avatarContainerView; // ivar: _avatarContainerView
@property (retain, nonatomic) NSObject<CNMeCardSharingAvatarProvider> *avatarProvider; // ivar: _avatarProvider
@property (retain, nonatomic) CNAvatarViewController *avatarViewController; // ivar: _avatarViewController
@property (retain, nonatomic) CAShapeLayer *circularLayer; // ivar: _circularLayer
@property (weak, nonatomic) NSObject<CNMeCardSharingAvatarViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<CNAvatarImageProvider> *fallbackImageProvider; // ivar: _fallbackImageProvider
@property (nonatomic) BOOL hasImage; // ivar: _hasImage
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(id)initWithAvatarProvider:(id)arg0 ;
-(void)didTapAvatarView:(id)arg0 ;
-(void)loadView;
-(void)reload;
-(void)updateForChangedImageAnimated:(BOOL)arg0 ;
-(void)updateWithAvatarProvider:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif