// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STUSAGEREQUEST_H
#define STUSAGEREQUEST_H

@class NSManagedObject, NSDate, NSNumber;



@interface STUsageRequest : NSManagedObject

@property (retain, nonatomic) NSDate *acknowledgedDate;
@property (retain, nonatomic) NSNumber *forUserDSID;
@property (nonatomic) BOOL isBackgroundTask;
@property (retain, nonatomic) NSDate *requestedDate;


+(id)fetchOrCreateUsageRequestForLocalUserInContext:(id)arg0 error:(*id)arg1 ;
+(id)fetchOrCreateUsageRequestForRemoteUserWithDSID:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)fetchOrCreateUsageRequestForUser:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)fetchOrCreateUsageRequestForUserWithDSID:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)fetchRequestForLocalUsageRequests;
+(id)fetchRequestForUsageRequestsThatAreForRemoteUsers;


@end


#endif