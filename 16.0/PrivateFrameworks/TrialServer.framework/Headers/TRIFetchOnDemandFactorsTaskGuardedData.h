// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIFETCHONDEMANDFACTORSTASKGUARDEDDATA_H
#define TRIFETCHONDEMANDFACTORSTASKGUARDEDDATA_H

@class NSMutableArray, NSDate, NSError, NSMutableSet;

#import <Foundation/Foundation.h>


@interface TRIFetchOnDemandFactorsTaskGuardedData : NSObject {
    NSMutableArray *fetchOperations;
    int overallStatus;
    NSDate *earliestRetryDate;
    NSError *fetchError;
    NSMutableSet *downloadableFactorNames;
}




-(id)description;


@end


#endif