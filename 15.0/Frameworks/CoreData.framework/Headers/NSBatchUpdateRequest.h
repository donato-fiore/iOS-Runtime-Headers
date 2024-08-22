// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSBATCHUPDATEREQUEST_H
#define NSBATCHUPDATEREQUEST_H

@class NSString, NSPredicate, NSDictionary;
@protocol NSPredicatedStoreRequest;


#import "NSPersistentStoreRequest.h"
#import "NSEntityDescription.h"

@interface NSBatchUpdateRequest : NSPersistentStoreRequest <NSPredicatedStoreRequest>

 {
    _requestFlags _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSEntityDescription *entity; // ivar: _entity
@property (readonly, copy) NSString *entityName;
@property (readonly) NSUInteger hash;
@property BOOL includesSubentities;
@property (retain) NSPredicate *predicate; // ivar: _predicate
@property (copy) NSDictionary *propertiesToUpdate; // ivar: _columnsToUpdate
@property NSUInteger resultType;
@property (nonatomic, getter=_secureOperation, setter=_setSecureOperation:) BOOL shouldPerformSecureOperation;
@property (readonly) Class superclass;


+(id)batchUpdateRequestWithEntityName:(id)arg0 ;
+(id)decodeFromXPCArchive:(id)arg0 withContext:(id)arg1 withPolicy:(id)arg2 ;
-(BOOL)shouldPerformSecureOperation;
-(NSUInteger)requestType;
-(id)encodeForXPC;
-(id)init;
-(id)initWithEntity:(id)arg0 ;
-(id)initWithEntityName:(id)arg0 ;
-(void)_resolveEntityWithContext:(id)arg0 ;
-(void)dealloc;
-(void)setShouldPerformSecureOperation:(BOOL)arg0 ;


@end


#endif