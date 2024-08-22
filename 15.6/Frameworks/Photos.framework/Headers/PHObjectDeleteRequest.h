// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHOBJECTDELETEREQUEST_H
#define PHOBJECTDELETEREQUEST_H

@class NSString, NSManagedObjectID;
@protocol PHDeleteChangeRequest;


#import "PHChangeRequest.h"

@interface PHObjectDeleteRequest : PHChangeRequest <PHDeleteChangeRequest>

 {
    NSString *_uuid;
}


@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled; // ivar: _clientEntitled
@property (readonly, nonatomic) NSString *clientName; // ivar: _clientName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic) NSManagedObjectID *objectID; // ivar: _objectID
@property (readonly) Class superclass;


+(id)_deleteRequestsForObjects:(id)arg0 ;
+(id)deleteRequestForObject:(id)arg0 ;
+(id)deleteRequestsForObjects:(id)arg0 ofType:(Class)arg1 forSelector:(SEL)arg2 ;
-(BOOL)validateForDeleteManagedObject:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithUUID:(id)arg0 request:(id)arg1 objectID:(id)arg2 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(id)uuid;
-(void)deleteManagedObject:(id)arg0 photoLibrary:(id)arg1 ;
-(void)encodeToXPCDict:(id)arg0 ;


@end


#endif