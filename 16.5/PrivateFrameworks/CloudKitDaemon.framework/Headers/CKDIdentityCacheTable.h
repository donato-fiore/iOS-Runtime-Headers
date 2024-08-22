// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDIDENTITYCACHETABLE_H
#define CKDIDENTITYCACHETABLE_H

@class CKSQLiteCacheTable;



@interface CKDIdentityCacheTable : CKSQLiteCacheTable



+(Class)entryClass;
+(id)dbProperties;
-(id)cachedIdentityForLookupInfo:(id)arg0 container:(id)arg1 ;
-(id)insertUserIdentity:(id)arg0 forLookupInfo:(id)arg1 container:(id)arg2 ;
-(id)predicateForMatchingLookupInfoInContainer;
-(id)valuesDictionaryForLookupInfo:(id)arg0 container:(id)arg1 ;
-(void)deleteUserIdentityForLookupInfo:(id)arg0 container:(id)arg1 ;


@end


#endif