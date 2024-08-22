// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELSOCIALPERSON_H
#define MPMODELSOCIALPERSON_H

@class NSString;


#import "MPModelPerson.h"

@interface MPModelSocialPerson : MPModelPerson

@property (copy, nonatomic) id *artworkCatalogBlock;
@property (copy, nonatomic) NSString *biography;
@property (copy, nonatomic) NSString *handle;
@property (nonatomic) NSInteger pendingRequestsCount;
@property (nonatomic, getter=isPrivate) BOOL privatePerson;
@property (copy, nonatomic) NSString *uncensoredName;
@property (nonatomic, getter=isVerified) BOOL verified;


+(NSInteger)genericObjectType;
+(id)__privatePerson_KEY;
+(id)__verified_KEY;
+(id)kind;
-(id)artworkCatalog;


@end


#endif