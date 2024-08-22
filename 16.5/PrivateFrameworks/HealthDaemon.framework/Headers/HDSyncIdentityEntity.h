// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSYNCIDENTITYENTITY_H
#define HDSYNCIDENTITYENTITY_H



#import "HDHealthEntity.h"

@interface HDSyncIdentityEntity : HDHealthEntity



+(NSInteger)protectionClass;
+(id)concreteIdentityForIdentity:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)insertOrLookupConcreteIdentityForIdentity:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)insertOrLookupConcreteIdentityForIdentity:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)concreteIdentityWithTransaction:(id)arg0 error:(*id)arg1 ;


@end


#endif