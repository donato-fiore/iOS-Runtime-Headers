// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIEVENTBUS_H
#define _UIEVENTBUS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _UIEventBus : NSObject {
    NSMutableArray *_events;
    id<_UIUpdateHIDAbstractInput>" _inputs;
}




-(id)init;


@end


#endif