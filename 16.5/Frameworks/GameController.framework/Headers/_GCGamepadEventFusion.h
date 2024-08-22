// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCGAMEPADEVENTFUSION_H
#define _GCGAMEPADEVENTFUSION_H

@class NSString, NSArray;
@protocol _GCGamepadEventSource;

#import <Foundation/Foundation.h>

#import "_GCGamepadEventFusionConfig.h"

@interface _GCGamepadEventFusion : NSObject <_GCGamepadEventSource>

 {
    _GCGamepadEventFusionConfig *_config;
    ? _fusedData;
    *id _lastEvent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *observations; // ivar: _observations
@property (copy) NSArray *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)init;
-(id)initWithConfiguration:(id)arg0 sources:(id)arg1 ;
-(id)observeGamepadEvents:(id)arg0 ;
-(void)dealloc;


@end


#endif