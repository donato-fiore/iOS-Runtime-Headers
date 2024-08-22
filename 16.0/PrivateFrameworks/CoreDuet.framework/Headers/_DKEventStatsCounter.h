// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKEVENTSTATSCOUNTER_H
#define _DKEVENTSTATSCOUNTER_H

@protocol _DKEventStatsCounterInternalProperty;

#import <Foundation/Foundation.h>

#import "_DKEventStatsCounterInternal.h"

@interface _DKEventStatsCounter : NSObject <_DKEventStatsCounterInternalProperty>



@property (retain) _DKEventStatsCounterInternal *internal; // ivar: _internal


-(id)eventName;


@end


#endif