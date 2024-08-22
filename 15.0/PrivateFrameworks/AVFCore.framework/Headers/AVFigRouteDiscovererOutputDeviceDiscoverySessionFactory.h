// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVFIGROUTEDISCOVEREROUTPUTDEVICEDISCOVERYSESSIONFACTORY_H
#define AVFIGROUTEDISCOVEREROUTPUTDEVICEDISCOVERYSESSIONFACTORY_H

@class NSString;
@protocol AVOutputDeviceDiscoverySessionFactory, AVFigRouteDiscovererFactory;

#import <Foundation/Foundation.h>


@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionFactory : NSObject <AVOutputDeviceDiscoverySessionFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVFigRouteDiscovererFactory> *routeDiscovererFactory; // ivar: _routeDiscovererFactory
@property (readonly) Class superclass;


-(id)init;
-(id)initWithRouteDiscovererFactory:(id)arg0 ;
-(id)outputDeviceDiscoverySessionOfClass:(Class)arg0 withDeviceFeatures:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif