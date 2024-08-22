// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSCRIPTGROUPHEADERVIEW_H
#define CKTRANSCRIPTGROUPHEADERVIEW_H

@class UIView, UIButton, _UIBackdropView, CNComposeRecipientTextView;


#import "CKConversation.h"

@interface CKTranscriptGroupHeaderView : UIView

@property (retain, nonatomic) UIButton *actionButton; // ivar: _actionButton
@property (retain, nonatomic) _UIBackdropView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (retain, nonatomic) UIView *separator; // ivar: _separator
@property (retain, nonatomic) CNComposeRecipientTextView *textView; // ivar: _textView


-(id)initWithFrame:(struct CGRect )arg0 conversation:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif