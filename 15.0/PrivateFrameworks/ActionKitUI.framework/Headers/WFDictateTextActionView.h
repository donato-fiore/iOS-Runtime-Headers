// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDICTATETEXTACTIONVIEW_H
#define WFDICTATETEXTACTIONVIEW_H

@class UIView, UITextView;
@protocol WFDictateTextActionViewDelegate;


#import "WFDictateTextActionStopButton.h"

@interface WFDictateTextActionView : UIView

@property (weak, nonatomic) NSObject<WFDictateTextActionViewDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) WFDictateTextActionStopButton *stopButton; // ivar: _stopButton
@property (weak, nonatomic) UITextView *textView; // ivar: _textView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 padded:(BOOL)arg1 ;
-(void)dealloc;
-(void)updateWithTranscription:(id)arg0 ;


@end


#endif