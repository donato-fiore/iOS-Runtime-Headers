// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTRIALWRAPPERGUARDEDDATA_H
#define PPTRIALWRAPPERGUARDEDDATA_H

@class TRITrackingId, NSMutableArray, NSMutableDictionary, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface PPTrialWrapperGuardedData : NSObject {
    TRITrackingId *trackingId;
    NSMutableArray *notificationTokens;
    NSMutableDictionary *pathOverrides;
    NSDate *mostRecentUpdateDate;
    NSString *concatenatedTreatmentNames;
    unsigned int treatmentsHash;
}






@end


#endif