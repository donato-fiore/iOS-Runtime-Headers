// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMESSAGEEDITINGBALLOONVIEW_H
#define CKMESSAGEEDITINGBALLOONVIEW_H

@class NSAttributedString, NSString, NSDictionary;
@protocol UITextViewDelegate, CKMessageEditingBalloonViewDelegate;


#import "CKTextBalloonView.h"
#import "CKMessageEditingBalloonTextView.h"

@interface CKMessageEditingBalloonView : CKTextBalloonView <UITextViewDelegate>



@property (readonly, nonatomic) NSAttributedString *currentCompositionText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CKMessageEditingBalloonViewDelegate> *editingBalloonViewDelegate; // ivar: _editingBalloonViewDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKMessageEditingBalloonTextView *messageEditingBalloonTextView; // ivar: _messageEditingBalloonTextView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *typingAttributes; // ivar: _typingAttributes


-(BOOL)hasBackground;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(BOOL)textViewShouldBeginEditing:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)textViewDidChange:(id)arg0 ;


@end


#endif