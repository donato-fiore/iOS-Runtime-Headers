// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIFETCHONDEMANDFACTORSTASKGUARDEDDATA_H
#define TRIFETCHONDEMANDFACTORSTASKGUARDEDDATA_H

@class NSMutableArray, NSDate, NSError;

#import <Foundation/Foundation.h>


@interface TRIFetchOnDemandFactorsTaskGuardedData : NSObject {
    NSMutableArray *fetchOperations;
    int overallStatus;
    NSDate *earliestRetryDate;
    NSError *fetchError;
}




-(id)description;


@end


#endif