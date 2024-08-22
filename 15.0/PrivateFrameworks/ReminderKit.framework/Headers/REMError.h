// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMERROR_H
#define REMERROR_H


#import <Foundation/Foundation.h>


@interface REMError : NSObject



+(BOOL)_isCoreDataError:(id)arg0 ;
// +(BOOL)catchObjCException:(id)arg0 error:(unk)arg1  ;
+(BOOL)isNoSuchObjectError:(id)arg0 forObjectID:(id)arg1 ;
+(id)_errorSanitizedForXPCFromError:(id)arg0 ;
+(id)_errorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 ;
+(id)babySatErrorWithOperationName:(id)arg0 ;
+(id)cancelledError;
+(id)constraintConflictWithIdentifier:(id)arg0 constraint:(id)arg1 ;
+(id)errorFromErrors:(id)arg0 ;
+(id)errorSanitizedForXPCFromError:(id)arg0 ;
+(id)internalErrorWithDebugDescription:(id)arg0 ;
+(id)invalidParameterErrorWithDescription:(id)arg0 ;
+(id)mismatchedObjectIDWithObjectID:(id)arg0 expected:(Class)arg1 ;
+(id)noPrimaryActiveCloudKitAccountError;
+(id)noSuchObjectErrorWithDACalendarItemUniqueIdentifier:(id)arg0 ;
+(id)noSuchObjectErrorWithExternalIdentifier:(id)arg0 ;
+(id)noSuchObjectErrorWithObjectID:(id)arg0 ;
+(id)noSuchSmartListErrorWithSmartListType:(id)arg0 ;
+(id)nullifiedRelationshipErrorWithRelationshipName:(id)arg0 ;
+(id)retryLaterErrorWithInterval:(CGFloat)arg0 ;
+(id)saveErrorWithCoreDataError:(id)arg0 ;
+(id)throttledErrorWithRemainingTimeInterval:(CGFloat)arg0 ;
+(id)unauthorizedErrorWithMissingEntitlement:(id)arg0 ;
+(id)unauthorizedErrorWithMissingEntitlement:(id)arg0 requestedAccessLevel:(id)arg1 currentAccesslevel:(id)arg2 ;
+(id)unexpectedError;
+(id)unexpectedNilPropertyWithClass:(Class)arg0 property:(id)arg1 ;
+(id)validationErrorListHasNoAccount:(id)arg0 ;
+(id)validationErrorMoveFromAccount:(id)arg0 toAccout:(id)arg1 ;
+(id)validationErrorMoveReminderFromList:(id)arg0 toList:(id)arg1 inAccount:(id)arg2 ;
+(id)validationErrorNestedSubtask:(id)arg0 parentReminderID:(id)arg1 ;
+(id)validationErrorSubtaskAndParentNotOnSameList:(id)arg0 parentReminderID:(id)arg1 ;
+(id)validationErrorUndeleteHashtagFromAnotherReminder:(id)arg0 expectedReminderID:(id)arg1 ;
+(id)xpcPerformerUnavailableErrorWithDescription:(id)arg0 ;


@end


#endif