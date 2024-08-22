// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOCONFIGCHANGEDLISTENER_H
#define _GEOCONFIGCHANGEDLISTENER_H

@protocol OS_dispatch_queue, GEOConfigChangeListenerDelegate;

#import <Foundation/Foundation.h>

#import "_GEOConfigKeyHelper.h"

@interface _GEOConfigChangedListener : NSObject {
    _GEOConfigKeyHelper *keyHelper;
    NSObject<OS_dispatch_queue> *queue;
    id *block;
    id<GEOConfigChangeListenerDelegate> *delegate;
}




-(id)description;
-(void)callListener;


@end


#endif