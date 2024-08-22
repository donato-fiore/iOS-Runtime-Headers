// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPQUEUEFEEDER_H
#define MPQUEUEFEEDER_H

@class NSString, NSData, NSDictionary;

#import <Foundation/Foundation.h>

#import "MPQueueFeederIdentifierRegistry.h"

@interface MPQueueFeeder : NSObject {
    MPQueueFeederIdentifierRegistry *_identifierRegistry;
    os_unfair_lock_s _identifierRegistryLock;
}


@property (copy, nonatomic) NSString *playActivityFeatureName; // ivar: _playActivityFeatureName
@property (copy, nonatomic) NSString *playActivityQueueGroupingID; // ivar: _playActivityQueueGroupingID
@property (copy, nonatomic) NSData *playActivityRecommendationData; // ivar: _playActivityRecommendationData
@property (copy, nonatomic) NSString *siriReferenceIdentifier; // ivar: _siriReferenceIdentifier
@property (copy, nonatomic) NSDictionary *siriWHAMetricsInfo; // ivar: _siriWHAMetricsInfo
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(BOOL)identifierRegistryWithExclusiveAccessReturningBOOL:(id)arg0 ;
-(NSInteger)identifierRegistryWithExclusiveAccessReturningInteger:(id)arg0 ;
-(NSInteger)supplementalPlaybackContextBehavior;
-(id)errorResolverForItem:(id)arg0 ;
-(id)firstModelPlayEvent;
-(id)identifierRegistryWithExclusiveAccessReturningObject:(id)arg0 ;
-(id)init;
-(id)supplementalPlaybackContextWithReason:(NSInteger)arg0 ;
-(void)applyVolumeNormalizationForItem:(id)arg0 ;
-(void)getRepresentativeMetadataForPlaybackContext:(id)arg0 properties:(id)arg1 completion:(id)arg2 ;
-(void)identifierRegistryWithExclusiveAccess:(id)arg0 ;
-(void)replaceIdentifierRegistry:(id)arg0 ;


@end


#endif