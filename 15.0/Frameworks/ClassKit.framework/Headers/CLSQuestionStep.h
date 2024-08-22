// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSQUESTIONSTEP_H
#define CLSQUESTIONSTEP_H

@class NSString;
@protocol CLSRelationable;


#import "CLSSurveyStep.h"
#import "CLSAnswerFormat.h"

@interface CLSQuestionStep : CLSSurveyStep <CLSRelationable>

 {
    NSString *_questionText;
    NSInteger _displayOrder;
    NSInteger _questionType;
}


@property (retain, nonatomic) CLSAnswerFormat *answerFormat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayOrder;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *questionText;
@property (nonatomic) NSInteger questionType;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateObject:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuestionText:(id)arg0 answerFormat:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif