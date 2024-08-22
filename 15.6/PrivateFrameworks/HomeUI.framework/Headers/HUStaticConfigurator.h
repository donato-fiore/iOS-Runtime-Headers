// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSTATICCONFIGURATOR_H
#define HUSTATICCONFIGURATOR_H

@class NSArray;


#import "HUConfigurator.h"

@interface HUStaticConfigurator : HUConfigurator

@property (copy, nonatomic) NSArray *staticViewControllers; // ivar: _staticViewControllers


-(id)_nextViewControllerForResults:(id)arg0 ;
-(id)initWithConfiguratorDelegate:(id)arg0 contentViewControllers:(id)arg1 ;
-(id)initWithConfiguratorDelegate:(id)arg0 viewControllers:(id)arg1 ;


@end


#endif