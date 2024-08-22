// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BMSTREAMSACCESSTRACKERGUARDEDDATA_H
#define _BMSTREAMSACCESSTRACKERGUARDEDDATA_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _BMStreamsAccessTrackerGuardedData : NSObject {
    NSMutableSet *_streamsCheckedForReadEntitlements;
    NSMutableSet *_streamsCheckedForWriteEntitlements;
    NSMutableDictionary *_cachedSandboxCheckResults;
}




-(id)init;


@end


#endif