// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __HMFSETUPASSISTANTDATASOURCE_H
#define __HMFSETUPASSISTANTDATASOURCE_H

@class NSString;
@protocol HMFSystemInfoMigrationDataSource, HMFSystemInfoMigrationDataSourceDelegate;


#import "HMFObject.h"

@interface __HMFSetupAssistantDataSource : HMFObject <HMFSystemInfoMigrationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMFSystemInfoMigrationDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isMigrating) BOOL migrating;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif