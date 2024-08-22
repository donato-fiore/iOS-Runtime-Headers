// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAKPERFSTATE_H
#define SAKPERFSTATE_H


#import <Foundation/Foundation.h>

#import "SATimestamp.h"

@interface SAKPerfState : NSObject {
    char * _onCoreBitArray;
    unsigned int _numCores;
    BOOL _mostRecentSampleIsPET;
    int _petTimerID;
    *ktrace_session _session;
    NSUInteger _latestMachAbsTimeParsed;
    SATimestamp *_mostRecentSampleTimestamp;
}




-(void)dealloc;


@end


#endif