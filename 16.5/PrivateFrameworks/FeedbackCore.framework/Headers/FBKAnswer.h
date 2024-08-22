// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKANSWER_H
#define FBKANSWER_H

@class NSNumber, NSArray;


#import "FBKManagedFeedbackObject.h"
#import "FBKFormResponse.h"
#import "FBKQuestion.h"

@interface FBKAnswer : FBKManagedFeedbackObject

@property (retain, nonatomic) FBKFormResponse *formResponse;
@property (readonly, nonatomic) BOOL isAnswered; // ivar: _isAnswered
@property (getter=isOptedOut) BOOL optedOut;
@property (retain) NSNumber *primitiveOptedOut;
@property (retain, nonatomic) FBKQuestion *question;
@property (retain, nonatomic) NSNumber *questionID;
@property (nonatomic) BOOL resolved;
@property (retain, nonatomic) id *value;
@property (copy, nonatomic) NSArray *values;


+(NSUInteger)answerTypeFromString:(id)arg0 ;
+(id)_importByQuestionIDFromJSONArray:(id)arg0 withFormResponseID:(id)arg1 intoContext:(id)arg2 ;
+(id)emptyLocalAnswerForQuestion:(id)arg0 inFormResponse:(id)arg1 ;
+(id)entityName;
+(id)keyPathsForValuesAffectingValue;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif