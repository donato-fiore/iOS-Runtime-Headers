// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHCHANGEREQUEST_H
#define PHCHANGEREQUEST_H

@class NSString, NSManagedObjectID;
@protocol PHInsertChangeRequest;

#import <Foundation/Foundation.h>

#import "PHChangeRequestHelper.h"
#import "PHPhotoLibrary.h"

@interface PHChangeRequest : NSObject <PHInsertChangeRequest>



@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHChangeRequestHelper *helper; // ivar: _helper
@property (readonly) BOOL isNewRequest;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (nonatomic) BOOL shouldPerformConcurrentWork; // ivar: _shouldPerformConcurrentWork
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uuid;


+(id)sanitizedFailureWithError:(id)arg0 ;
-(BOOL)allowMutationToManagedObject:(id)arg0 propertyKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg0 error:(*id)arg1 ;
-(BOOL)prepareForServicePreflightCheck:(*id)arg0 ;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateMutationsToManagedObject:(id)arg0 error:(*id)arg1 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(void)didMutate;
-(void)didSendChangeToServiceHandlerWithResult:(BOOL)arg0 ;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)finalizeRequestWithBatchSuccess:(BOOL)arg0 ;
-(void)performConcurrentWork;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg0 ;


@end


#endif