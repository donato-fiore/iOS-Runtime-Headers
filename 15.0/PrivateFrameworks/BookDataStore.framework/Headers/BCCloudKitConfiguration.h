// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCCLOUDKITCONFIGURATION_H
#define BCCLOUDKITCONFIGURATION_H

@class NSString, NSArray;
@protocol BCContainerConfiguration;

#import <Foundation/Foundation.h>


@interface BCCloudKitConfiguration : NSObject <BCContainerConfiguration>



@property (retain, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (retain, nonatomic) NSArray *appZones; // ivar: _appZones
@property (retain, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (retain, nonatomic) NSString *dbArchiveExtension; // ivar: _dbArchiveExtension
@property (retain, nonatomic) NSString *dbArchiveFilename; // ivar: _dbArchiveFilename
@property (retain, nonatomic) NSString *dbArchiveFolderName; // ivar: _dbArchiveFolderName
@property (retain, nonatomic) NSString *dbSubscriptionID; // ivar: _dbSubscriptionID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *queueIdentifier; // ivar: _queueIdentifier
@property (nonatomic) BOOL requiresDeviceToDeviceEncryption; // ivar: _requiresDeviceToDeviceEncryption
@property (retain, nonatomic) NSArray *serviceZones; // ivar: _serviceZones
@property (readonly) Class superclass;


+(id)configuration;
-(BOOL)shouldArchiveData:(id)arg0 ;
-(BOOL)shouldPerformDatabaseSubscriptionForServiceMode:(BOOL)arg0 ;


@end


#endif