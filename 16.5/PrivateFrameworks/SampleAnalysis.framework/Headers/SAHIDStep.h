// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAHIDSTEP_H
#define SAHIDSTEP_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SATimestamp.h"

@interface SAHIDStep : NSObject {
    int _pid;
    SATimestamp *_timestamp;
}


@property (readonly) unsigned int debugid; // ivar: _debugid
@property (readonly) NSString *debugidString;
@property (readonly) int pid;
@property (readonly) NSUInteger tid; // ivar: _tid
@property (readonly) SATimestamp *timestamp;


-(id)debugDescription;


@end


#endif