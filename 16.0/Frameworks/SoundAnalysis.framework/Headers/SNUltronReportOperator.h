// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNULTRONREPORTOPERATOR_H
#define SNULTRONREPORTOPERATOR_H

@class NSURL, NSDate, NSString, NSMutableArray;
@protocol SNOperator;

#import <Foundation/Foundation.h>

#import "SNRecordOperator.h"

@interface SNUltronReportOperator : NSObject <SNOperator>

 {
    SNRecordOperator *_recordOperator;
    NSURL *_destinationDirectory;
    NSDate *_date;
    NSString *_requestDescription;
    NSString *_buildVersion;
    NSMutableArray *_detectionResults;
}




-(id)init;
-(void)processInput:(id)arg0 portID:(id)arg1 downstreamHandler:(id)arg2 ;
-(void)processTerminationWithOptionalError:(id)arg0 portID:(id)arg1 downstreamHandler:(id)arg2 ;


@end


#endif