// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKEVENTTYPESTATSCOUNTER_H
#define _DKEVENTTYPESTATSCOUNTER_H

@protocol _DKEventStatsCounterInternalProperty;

#import <Foundation/Foundation.h>

#import "_DKEventStatsCounterInternal.h"

@interface _DKEventTypeStatsCounter : NSObject <_DKEventStatsCounterInternalProperty>



@property (retain) _DKEventStatsCounterInternal *internal; // ivar: _internal


-(id)eventName;
-(id)eventType;
-(id)typeValues;


@end


#endif