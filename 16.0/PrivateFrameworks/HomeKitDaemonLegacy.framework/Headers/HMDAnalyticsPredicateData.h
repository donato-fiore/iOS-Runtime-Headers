// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDANALYTICSPREDICATEDATA_H
#define HMDANALYTICSPREDICATEDATA_H

@class HMFObject, NSMutableArray;



@interface HMDAnalyticsPredicateData : HMFObject {
    BOOL _containsCalendarTime;
    BOOL _containsCharacteristicValue;
    BOOL _containsSignificantTime;
    BOOL _containsSignificantTimeOffset;
    NSMutableArray *_presenceEvents;
}




-(id)init;


@end


#endif