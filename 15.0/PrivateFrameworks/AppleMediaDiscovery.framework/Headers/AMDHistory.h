// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDHISTORY_H
#define AMDHISTORY_H

@class NSManagedObject, NSData, NSString;



@interface AMDHistory : NSManagedObject

@property (nonatomic) short day;
@property (nonatomic) short domain;
@property (retain, nonatomic) NSData *results;
@property (copy, nonatomic) NSString *useCaseId;
@property (copy, nonatomic) NSString *userId;


+(BOOL)saveResultsToHistory:(id)arg0 forUser:(id)arg1 inDomain:(id)arg2 forUseCase:(id)arg3 error:(*id)arg4 ;
+(id)deleteAllHistory:(*id)arg0 ;
+(id)deleteHistoryOlderThan:(short)arg0 inDomain:(id)arg1 error:(*id)arg2 ;
+(id)fetchAllHistory:(*id)arg0 ;
+(id)fetchHistoryForUser:(id)arg0 inDomain:(id)arg1 forUseCase:(id)arg2 error:(*id)arg3 ;
+(id)fetchPreTodayHistoryForUser:(id)arg0 inDomain:(id)arg1 forUseCase:(id)arg2 error:(*id)arg3 ;
+(id)fetchRequest;
+(id)sha2256HashFor:(id)arg0 ;


@end


#endif