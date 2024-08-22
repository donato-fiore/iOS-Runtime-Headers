// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATACOLLECTORRECORD_H
#define HDDATACOLLECTORRECORD_H

@protocol HDDataCollector;

#import <Foundation/Foundation.h>

#import "HDDataCollectorState.h"

@interface HDDataCollectorRecord : NSObject

@property (weak, nonatomic) NSObject<HDDataCollector> *collector; // ivar: _collector
@property (retain, nonatomic) HDDataCollectorState *state; // ivar: _state


-(id)description;


@end


#endif