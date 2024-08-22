// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKSYNCURGENCYTRACKER_H
#define _DKSYNCURGENCYTRACKER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _DKSyncUrgencyTracker : NSObject {
    NSUInteger _urgency;
    NSMutableDictionary *_urgencies;
}




-(void)recomputeUrgency;


@end


#endif