// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BMSTREAMSACCESSTRACKERGUARDEDDATA_H
#define _BMSTREAMSACCESSTRACKERGUARDEDDATA_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _BMStreamsAccessTrackerGuardedData : NSObject {
    NSMutableSet *_loggedReads;
    NSMutableSet *_loggedWrites;
    NSMutableDictionary *_cachedSandboxCheckResults;
}




-(id)init;


@end


#endif