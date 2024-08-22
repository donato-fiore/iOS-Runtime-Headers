// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPERSONSETTINGSMANAGERDEPENDENCYFACTORY_H
#define HMDPERSONSETTINGSMANAGERDEPENDENCYFACTORY_H

@protocol HMDPersonSettingsManagerDependencyFactory, HMDFileManager, HMDPersistentStore;

#import <Foundation/Foundation.h>


@interface HMDPersonSettingsManagerDependencyFactory : NSObject <HMDPersonSettingsManagerDependencyFactory>



@property (readonly) NSObject<HMDFileManager> *fileManager;
@property (readonly) NSObject<HMDPersistentStore> *persistentStore;




@end


#endif