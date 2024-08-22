// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AVTCOREDATAPERSISTENTSTOREREMOTECONFIGURATION_H
#define _AVTCOREDATAPERSISTENTSTOREREMOTECONFIGURATION_H

@class NSPersistentContainer, NSString;
@protocol AVTCoreDataPersistentStoreConfiguration, AVTAvatarsDaemon, AVTUILogger;

#import <Foundation/Foundation.h>


@interface _AVTCoreDataPersistentStoreRemoteConfiguration : NSObject <AVTCoreDataPersistentStoreConfiguration>



@property (readonly, nonatomic) NSPersistentContainer *container; // ivar: _container
@property (readonly, nonatomic) NSObject<AVTAvatarsDaemon> *daemonClient; // ivar: _daemonClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly) Class superclass;


+(id)createContainerForRemoteConfiguration;
-(BOOL)setupIfNeeded:(*id)arg0 ;
-(id)createManagedObjectContext;
-(id)initWithDaemonClient:(id)arg0 environment:(id)arg1 ;
-(id)persistentStoreCoordinator;
-(id)storeDescription;


@end


#endif