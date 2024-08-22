// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDDCLOUDKITREGISTEREDCLIENT_H
#define CDDCLOUDKITREGISTEREDCLIENT_H

@class NSString, NSSet;


#import "NSManagedObject.h"

@interface CDDCloudKitRegisteredClient : NSManagedObject

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSString *fileProtectionType;
@property (retain, nonatomic) NSSet *scheduledActivities;
@property (retain, nonatomic) NSString *storeConfigurationName;
@property (retain, nonatomic) NSString *storePath;


+(id)entityName;


@end


#endif