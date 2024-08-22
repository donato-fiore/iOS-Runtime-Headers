// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKJUNKRECOVERYTRANSCRIPTCELL_H
#define CKJUNKRECOVERYTRANSCRIPTCELL_H

@class NSString, UIButton, UITextView;
@protocol CKTranscriptCollectionViewCellProtocol, UITextViewDelegate, CKJunkRecoveryTranscriptCellDelegate;


#import "CKTranscriptCell.h"

@interface CKJunkRecoveryTranscriptCell : CKTranscriptCell <CKTranscriptCollectionViewCellProtocol, UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKJunkRecoveryTranscriptCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *deleteConversationButton; // ivar: _deleteConversationButton
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextView *recoverConversationTextView; // ivar: _recoverConversationTextView
@property (retain, nonatomic) UIButton *recoverJunkButton; // ivar: _recoverJunkButton
@property (readonly) Class superclass;


+(CGFloat)heightForChatItem:(id)arg0 fittingSize:(struct CGSize )arg1 ;
+(id)_attributedRecoverConversationStringWithDeletionDate:(id)arg0 ;
+(id)generateDeleteConversationButton;
+(id)generateRecoverConversationTextView;
+(id)generateRecoverJunkButton;
+(id)reuseIdentifier;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureRecoverConversationTextView:(id)arg0 ;
-(void)_layoutLabelInAlignmentContentRect:(struct CGRect )arg0 ;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)deleteConversationButtonPressed:(id)arg0 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)prepareForReuse;
-(void)recoverJunkButtonPressed:(id)arg0 ;
-(void)updateRecoverConversationTextViewContentForDate:(id)arg0 ;


@end


#endif