// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKOBSERVERBRIDGEHANDLE_H
#define HKOBSERVERBRIDGEHANDLE_H


#import <Foundation/Foundation.h>

#import "HKObserverBridge.h"

@interface HKObserverBridgeHandle : NSObject

@property (readonly, weak, nonatomic) HKObserverBridge *bridge; // ivar: _bridge


-(BOOL)notifyObserversOfChangeForKey:(id)arg0 newValue:(id)arg1 ;
-(id)initWithBridge:(id)arg0 ;


@end


#endif