// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APMETRICNOTIFICATIONREGISTRAR_H
#define APMETRICNOTIFICATIONREGISTRAR_H

@class NSString, NSMutableDictionary, NSLock;
@protocol APMetricNotificationRegister, APMetricReceiving;

#import <Foundation/Foundation.h>


@interface APMetricNotificationRegistrar : NSObject <APMetricNotificationRegister, APMetricReceiving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger registrationCounter; // ivar: _registrationCounter
@property (readonly, nonatomic) NSMutableDictionary *registryByClosure; // ivar: _registryByClosure
@property (readonly, nonatomic) NSMutableDictionary *registryByRoute; // ivar: _registryByRoute
@property (readonly, nonatomic) NSLock *registryLock; // ivar: _registryLock
@property (readonly) Class superclass;


-(NSInteger)registerHandlerForRoute:(NSInteger)arg0 andMetric:(NSInteger)arg1 closure:(id)arg2 ;
-(NSInteger)registerHandlerForRoute:(NSInteger)arg0 closure:(id)arg1 ;
-(id)_closuresForRoute:(NSInteger)arg0 andMetric:(NSInteger)arg1 ;
-(id)_metricRegistryForRoute:(NSInteger)arg0 andMetric:(NSInteger)arg1 ;
-(id)init;
-(void)receivedMetric:(id)arg0 ;
-(void)removeHandlerWithIdentifier:(NSInteger)arg0 ;


@end


#endif