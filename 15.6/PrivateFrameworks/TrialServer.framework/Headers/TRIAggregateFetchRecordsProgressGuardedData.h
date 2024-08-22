// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIAGGREGATEFETCHRECORDSPROGRESSGUARDEDDATA_H
#define TRIAGGREGATEFETCHRECORDSPROGRESSGUARDEDDATA_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TRIAggregateFetchRecordsProgressGuardedData : NSObject {
    NSMutableDictionary *perRecordProgress;
    NSUInteger expectedTotalBytes;
    NSUInteger actualBytesTransferred;
}






@end


#endif