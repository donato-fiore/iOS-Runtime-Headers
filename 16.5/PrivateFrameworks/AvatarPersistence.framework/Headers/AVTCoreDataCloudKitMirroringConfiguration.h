// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTCOREDATACLOUDKITMIRRORINGCONFIGURATION_H
#define AVTCOREDATACLOUDKITMIRRORINGCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface AVTCoreDataCloudKitMirroringConfiguration : NSObject



+(BOOL)cloudKitMirroringEnabled;
+(BOOL)manateeContainer:(id)arg0 ;
+(id)createMirroringHandlerWithEnvironment:(id)arg0 ;
+(id)currentContainerIdentifier;
+(id)managedModelAttributesRequiredForMirroring;
+(void)configureMirroringRequestOptions:(id)arg0 ;
+(void)configureMirroringRequestOptions:(id)arg0 discretionary:(BOOL)arg1 ;
+(void)configureStoreDescriptionForMirroring:(id)arg0 logger:(id)arg1 ;
+(void)deviceConfigurationSupportsCloudKitMirroringWithLogger:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif