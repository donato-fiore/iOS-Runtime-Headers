// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKSYNC2STATE_H
#define _DKSYNC2STATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "_DKSyncType.h"
#import "_DKSyncCompositeOperation.h"

@interface _DKSync2State : NSObject {
    BOOL _isPending;
    _DKSyncType *_type;
    _DKSyncCompositeOperation *_parent;
    NSMutableArray *_completions;
}






@end


#endif