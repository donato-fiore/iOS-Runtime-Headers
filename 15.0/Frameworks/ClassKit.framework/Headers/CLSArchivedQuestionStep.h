// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSARCHIVEDQUESTIONSTEP_H
#define CLSARCHIVEDQUESTIONSTEP_H

@class NSString;
@protocol CLSRelationable;


#import "CLSArchivedSurveyStep.h"
#import "CLSArchivedAnswerFormat.h"

@interface CLSArchivedQuestionStep : CLSArchivedSurveyStep <CLSRelationable>

 {
    NSString *_questionText;
    NSInteger _displayOrder;
    NSInteger _questionType;
}


@property (retain, nonatomic) CLSArchivedAnswerFormat *archivedAnswerFormat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayOrder;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *questionText;
@property (readonly, nonatomic) NSInteger questionType;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuestionText:(id)arg0 answerFormat:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif