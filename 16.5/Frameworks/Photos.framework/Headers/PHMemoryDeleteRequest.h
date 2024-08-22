// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHMEMORYDELETEREQUEST_H
#define PHMEMORYDELETEREQUEST_H



#import "PHObjectDeleteRequest.h"

@interface PHMemoryDeleteRequest : PHObjectDeleteRequest

@property (readonly, nonatomic) BOOL clientEntitledToMemoryMutation; // ivar: _clientEntitledToMemoryMutation


-(BOOL)validateForDeleteManagedObject:(id)arg0 error:(*id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(void)deleteManagedObject:(id)arg0 photoLibrary:(id)arg1 ;


@end


#endif