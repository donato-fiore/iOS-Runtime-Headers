// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTCOREDATAPERSISTENTSTORECONFIGURATION_H
#define AVTCOREDATAPERSISTENTSTORECONFIGURATION_H


#import <Foundation/Foundation.h>


@interface AVTCoreDataPersistentStoreConfiguration : NSObject



+(id)createModel;
+(id)currentManagedObjectModel;
+(id)localConfigurationWithStoreLocation:(id)arg0 environment:(id)arg1 ;
+(id)modelV1;
+(id)remoteConfigurationWithDaemonClient:(id)arg0 environment:(id)arg1 ;
+(id)remoteConfigurationWithEnvironment:(id)arg0 ;


@end


#endif