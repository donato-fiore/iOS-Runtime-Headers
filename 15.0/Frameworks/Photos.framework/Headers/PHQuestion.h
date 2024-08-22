// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHQUESTION_H
#define PHQUESTION_H

@class NSDictionary, NSDate, NSString;


#import "PHObject.h"

@interface PHQuestion : PHObject

@property (readonly, nonatomic) NSDictionary *additionalInfo; // ivar: _additionalInfo
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) unsigned short displayType; // ivar: _displayType
@property (readonly, nonatomic) NSString *entityIdentifier; // ivar: _entityIdentifier
@property (readonly, nonatomic) unsigned short entityType; // ivar: _entityType
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) unsigned short state; // ivar: _state
@property (readonly, nonatomic) unsigned short type; // ivar: _type


+(id)entityKeyMap;
+(id)fetchAnsweredQuestionsWithOptions:(id)arg0 validQuestionsOnly:(BOOL)arg1 ;
+(id)fetchAnsweredYesOrNoQuestionsWithOptions:(id)arg0 validQuestionsOnly:(BOOL)arg1 ;
+(id)fetchInvalidatedQuestionsWithOptions:(id)arg0 ;
+(id)fetchQuestionsWithLocalIdentifiers:(id)arg0 options:(id)arg1 validQuestionsOnly:(BOOL)arg2 ;
+(id)fetchQuestionsWithOptions:(id)arg0 validQuestionsOnly:(BOOL)arg1 ;
+(id)fetchType;
+(id)fetchUnansweredQuestionsWithOptions:(id)arg0 validQuestionsOnly:(BOOL)arg1 ;
+(id)identifierCode;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)questionsWithValidEntitiesFromQuestions:(id)arg0 photoLibrary:(id)arg1 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
-(Class)changeRequestClass;
-(id)description;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;


@end


#endif