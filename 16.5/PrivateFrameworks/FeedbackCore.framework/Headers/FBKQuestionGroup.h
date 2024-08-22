// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKQUESTIONGROUP_H
#define FBKQUESTIONGROUP_H

@class NSOrderedSet, NSArray, NSNumber, NSString;


#import "FBKManagedFeedbackObject.h"
#import "FBKBugForm.h"

@interface FBKQuestionGroup : FBKManagedFeedbackObject

@property (retain, nonatomic) FBKBugForm *bugForm;
@property (retain, nonatomic) NSOrderedSet *primitiveQuestions;
@property (retain, nonatomic) NSArray *questions;
@property (retain, nonatomic) NSNumber *sortOrder;
@property (retain, nonatomic) NSString *title;


+(id)entityName;
+(id)uniquingKey;
-(BOOL)isFileCollectionGroup;
-(id)description;
-(id)questionWithRole:(id)arg0 ;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif