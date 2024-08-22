// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMESSAGEEDITINGVIEW_H
#define CKMESSAGEEDITINGVIEW_H

@class UIView, UIButton, NSString;
@protocol CKMessageEditingBalloonViewDelegate, CKMessageEditingViewDelegate;


#import "CKComposition.h"
#import "CKMessageEditingBalloonView.h"

@interface CKMessageEditingView : UIView <CKMessageEditingBalloonViewDelegate>



@property (readonly, nonatomic) UIView *balloonViewForAlignment;
@property (retain, nonatomic) UIButton *confirmButton; // ivar: _confirmButton
@property (readonly, nonatomic) CKComposition *currentComposition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKMessageEditingBalloonView *messageEditingBalloonView; // ivar: _messageEditingBalloonView
@property (weak, nonatomic) NSObject<CKMessageEditingViewDelegate> *messageEditingViewDelegate; // ivar: _messageEditingViewDelegate
@property (nonatomic) NSInteger messageEditingViewState; // ivar: _messageEditingViewState
@property (retain, nonatomic) CKComposition *originalComposition; // ivar: _originalComposition
@property (retain, nonatomic) UIButton *rejectButton; // ivar: _rejectButton
@property (readonly) Class superclass;


-(BOOL)becomeFirstResponder;
-(id)init;
-(id)keyCommands;
-(id)styledAttributedStringFromString:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_confirmButtonSelected:(id)arg0 ;
-(void)_rejectButtonSelected:(id)arg0 ;
-(void)_updateTextFieldWithOriginalComposition;
-(void)layoutSubviews;
-(void)messageEditingBalloonViewContentDidChange:(id)arg0 ;
-(void)resetMessageToOriginalContent;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif