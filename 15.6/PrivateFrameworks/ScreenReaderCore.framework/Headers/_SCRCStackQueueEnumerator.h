// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SCRCSTACKQUEUEENUMERATOR_H
#define _SCRCSTACKQUEUEENUMERATOR_H

@class NSEnumerator;


#import "_SCRCStackNode.h"

@interface _SCRCStackQueueEnumerator : NSEnumerator {
    _SCRCStackNode *_currentListMemeber;
}




-(id)initWithListMember:(id)arg0 ;
-(id)nextObject;


@end


#endif