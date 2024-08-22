// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKQUESTIONANSWERCELL_H
#define FBKQUESTIONANSWERCELL_H

@class UITableViewCell, NSString, UIImageView, UILabel;
@protocol FBKDiffableCell, FBKBugFormEditorDelegate;


#import "FBKAnswer.h"
#import "FBKQuestionCellTextView.h"
#import "FBKQuestion.h"

@interface FBKQuestionAnswerCell : UITableViewCell <FBKDiffableCell>



@property (retain, nonatomic) FBKAnswer *answer; // ivar: _answer
@property (weak, nonatomic) FBKQuestionCellTextView *answerTextView; // ivar: _answerTextView
@property (weak, nonatomic) NSObject<FBKBugFormEditorDelegate> *bugFormEditorDelegate; // ivar: _bugFormEditorDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *diffableIdentifier; // ivar: _diffableIdentifier
@property (retain, nonatomic) UIImageView *errorArrow; // ivar: _errorArrow
@property (nonatomic) BOOL hasKeyboardFocus; // ivar: _hasKeyboardFocus
@property (nonatomic) BOOL hasPlaceholder; // ivar: _hasPlaceholder
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *itemIdentifier; // ivar: itemIdentifier
@property (retain, nonatomic) FBKQuestion *question; // ivar: _question
@property (weak, nonatomic) UILabel *questionLabel; // ivar: _questionLabel
@property (nonatomic) BOOL showError; // ivar: _showError
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(BOOL)shouldAllowEditing;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityHint;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)awakeFromNib;
-(void)beginEditingQuestion;
-(void)commonInit;
-(void)endEditingQuestion;
-(void)hideAccessoryView;
-(void)hideErrorArrow;
-(void)sanitizeAnswer:(id)arg0 ;
-(void)saveAnswer;
-(void)showAccessoryView;
-(void)updateErrorArrow;


@end


#endif