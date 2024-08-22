// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CONTEXTSYNCWAKESTATE_H
#define _CONTEXTSYNCWAKESTATE_H

@class NSDate, NSNumber;

#import <Foundation/Foundation.h>


@interface _ContextSyncWakeState : NSObject

@property (retain, nonatomic) NSDate *lastChangedDate; // ivar: _lastChangedDate
@property (retain, nonatomic) NSNumber *wakeState; // ivar: _wakeState


+(id)wakeState:(BOOL)arg0 ;


@end


#endif