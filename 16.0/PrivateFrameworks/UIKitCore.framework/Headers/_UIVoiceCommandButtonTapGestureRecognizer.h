// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVOICECOMMANDBUTTONTAPGESTURERECOGNIZER_H
#define _UIVOICECOMMANDBUTTONTAPGESTURERECOGNIZER_H



#import "UITapGestureRecognizer.h"

@interface _UIVoiceCommandButtonTapGestureRecognizer : UITapGestureRecognizer

@property (nonatomic) CGFloat pressEventBeginTimestamp; // ivar: _pressEventBeginTimestamp
@property (nonatomic) CGFloat pressEventEndTimestamp; // ivar: _pressEventEndTimestamp


-(id)voiceCommandButtonTapDuration;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)reset;


@end


#endif