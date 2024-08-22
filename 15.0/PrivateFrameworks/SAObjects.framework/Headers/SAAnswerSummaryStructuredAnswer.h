// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAANSWERSUMMARYSTRUCTUREDANSWER_H
#define SAANSWERSUMMARYSTRUCTUREDANSWER_H

@class NSArray, NSString, NSURL;
@protocol SAAnswerStructuredAnswer;


#import "AceObject.h"

@interface SAAnswerSummaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer>



@property (copy, nonatomic) NSArray *answerPropertyGroups;
@property (copy, nonatomic) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *image;
@property (copy, nonatomic) NSString *imageCaption;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleAnnotation;


+(id)summaryStructuredAnswer;
+(id)summaryStructuredAnswerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif