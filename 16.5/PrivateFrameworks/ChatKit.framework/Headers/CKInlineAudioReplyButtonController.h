// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKINLINEAUDIOREPLYBUTTONCONTROLLER_H
#define CKINLINEAUDIOREPLYBUTTONCONTROLLER_H

@class UIButton;
@protocol CKInlineAudioReplyButtonDelegate;

#import <Foundation/Foundation.h>


@interface CKInlineAudioReplyButtonController : NSObject

@property (weak, nonatomic) NSObject<CKInlineAudioReplyButtonDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat holdThreshold; // ivar: _holdThreshold
@property (retain, nonatomic) UIButton *startButton; // ivar: _startButton
@property (nonatomic, getter=isStarted) BOOL started; // ivar: _started
@property (retain, nonatomic) UIButton *stopButton; // ivar: _stopButton
@property (nonatomic) CGFloat touchDownTime; // ivar: _touchDownTime


-(id)initWithStartButton:(id)arg0 stopButton:(id)arg1 ;
-(void)dealloc;
-(void)touchDownInStartButton:(id)arg0 event:(id)arg1 ;
-(void)touchDragEnter:(id)arg0 ;
-(void)touchDragExit:(id)arg0 ;
-(void)touchUpInStartButton:(id)arg0 event:(id)arg1 ;
-(void)touchUpInStopButton:(id)arg0 ;
-(void)touchUpOutsideStartButton:(id)arg0 event:(id)arg1 ;


@end


#endif