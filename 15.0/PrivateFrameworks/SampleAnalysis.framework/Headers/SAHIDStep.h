// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAHIDSTEP_H
#define SAHIDSTEP_H


#import <Foundation/Foundation.h>

#import "SATimestamp.h"

@interface SAHIDStep : NSObject {
    SATimestamp *_timestamp;
}


@property (readonly) unsigned int debugid; // ivar: _debugid
@property (readonly) int pid; // ivar: _pid
@property (readonly) NSUInteger tid; // ivar: _tid
@property (readonly) SATimestamp *timestamp;


-(id)debugDescription;


@end


#endif