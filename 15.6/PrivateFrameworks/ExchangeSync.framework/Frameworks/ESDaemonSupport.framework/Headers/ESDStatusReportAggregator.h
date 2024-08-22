// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ESDSTATUSREPORTAGGREGATOR_H
#define ESDSTATUSREPORTAGGREGATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ESDStatusReportAggregator : NSObject {
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