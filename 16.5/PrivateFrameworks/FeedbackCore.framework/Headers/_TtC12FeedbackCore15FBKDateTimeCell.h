// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12FEEDBACKCORE15FBKDATETIMECELL_H
#define _TTC12FEEDBACKCORE15FBKDATETIMECELL_H

@class UITableViewCell, UIDatePicker, NSString, UILabel;
@protocol FBKDiffableCell, FBKBugFormEditorDelegate;


#import "FBKAnswer.h"
#import "FBKQuestion.h"

@interface _TtC12FeedbackCore15FBKDateTimeCell : UITableViewCell <FBKDiffableCell>

 {
    ? itemIdentifier;
}


@property (nonatomic, retain) FBKAnswer *answer; // ivar: answer
@property (nonatomic, weak) UIDatePicker *datePicker; // ivar: datePicker
@property (nonatomic, weak) NSObject<FBKBugFormEditorDelegate> *editorDelegate; // ivar: editorDelegate
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, retain) FBKQuestion *question; // ivar: question
@property (nonatomic, weak) UILabel *questionLabel; // ivar: questionLabel


+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)awakeFromNib;
-(void)dateDidChange:(id)arg0 ;


@end


#endif