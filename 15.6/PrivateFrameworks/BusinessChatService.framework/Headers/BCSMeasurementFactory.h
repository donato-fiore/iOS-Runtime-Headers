// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSMEASUREMENTFACTORY_H
#define BCSMEASUREMENTFACTORY_H

@class NSString;
@protocol BCSMeasurementFactoryProtocol;

#import <Foundation/Foundation.h>


@interface BCSMeasurementFactory : NSObject <BCSMeasurementFactoryProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)businessLinkChoppedFetchTimingMeasurementForItemIdentifier:(id)arg0 ;
-(id)businessLinkFetchByHashTimingMeasurementForItemIdentifier:(id)arg0 ;
-(id)configCacheHitMeasurementForConfigType:(NSInteger)arg0 ;
-(id)configCloudKitFetchAndDecodeTimingMeasurementForType:(NSInteger)arg0 identifier:(NSUInteger)arg1 ;
-(id)configCloudKitFetchTimingMeasurementForType:(NSInteger)arg0 identifier:(NSUInteger)arg1 ;
-(id)configResolutionTimingMeasurementForConfigType:(NSInteger)arg0 ;
-(id)itemCacheHitMeasurementForItemIdentifier:(id)arg0 ;
-(id)itemCloudKitFetchAndDecodeTimingMeasurementForType:(NSInteger)arg0 identifier:(NSUInteger)arg1 ;
-(id)itemCloudKitFetchTimingMeasurementForType:(NSInteger)arg0 identifier:(NSUInteger)arg1 ;
-(id)itemFetchTimingMeasurementForItemIdentifier:(id)arg0 ;
-(id)itemIsRegisteredTimingMeasurementForItemIdentifier:(id)arg0 ;
-(id)itemResolutionTimingMeasurementForItemIdentifier:(id)arg0 ;
-(id)megashardCloudKitFetchAndDecodeTimingMeasurementForType:(NSInteger)arg0 identifier:(NSUInteger)arg1 ;
-(id)megashardCloudKitFetchTimingMeasurementForType:(NSInteger)arg0 identifier:(NSUInteger)arg1 ;
-(id)shardCacheHitMeasurementForShardIdentifier:(id)arg0 ;
-(id)shardCloudKitFetchAndDecodeTimingMeasurementForType:(NSInteger)arg0 identifier:(NSUInteger)arg1 ;
-(id)shardCloudKitFetchTimingMeasurementForType:(NSInteger)arg0 identifier:(NSUInteger)arg1 ;
-(id)shardResolutionTimingMeasurementForShardIdentifier:(id)arg0 ;


@end


#endif