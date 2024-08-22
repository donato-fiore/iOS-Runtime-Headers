// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12FEEDBACKCORE31FBKQUESTIONGROUPDIFFABLESECTION_H
#define _TTC12FEEDBACKCORE31FBKQUESTIONGROUPDIFFABLESECTION_H

@class NSArray, NSString;


#import "FBKDiffableSection.h"
#import "FBKQuestionGroup.h"

@interface _TtC12FeedbackCore31FBKQuestionGroupDiffableSection : FBKDiffableSection {
    ? questionIdentifiers;
    ? orderedRowIdentifiers;
}


@property (nonatomic, readonly) FBKQuestionGroup *questionGroup; // ivar: questionGroup
@property (nonatomic, readonly) NSArray *rowIdentifiers;
@property (nonatomic, readonly) NSString *sectionIdentifier;


+(id)identifierForQuestion:(id)arg0 formResponse:(id)arg1 questionIDsInErrorState:(id)arg2 ;
-(id)init;
-(id)initWithQuestionGroup:(id)arg0 visibleQuestions:(id)arg1 formResponse:(id)arg2 questionIDsInErrorState:(id)arg3 ;
-(id)questionWithRowIdentifier:(id)arg0 ;
-(id)visibleQuestions;


@end


#endif