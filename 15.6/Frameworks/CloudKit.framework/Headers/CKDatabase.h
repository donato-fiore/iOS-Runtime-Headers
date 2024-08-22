// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDATABASE_H
#define CKDATABASE_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>

#import "CKContainer.h"
#import "CKDatabaseImplementation.h"

@interface CKDatabase : NSObject

@property (weak, nonatomic) CKContainer *container; // ivar: _container
@property (readonly, nonatomic) NSInteger databaseScope;
@property (readonly, nonatomic) CKDatabaseImplementation *implementation; // ivar: _implementation
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) NSInteger scope;


-(id)CKPropertiesDescription;
-(id)_initWithContainer:(id)arg0 scope:(NSInteger)arg1 ;
-(id)_initWithImplementation:(id)arg0 container:(id)arg1 ;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(void)addOperation:(id)arg0 ;
-(void)clearRecordCache;
-(void)deleteRecordWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteRecordZoneWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteSubscriptionWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchAllRecordZonesWithCompletionHandler:(id)arg0 ;
-(void)fetchAllSubscriptionsWithCompletionHandler:(id)arg0 ;
-(void)fetchRecordWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchRecordZoneWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchSubscriptionWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)performQuery:(id)arg0 inZoneWithID:(id)arg1 completionHandler:(id)arg2 ;
-(void)saveRecord:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveRecordZone:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveSubscription:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif