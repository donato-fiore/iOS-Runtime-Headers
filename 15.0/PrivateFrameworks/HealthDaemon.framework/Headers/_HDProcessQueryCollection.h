// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDPROCESSQUERYCOLLECTION_H
#define _HDPROCESSQUERYCOLLECTION_H

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDQueryServerClientState.h"

@interface _HDProcessQueryCollection : NSObject {
    NSMutableDictionary *_queryServersByUUID;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_processBundleIdentifier;
    HDQueryServerClientState *_clientState;
}






@end


#endif