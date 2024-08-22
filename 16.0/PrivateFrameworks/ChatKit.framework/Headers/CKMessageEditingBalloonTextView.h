// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMESSAGEEDITINGBALLOONTEXTVIEW_H
#define CKMESSAGEEDITINGBALLOONTEXTVIEW_H

@class NSString;
@protocol CKBalloonTextViewProtocol, CKBalloonTextViewInteractionDelegate;


#import "CKMessageEntryTextView.h"

@interface CKMessageEditingBalloonTextView : CKMessageEntryTextView <CKBalloonTextViewProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFakeSelected) BOOL fakeSelected; // ivar: _fakeSelected
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CKBalloonTextViewInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (readonly) Class superclass;


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 isSingleLine:(*BOOL)arg2 isReplyPreview:(BOOL)arg3 ;
-(void)setBalloonTextSelectedRange:(struct _NSRange )arg0 ;


@end


#endif