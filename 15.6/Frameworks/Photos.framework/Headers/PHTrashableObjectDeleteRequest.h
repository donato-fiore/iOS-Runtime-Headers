// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHTRASHABLEOBJECTDELETEREQUEST_H
#define PHTRASHABLEOBJECTDELETEREQUEST_H



#import "PHObjectDeleteRequest.h"

@interface PHTrashableObjectDeleteRequest : PHObjectDeleteRequest

@property (readonly, nonatomic, getter=isClientEntitledToExpunge) BOOL clientEntitledToExpunge; // ivar: _clientEntitledToExpunge
@property (readonly, nonatomic) NSInteger operation; // ivar: _operation


+(id)deleteRequestForObject:(id)arg0 ;
+(id)deleteRequestForObject:(id)arg0 operation:(NSInteger)arg1 ;
-(BOOL)validateForDeleteManagedObject:(id)arg0 error:(*id)arg1 ;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 operation:(NSInteger)arg2 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg0 ;


@end


#endif