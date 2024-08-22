// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCGAMEPADEVENTKEYBOARDEVENTADAPTER_H
#define _GCGAMEPADEVENTKEYBOARDEVENTADAPTER_H

@class NSString, NSArray;
@protocol _GCGamepadEventSource;

#import <Foundation/Foundation.h>

#import "_GCGamepadEventKeyboardEventAdapterConfig.h"

@interface _GCGamepadEventKeyboardEventAdapter : NSObject <_GCGamepadEventSource>

 {
    id *_observation;
    _GCGamepadEventKeyboardEventAdapterConfig *_config;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSArray *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)init;
-(id)initWithConfiguration:(id)arg0 source:(id)arg1 ;
-(id)observeGamepadEvents:(id)arg0 ;
-(void)dealloc;


@end


#endif