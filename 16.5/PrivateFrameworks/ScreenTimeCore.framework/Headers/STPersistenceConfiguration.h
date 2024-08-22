// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STPERSISTENCECONFIGURATION_H
#define STPERSISTENCECONFIGURATION_H


#import <Foundation/Foundation.h>


@interface STPersistenceConfiguration : NSObject



+(id)getLocalPersistentXPCStoreDescription;
+(id)localPersistentXPCStoreDescription;
+(id)managedObjectModel;
+(id)managedObjectModelURL;
+(id)persistentStoreDescriptionForConfigurationName:(id)arg0 type:(id)arg1 ;
+(id)persistentStoreURLForConfigurationName:(id)arg0 ;


@end


#endif