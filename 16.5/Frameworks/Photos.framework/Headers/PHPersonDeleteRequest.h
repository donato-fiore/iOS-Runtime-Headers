// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHPERSONDELETEREQUEST_H
#define PHPERSONDELETEREQUEST_H



#import "PHObjectDeleteRequest.h"

@interface PHPersonDeleteRequest : PHObjectDeleteRequest

@property (nonatomic) BOOL force; // ivar: _force


-(BOOL)validateForDeleteManagedObject:(id)arg0 error:(*id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(void)deleteManagedObject:(id)arg0 photoLibrary:(id)arg1 ;
-(void)encodeToXPCDict:(id)arg0 ;


@end


#endif