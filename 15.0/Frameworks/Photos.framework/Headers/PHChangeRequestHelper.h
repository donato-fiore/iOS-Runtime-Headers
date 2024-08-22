// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHCHANGEREQUESTHELPER_H
#define PHCHANGEREQUESTHELPER_H

@class NSString, NSMutableDictionary, NSMutableSet, NSManagedObjectID;
@protocol PHChangeRequest, PLClientAuthorization;

#import <Foundation/Foundation.h>

#import "PHPerformChangesRequest.h"

@interface PHChangeRequestHelper : NSObject {
    BOOL _isMutated;
    BOOL _isNewRequest;
}


@property (weak, nonatomic) NSObject<PHChangeRequest> *changeRequest; // ivar: _changeRequest
@property (readonly, nonatomic) NSObject<PLClientAuthorization> *clientAuthorization; // ivar: _clientAuthorization
@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, nonatomic) NSString *clientDisplayName;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic, getter=isClientInLimitedLibraryMode) BOOL clientInLimitedLibraryMode;
@property (readonly, nonatomic) NSString *fetchFilterIdentifier;
@property (nonatomic, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSMutableDictionary *mutations; // ivar: _mutations
@property (nonatomic, getter=isNewRequest) BOOL newRequest;
@property (readonly, nonatomic) NSMutableSet *nilMutations; // ivar: _nilMutations
@property (retain, nonatomic) NSManagedObjectID *objectID; // ivar: _objectID
@property (nonatomic) PHPerformChangesRequest *request; // ivar: _request
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


+(id)changeRequestForObject:(id)arg0 ;
+(id)changeRequestWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(BOOL)allowMutationToManagedObject:(id)arg0 propertyKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg0 error:(*id)arg1 ;
-(BOOL)prepareForServicePreflightCheck:(*id)arg0 ;
-(BOOL)validateMutationsToManagedObject:(id)arg0 error:(*id)arg1 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(id)initForNewObjectWithChangeRequest:(id)arg0 ;
-(id)initForNewObjectWithUUID:(id)arg0 changeRequest:(id)arg1 ;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 changeRequest:(id)arg2 ;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 isNew:(BOOL)arg2 changeRequest:(id)arg3 ;
-(id)initWithXPCDict:(id)arg0 changeRequest:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(id)placeholderForCreatedObjectWithClass:(Class)arg0 changeRequest:(id)arg1 ;
-(void)didMutate;
-(void)encodeToXPCDict:(id)arg0 ;


@end


#endif