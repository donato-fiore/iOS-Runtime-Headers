// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHSUGGESTIONCHANGEREQUEST_H
#define PHSUGGESTIONCHANGEREQUEST_H

@class NSString, NSManagedObjectID;
@protocol PHInsertChangeRequest, PHUpdateChangeRequest;


#import "PHChangeRequest.h"
#import "PHRelationshipChangeRequestHelper.h"
#import "PHObjectPlaceholder.h"

@interface PHSuggestionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>



@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short featuredState;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isNewRequest;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *keyAssetsHelper; // ivar: _keyAssetsHelper
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, getter=isMutated) BOOL mutated;
@property (nonatomic) unsigned short notificationState;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedSuggestion;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *representativeAssetsHelper; // ivar: _representativeAssetsHelper
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title;


+(id)changeRequestForSuggestion:(id)arg0 ;
+(id)creationRequestForSuggestion;
+(id)creationRequestForSuggestionWithType:(unsigned short)arg0 subtype:(unsigned short)arg1 keyAssets:(id)arg2 representativeAssets:(id)arg3 creationDate:(id)arg4 relevantUntilDate:(id)arg5 version:(NSInteger)arg6 ;
+(void)deleteSuggestions:(id)arg0 ;
-(BOOL)allowMutationToManagedObject:(id)arg0 propertyKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateMutationsToManagedObject:(id)arg0 error:(*id)arg1 ;
-(NSInteger)version;
-(id)actionData;
-(id)activationDate;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)creationDate;
-(id)endDate;
-(id)expungeDate;
-(id)featuresData;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(id)relevantUntilDate;
-(id)startDate;
-(id)validateMutationsToManagedObject:(id)arg0 ;
-(unsigned short)state;
-(unsigned short)subtype;
-(unsigned short)type;
-(void)_calculateAndSetExpungeDate;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)markAccepted;
-(void)markActive;
-(void)markDeclined;
-(void)markReactivated;
-(void)markRetired;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg0 ;
-(void)setActionData:(id)arg0 ;
-(void)setActionProperties:(id)arg0 ;
-(void)setActivationDate:(id)arg0 ;
-(void)setCreationDate:(id)arg0 ;
-(void)setEndDate:(id)arg0 ;
-(void)setExpungeDate:(id)arg0 ;
-(void)setFeaturesData:(id)arg0 ;
-(void)setFeaturesProperties:(id)arg0 ;
-(void)setKeyAssets:(id)arg0 ;
-(void)setRelevantUntilDate:(id)arg0 ;
-(void)setRepresentativeAssets:(id)arg0 ;
-(void)setStartAndEndDatesWithKeyAssets:(id)arg0 representativeAssets:(id)arg1 ;
-(void)setStartDate:(id)arg0 ;
-(void)setState:(unsigned short)arg0 ;
-(void)setSubtype:(unsigned short)arg0 ;
-(void)setType:(unsigned short)arg0 ;
-(void)setVersion:(NSInteger)arg0 ;


@end


#endif