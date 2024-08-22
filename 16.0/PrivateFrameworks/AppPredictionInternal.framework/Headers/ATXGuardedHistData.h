// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXGUARDEDHISTDATA_H
#define ATXGUARDEDHISTDATA_H


#import <Foundation/Foundation.h>

#import "ATXHistogramData.h"

@interface ATXGuardedHistData : NSObject {
    ATXHistogramData *_histogramData;
    unsigned short _bucketCount;
    BOOL _filter;
}




-(id)initWithHistogramData:(id)arg0 bucketCount:(unsigned short)arg1 filter:(BOOL)arg2 ;


@end


#endif