// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFTEMPERATUREUNITCOORDINATOR_H
#define HFTEMPERATUREUNITCOORDINATOR_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface HFTemperatureUnitCoordinator : NSObject

@property (readonly, nonatomic) BOOL isCelsius; // ivar: _isCelsius
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers


+(id)sharedCoordinator;
-(id)init;
-(void)_temperatureUnitDidChange;
-(void)_updateIsCelsiusNotifyingObservers:(BOOL)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif