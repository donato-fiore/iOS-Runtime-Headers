// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SERVICESTATE_H
#define SERVICESTATE_H


#import <Foundation/Foundation.h>

#import "IndoorProtocolProxy.h"
#import "CLGpsPosition.h"

@interface ServiceState : NSObject

@property (retain, nonatomic) IndoorProtocolProxy *delegateProxy; // ivar: _delegateProxy
@property (retain, nonatomic) CLGpsPosition *lastLocation; // ivar: _lastLocation
@property (nonatomic) BOOL pausedLocalization; // ivar: _pausedLocalization
@property (nonatomic) BOOL updateLocation; // ivar: _updateLocation




@end


#endif