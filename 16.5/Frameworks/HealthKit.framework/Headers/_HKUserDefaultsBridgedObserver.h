// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKUSERDEFAULTSBRIDGEDOBSERVER_H
#define _HKUSERDEFAULTSBRIDGEDOBSERVER_H


#import <Foundation/Foundation.h>

#import "HKObserverBridgeHandle.h"

@interface _HKUserDefaultsBridgedObserver : NSObject

@property (readonly, nonatomic) HKObserverBridgeHandle *handle; // ivar: _handle


-(id)initWithHandle:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif