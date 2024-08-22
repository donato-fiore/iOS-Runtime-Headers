// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHRAFIBBURDENHISTOGRAMQUERYSERVER_H
#define HDHRAFIBBURDENHISTOGRAMQUERYSERVER_H

@class HDQueryServer;


#import "HKHRAFibBurdenAnalyzer.h"

@interface HDHRAFibBurdenHistogramQueryServer : HDQueryServer {
    HKHRAFibBurdenAnalyzer *_analyzer;
}




+(Class)queryClass;
+(id)requiredEntitlements;
-(id)_makeEmptyHistogramResult;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)objectTypes;
-(void)_queue_start;


@end


#endif