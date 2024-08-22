// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCLOUDMANAGERDATASOURCE_H
#define HMDCLOUDMANAGERDATASOURCE_H

@class HMFObject;


#import "HMDHomeManager.h"

@interface HMDCloudManagerDataSource : HMFObject

@property (readonly, weak) HMDHomeManager *homeManager; // ivar: _homeManager


-(BOOL)isControllerKeyAvailable;
-(BOOL)isKeychainSyncEnabled;
-(NSUInteger)dataMigrationOptions;
-(id)initWithHomeManager:(id)arg0 ;
-(id)queryDatabaseOperationWithBlock:(id)arg0 ;


@end


#endif