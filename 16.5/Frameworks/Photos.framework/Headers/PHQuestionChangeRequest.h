// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHQUESTIONCHANGEREQUEST_H
#define PHQUESTIONCHANGEREQUEST_H

@class NSDictionary, NSString, NSDate, NSManagedObjectID;
@protocol PHInsertChangeRequest, PHUpdateChangeRequest;


#import "PHChangeRequest.h"
#import "PHObjectPlaceholder.h"

@interface PHQuestionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>



@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (copy, nonatomic) NSDictionary *additionalInfo;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (copy, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short displayType;
@property (copy, nonatomic) NSString *entityIdentifier;
@property (nonatomic) unsigned short entityType;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isNewRequest;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedQuestion;
@property (nonatomic) short questionVersion;
@property (nonatomic) CGFloat score;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (nonatomic) unsigned short state;
@property (readonly) Class superclass;
@property (nonatomic) unsigned short type;


+(id)changeRequestForQuestion:(id)arg0 ;
+(id)creationRequestForQuestionWithEntityIdentifier:(id)arg0 type:(unsigned short)arg1 state:(unsigned short)arg2 entityType:(unsigned short)arg3 displayType:(unsigned short)arg4 score:(CGFloat)arg5 additionalInfo:(id)arg6 creationDate:(id)arg7 questionVersion:(short)arg8 ;
+(void)deleteQuestions:(id)arg0 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg0 ;


@end


#endif