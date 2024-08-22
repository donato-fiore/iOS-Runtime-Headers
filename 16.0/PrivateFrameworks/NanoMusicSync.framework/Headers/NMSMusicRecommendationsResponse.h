// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSMUSICRECOMMENDATIONSRESPONSE_H
#define NMSMUSICRECOMMENDATIONSRESPONSE_H

@class NSData, NSOrderedSet;

#import <Foundation/Foundation.h>

#import "NMSMutableMediaSyncInfo.h"

@interface NMSMusicRecommendationsResponse : NSObject

@property (readonly, nonatomic) NSData *cachedData; // ivar: _cachedData
@property (readonly, nonatomic) NMSMutableMediaSyncInfo *importedStoreContainerItemMappings; // ivar: _importedStoreContainerItemMappings
@property (readonly, nonatomic) NSOrderedSet *recommendations; // ivar: _recommendations


-(id)initWithCachedData:(id)arg0 importedStoreContainerItemMappings:(id)arg1 recommendations:(id)arg2 ;


@end


#endif