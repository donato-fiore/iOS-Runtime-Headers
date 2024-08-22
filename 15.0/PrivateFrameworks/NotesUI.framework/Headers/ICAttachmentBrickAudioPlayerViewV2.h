// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICATTACHMENTBRICKAUDIOPLAYERVIEWV2_H
#define ICATTACHMENTBRICKAUDIOPLAYERVIEWV2_H

@protocol ICAttachmentBrickAudioPlayerViewV2Delegate;


#import "ICAudioPlayPauseView.h"
#import "ICArcLayer.h"
#import "ICCircleLayer.h"

@interface ICAttachmentBrickAudioPlayerViewV2 : ICAudioPlayPauseView

@property (nonatomic) NSObject<ICAttachmentBrickAudioPlayerViewV2Delegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) ICArcLayer *progressCircleLayer; // ivar: _progressCircleLayer
@property (retain, nonatomic) ICCircleLayer *progressGrooveLayer; // ivar: _progressGrooveLayer


-(id)addSubImageViewForImage:(id)arg0 ;
-(id)backgroundNormalColor;
-(id)backgroundPressedColor;
-(id)tintColor;
-(struct CGSize )intrinsicContentSize;
-(void)createBackgroundLayer;
-(void)createPlayPauseViews;
-(void)createProgressLayers;
-(void)didMoveToWindow;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)sharedInit;
-(void)showDisabled:(BOOL)arg0 ;
-(void)showPressed:(BOOL)arg0 ;
-(void)showStopped;
-(void)updateTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;


@end


#endif