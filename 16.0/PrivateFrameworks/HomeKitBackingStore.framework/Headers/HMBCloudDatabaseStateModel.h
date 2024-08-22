// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBCLOUDDATABASESTATEMODEL_H
#define HMBCLOUDDATABASESTATEMODEL_H

@class CKDatabase, NSDate, NAFuture, NSSet, NSData;


#import "HMBCloudStateModel.h"
#import "HMBCloudID.h"

@interface HMBCloudDatabaseStateModel : HMBCloudStateModel

@property (retain, nonatomic) HMBCloudID *cloudID;
@property (weak, nonatomic) CKDatabase *database; // ivar: _database
@property (retain, nonatomic) NSDate *lastAdministrativeFetch;
@property (retain) NAFuture *queuedCloudPullFuture; // ivar: _queuedCloudPullFuture
@property (copy, nonatomic) NSSet *subscriptions;
@property (retain, nonatomic) NSData *subscriptionsData;


+(id)hmbProperties;
-(id)initWithModelID:(id)arg0 parentModelID:(id)arg1 ;


@end


#endif