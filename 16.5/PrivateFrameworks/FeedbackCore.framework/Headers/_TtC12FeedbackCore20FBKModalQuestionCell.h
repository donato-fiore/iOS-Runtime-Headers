// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12FEEDBACKCORE20FBKMODALQUESTIONCELL_H
#define _TTC12FEEDBACKCORE20FBKMODALQUESTIONCELL_H

@class UITableViewCell, NSString;
@protocol FBKDiffableCell;


#import "FBKQuestion.h"

@interface _TtC12FeedbackCore20FBKModalQuestionCell : UITableViewCell <FBKDiffableCell>

 {
    ? itemIdentifier;
}


@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, retain) FBKQuestion *question; // ivar: question


+(id)reuseIdentifier;
+(void)setReuseIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif