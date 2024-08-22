// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSBUSINESSITEMPERSISTENTSTORE_H
#define BCSBUSINESSITEMPERSISTENTSTORE_H



#import "BCSPersistentStore.h"

@interface BCSBusinessItemPersistentStore : BCSPersistentStore



+(char *)debugQueueName;
-(BOOL)deleteBusinessItem:(id)arg0 ;
-(BOOL)deleteBusinessItemWithBizID:(id)arg0 ;
-(BOOL)deleteBusinessItemWithPhoneNumber:(id)arg0 ;
-(BOOL)insertOrReplaceBusinessItem:(id)arg0 withTTL:(CGFloat)arg1 ;
-(BOOL)updateLastRetrievedDateForBusinessItem:(id)arg0 ;
-(BOOL)updateTTL:(CGFloat)arg0 forBusinessItem:(id)arg1 ;
-(NSInteger)schemaVersion;
-(char *)schema;
-(id)databasePath;
-(id)fetchPersistentBusinessItemObjectWithBizID:(id)arg0 ;
-(id)fetchPersistentBusinessItemObjectWithPhoneNumber:(id)arg0 ;


@end


#endif