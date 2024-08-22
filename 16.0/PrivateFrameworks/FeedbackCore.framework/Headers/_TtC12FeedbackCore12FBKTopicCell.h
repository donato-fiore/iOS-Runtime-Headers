// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12FEEDBACKCORE12FBKTOPICCELL_H
#define _TTC12FEEDBACKCORE12FBKTOPICCELL_H

@class UITableViewCell, NSString, NSLayoutConstraint;
@protocol FBKDiffableCell;


#import "FBKQuestionCellTextView.h"
#import "FBKBugFormLabel.h"
#import "FBKBugFormStub.h"

@interface _TtC12FeedbackCore12FBKTopicCell : UITableViewCell <FBKDiffableCell>

 {
    ? itemIdentifier;
}


@property (nonatomic) BOOL disclosesMoreForms; // ivar: disclosesMoreForms
@property (nonatomic, weak) FBKQuestionCellTextView *formDescriptions; // ivar: formDescriptions
@property (nonatomic, weak) FBKBugFormLabel *formName; // ivar: formName
@property (nonatomic, retain) FBKBugFormStub *formStub; // ivar: formStub
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, weak) NSLayoutConstraint *topicToBottomOfView; // ivar: topicToBottomOfView


+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif