// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXDNDMODECONFIGURATIONCLIENT_H
#define ATXDNDMODECONFIGURATIONCLIENT_H

@class DNDModeConfigurationService, NSDictionary;
@protocol DNDModeConfigurationServiceListener;

#import <Foundation/Foundation.h>


@interface ATXDNDModeConfigurationClient : NSObject {
    DNDModeConfigurationService *_dndConfigurationService;
    id<DNDModeConfigurationServiceListener> *_updateListener;
    BOOL _isCacheValid;
    NSDictionary *_cachedModeConfig;
    NSDictionary *_cachedModesByModeIdentifiers;
    NSDictionary *_cachedModesBySemanticType;
}




+(id)sharedInstance;
-(NSUInteger)atxModeForDNDMode:(id)arg0 ;
-(NSUInteger)atxModeForDNDSemanticType:(NSInteger)arg0 ;
-(id)configuredModes;
-(id)configuredModesBySemanticType;
-(id)debug_allModeDescriptions;
-(id)dndModeForATXMode:(NSUInteger)arg0 ;
-(id)dndModeForDNDModeWithUUID:(id)arg0 ;
-(id)dndModeUUIDForDNDModeIdentifier:(id)arg0 ;
-(id)dndSemanticTypeForATXMode:(NSUInteger)arg0 ;
-(id)getAllModeConfigurationsWithoutCache;
-(id)init;
-(id)initWithConfigurationService:(id)arg0 ;
-(id)modeConfigurationForDNDModeWithUUID:(id)arg0 ;
-(id)modesByModeIdentifiers;
-(void)invalidateCaches;
-(void)refreshCachedConfigs;


@end


#endif