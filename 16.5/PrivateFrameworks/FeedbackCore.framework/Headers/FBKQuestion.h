// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKQUESTION_H
#define FBKQUESTION_H

@class NSSet, NSString, NSArray, NSNumber;
@protocol FBKDiffableObject, FBKChoiceSetResolverProtocol;


#import "FBKManagedLocalIDObject.h"
#import "FBKModalConfiguration.h"
#import "FBKQuestionGroup.h"

@interface FBKQuestion : FBKManagedLocalIDObject <FBKDiffableObject>



@property (nonatomic, readonly) FBKModalConfiguration *EnhancedLoggingModalConfiguration;
@property NSUInteger answerType;
@property (retain, nonatomic) NSSet *answers;
@property (readonly) BOOL appearsRequiredIfOptional;
@property (retain) NSString *choiceSetClientSideResolver;
@property (retain, nonatomic) NSObject<FBKChoiceSetResolverProtocol> *choiceSetResolver; // ivar: choiceSetResolver
@property (retain) NSArray *choices;
@property (retain) NSNumber *conditionQuestionID;
@property (retain) id *conditionValue;
@property (getter=isConditional) BOOL conditional;
@property (retain, nonatomic) NSArray *conditions;
@property (nonatomic, readonly) BOOL configuresEnhancedLogging;
@property (retain, nonatomic) NSArray *modalConfigurations;
@property (retain) NSString *placeholder;
@property (retain) NSNumber *primitiveAnswerType;
@property (retain) NSNumber *primitiveConditional;
@property (retain) NSNumber *primitiveRequired;
@property (retain) FBKQuestionGroup *questionGroup;
@property (getter=isRequired) BOOL required;
@property (retain) NSString *resolver;
@property (retain) NSString *role;
@property (retain) NSNumber *sortOrder;
@property (retain) NSString *targetUserAgent;
@property (readonly, nonatomic) NSString *tat;
@property (retain) NSString *text;
@property (retain) NSString *userAgentPopulate;
@property BOOL visible;


+(id)entityName;
+(id)uniquingKey;
-(BOOL)affectsRequirements;
-(BOOL)isAnswerableByAutoFill;
-(BOOL)isMultiSelect;
-(BOOL)shouldHaveChoices;
-(id)allChoices;
-(id)answerToDisplayNameValueTransformer;
-(id)choiceForValue:(id)arg0 ;
-(id)description;
-(id)diffableHashWithContext:(id)arg0 ;
-(id)displayTextForAnswer:(id)arg0 ;
-(id)serverSideChoices;
-(id)titleForValue:(id)arg0 ;
-(void)addAnswer:(id)arg0 ;
-(void)prepareForDeletion;
-(void)setPropertiesFromJSONObject:(id)arg0 ;
-(void)setQuestionChoices:(id)arg0 ;


@end


#endif