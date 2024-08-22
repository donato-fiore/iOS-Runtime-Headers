// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDIAGNOSTICLOGSCLUSTERRETRIEVELOGSRESPONSEPARAMS_H
#define MTRDIAGNOSTICLOGSCLUSTERRETRIEVELOGSRESPONSEPARAMS_H

@class NSData, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRDiagnosticLogsClusterRetrieveLogsResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSData *content;
@property (copy, nonatomic) NSData *logContent; // ivar: _logContent
@property (copy, nonatomic) NSNumber *status; // ivar: _status
@property (copy, nonatomic) NSNumber *timeSinceBoot; // ivar: _timeSinceBoot
@property (copy, nonatomic) NSNumber *timeStamp;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (copy, nonatomic) NSNumber *utcTimeStamp; // ivar: _utcTimeStamp


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif