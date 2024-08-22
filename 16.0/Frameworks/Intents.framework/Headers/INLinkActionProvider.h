// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INLINKACTIONPROVIDER_H
#define INLINKACTIONPROVIDER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface INLinkActionProvider : NSObject

@property (readonly, nonatomic) NSDictionary *actionsGroupedByBundleIdentifier;
@property (retain, nonatomic) NSDictionary *cachedActions; // ivar: _cachedActions
@property (retain, nonatomic) NSDictionary *cachedEntities; // ivar: _cachedEntities
@property (readonly, nonatomic) NSDictionary *entitiesGroupedByBundleIdentifier;


+(id)sharedProvider;
-(id)metadataProvider;
-(id)supportedActionIdentifiersForBundleIdentifier:(id)arg0 ;
-(id)supportedEntityIdentifiersForBundleIdentifier:(id)arg0 ;
-(void)cacheActions:(id)arg0 ;
-(void)cacheEntities:(id)arg0 ;
-(void)evictCache;


@end


#endif