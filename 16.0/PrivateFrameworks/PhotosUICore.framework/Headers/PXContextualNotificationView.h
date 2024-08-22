// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCONTEXTUALNOTIFICATIONVIEW_H
#define PXCONTEXTUALNOTIFICATIONVIEW_H

@class UIView, AVPlayerItem, NSArray, NSString, UIImageView, AVAsset, AVVideoComposition, NSLayoutConstraint, UILabel, UIImage;
@protocol PXChangeObserver;


#import "PXCapsuleButton.h"
#import "PXContextualNotificationChevronView.h"
#import "PXContextualNotification.h"
#import "PXImageRequester.h"
#import "PXVideoPlayerView.h"

@interface PXContextualNotificationView : UIView <PXChangeObserver>



@property (retain, nonatomic, setter=_setLoopingPlayerItem:) AVPlayerItem *_loopingPlayerItem; // ivar: __loopingPlayerItem
@property (nonatomic, setter=_setMediaAspectRatio:) CGFloat _mediaAspectRatio; // ivar: __mediaAspectRatio
@property (retain, nonatomic) PXCapsuleButton *actionButton; // ivar: _actionButton
@property (retain, nonatomic) PXContextualNotificationChevronView *chevronView; // ivar: _chevronView
@property (copy, nonatomic) NSArray *constraints; // ivar: _constraints
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) PXContextualNotification *contextualNotification; // ivar: _contextualNotification
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIImageView *dismissIconView; // ivar: _dismissIconView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXImageRequester *imageRequester; // ivar: _imageRequester
@property (copy, nonatomic) AVAsset *loopingVideoAsset; // ivar: _loopingVideoAsset
@property (copy, nonatomic) AVVideoComposition *loopingVideoComposition; // ivar: _loopingVideoComposition
@property (readonly, nonatomic) PXVideoPlayerView *mediaView; // ivar: _mediaView
@property (readonly, nonatomic) NSLayoutConstraint *mediaViewHeightConstraint; // ivar: _mediaViewHeightConstraint
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIImage *titleIcon; // ivar: _titleIcon
@property (readonly, nonatomic) UIImageView *titleIconView; // ivar: _titleIconView
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) BOOL useRegularHitTesting; // ivar: _useRegularHitTesting


-(BOOL)isPointInsideDismissArea:(struct CGPoint )arg0 ;
-(BOOL)isPointInsidePassthroughArea:(struct CGPoint )arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)_handleActionButton:(id)arg0 ;
-(void)_handleDidSetVideoAudioSession;
-(void)_preferredContentSizeChanged:(id)arg0 ;
-(void)_startLoopingWithItem:(id)arg0 ;
-(void)_updateLoopingPlayerItem;
-(void)_updateMessageLabelForCMMCard;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)updateConstraints;


@end


#endif