// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12FEEDBACKCORE13FBKSLIDERCELL_H
#define _TTC12FEEDBACKCORE13FBKSLIDERCELL_H

@class UITableViewCell, UILabel, NSString, UISlider;
@protocol FBKDiffableCell, FBKBugFormEditorDelegate;


#import "FBKAnswer.h"
#import "FBKQuestion.h"

@interface _TtC12FeedbackCore13FBKSliderCell : UITableViewCell <FBKDiffableCell>

 {
    ? itemIdentifier;
}


@property (nonatomic, retain) FBKAnswer *answer; // ivar: answer
@property (nonatomic, weak) UILabel *answerLabel; // ivar: answerLabel
@property (nonatomic, weak) NSObject<FBKBugFormEditorDelegate> *editorDelegate; // ivar: editorDelegate
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, retain) FBKQuestion *question; // ivar: question
@property (nonatomic, weak) UILabel *questionLabel; // ivar: questionLabel
@property (nonatomic, weak) UISlider *slider; // ivar: slider


+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)awakeFromNib;
-(void)sliderTouchUpInside:(id)arg0 ;
-(void)sliderValueChanged:(id)arg0 ;
-(void)updateSliderAndLabel;


@end


#endif