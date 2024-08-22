// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DADSTATUSREPORTAGGREGATOR_H
#define DADSTATUSREPORTAGGREGATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface DADStatusReportAggregator : NSObject {
    int _numOutstandingReports;
    id *_completionBlock;
    NSMutableDictionary *_persistentUUIDToStatusReport;
    BOOL _finished;
}




-(id)initWithStatusReports:(id)arg0 numOutstandingReports:(int)arg1 timeout:(CGFloat)arg2 completionBlock:(id)arg3 ;
-(void)_coalesceAndReport;
-(void)noteAdditionalReportDicts:(id)arg0 ;


@end


#endif