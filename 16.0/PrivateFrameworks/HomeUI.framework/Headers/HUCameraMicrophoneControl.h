// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCAMERAMICROPHONECONTROL_H
#define HUCAMERAMICROPHONECONTROL_H

@class UIControl, UIButton;


#import "HUIconView.h"

@interface HUCameraMicrophoneControl : UIControl

@property (retain, nonatomic) UIButton *doneButton; // ivar: _doneButton
@property (retain, nonatomic) HUIconView *doneButtonIconView; // ivar: _doneButtonIconView
@property (retain, nonatomic) UIButton *talkButton; // ivar: _talkButton
@property (nonatomic, getter=isTalking) BOOL talking; // ivar: _talking


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;


@end


#endif