// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCORRELATIONMATRIXGUARDEDDATA_H
#define ATXCORRELATIONMATRIXGUARDEDDATA_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXCorrelationMatrixGuardedData : NSObject {
    NSMutableDictionary *_correlationMatrix;
    NSMutableDictionary *_locationTotals;
}




-(id)init;
-(id)initWithCorrelationMatrix:(id)arg0 locationTotals:(id)arg1 ;


@end


#endif