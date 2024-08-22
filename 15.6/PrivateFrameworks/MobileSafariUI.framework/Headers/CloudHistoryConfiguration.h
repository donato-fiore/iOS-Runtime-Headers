// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLOUDHISTORYCONFIGURATION_H
#define CLOUDHISTORYCONFIGURATION_H

@class WBSCloudHistoryConfiguration, NSArray, NSDictionary;



@interface CloudHistoryConfiguration : WBSCloudHistoryConfiguration {
    NSArray *_assetsSortedByVersionNumber;
    NSDictionary *_remoteConfigurationDictionary;
    BOOL _fetchedAssetData;
}




+(id)sharedConfiguration;
-(BOOL)shouldUseLongLivedOperationsToSaveRecords;
-(id)_cloudConfigurationAssetsSortedByVersionNumber;
-(id)init;
-(id)platformBuiltInConfiguration;
-(id)remoteConfiguration;
-(void)_reloadConfigurationDataIfNecessary;


@end


#endif