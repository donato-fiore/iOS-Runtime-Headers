// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISANIMATEDIMAGEVIEW_H
#define ISANIMATEDIMAGEVIEW_H

@class UIView, NSString, PFAnimatedImage, UIImageView;
@protocol ISAnimatedImagePlayerDestination;


#import "ISAnimatedImagePlayer.h"

@interface ISAnimatedImageView : UIView <ISAnimatedImagePlayerDestination>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger displayedFrameIndex;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PFAnimatedImage *image;
@property (nonatomic) UIImageView *placeholderImageView; // ivar: _placeholderImageView
@property (retain, nonatomic) ISAnimatedImagePlayer *player; // ivar: _player
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (readonly) Class superclass;


-(BOOL)isReadyToDisplay;
-(id)initWithAnimatedImage:(id)arg0 ;
-(id)initWithAnimatedImagePlayer:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)didBeginAnimating;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)displayLayer:(id)arg0 ;
-(void)frameDidChange;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif