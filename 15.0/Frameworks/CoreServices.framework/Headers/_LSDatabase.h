// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSDATABASE_H
#define _LSDATABASE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FSNode.h"

@interface _LSDatabase : NSObject {
    *__CSStore store;
    LSSchema schema;
    FSNode *node;
    unsigned int uid;
    NSObject<OS_dispatch_queue> *accessQueue;
    BOOL needsUpdate;
    BOOL isForcedForXCTesting;
    BOOL isForcedForRemoteUpdates;
}




-(id)_init;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif