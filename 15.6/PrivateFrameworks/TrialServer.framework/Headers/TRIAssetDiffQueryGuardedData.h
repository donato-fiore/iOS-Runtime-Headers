// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIASSETDIFFQUERYGUARDEDDATA_H
#define TRIASSETDIFFQUERYGUARDEDDATA_H

@class NSMutableDictionary, NSDate, NSError;

#import <Foundation/Foundation.h>


@interface TRIAssetDiffQueryGuardedData : NSObject {
    NSMutableDictionary *recordIdsForTargetAssetIds;
    NSDate *retryAfter;
    NSError *error;
}






@end


#endif