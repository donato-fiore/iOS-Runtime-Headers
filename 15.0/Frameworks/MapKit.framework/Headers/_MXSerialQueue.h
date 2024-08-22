// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MXSERIALQUEUE_H
#define _MXSERIALQUEUE_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface _MXSerialQueue : NSObject {
    NSObject<OS_dispatch_group> *_previousTaskGroup;
}




+(id)taskCompletionQueue;
+(id)taskInsertionQueue;
+(id)taskQueue;
-(id)init;
-(void)addTask:(id)arg0 ;


@end


#endif