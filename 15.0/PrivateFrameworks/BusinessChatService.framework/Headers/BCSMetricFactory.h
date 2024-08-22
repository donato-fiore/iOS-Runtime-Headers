// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSMETRICFACTORY_H
#define BCSMETRICFACTORY_H

@class NSArray, NSString;
@protocol BCSMetricFactoryProtocol, BCSMeasurementFactoryProtocol;

#import <Foundation/Foundation.h>


@interface BCSMetricFactory : NSObject <BCSMetricFactoryProtocol>

 {
    NSArray *_postProcessingMetricHandlers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<BCSMeasurementFactoryProtocol> *measurementFactory; // ivar: _measurementFactory
@property (readonly) Class superclass;


-(id)businessLinkFetchMetricForItemIdentifier:(id)arg0 ;
-(id)businessLinkHashFetchMetricForItemIdentifier:(id)arg0 ;
-(id)businessLinkRegisteredMetricForItemIdentifier:(id)arg0 ;
-(id)chatSuggestFetchMetricForItemIdentifier:(id)arg0 ;
-(id)chatSuggestRegisteredMetricForItemIdentifier:(id)arg0 ;
-(id)configPrefetchMetricForConfigType:(NSInteger)arg0 ;
-(id)configResolutionMetricForConfigType:(NSInteger)arg0 ;
-(id)initWithMeasurementFactory:(id)arg0 ;
-(id)itemResolutionMetricForItemIdentifier:(id)arg0 ;
-(id)megashardPrefetchMetricForType:(NSInteger)arg0 ;
-(id)shardResolutionMetricForShardIdentifier:(id)arg0 ;


@end


#endif