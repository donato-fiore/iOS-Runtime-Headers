// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMODOMETERSUITABILITYMANAGER_H
#define CMODOMETERSUITABILITYMANAGER_H


#import <Foundation/Foundation.h>

#import "CMOdometerSuitabilityManagerProxy.h"

@interface CMOdometerSuitabilityManager : NSObject

@property (readonly, nonatomic) CMOdometerSuitabilityManagerProxy *odometerSuitabilityManagerProxy; // ivar: _odometerSuitabilityManagerProxy


-(id)init;
-(void)dealloc;
-(void)startOdometerSuitabilityUpdatesWithHandler:(id)arg0 ;
-(void)stopOdometerSuitabilityUpdates;


@end


#endif