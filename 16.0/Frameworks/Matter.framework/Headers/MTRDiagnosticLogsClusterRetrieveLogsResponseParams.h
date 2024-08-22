// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDIAGNOSTICLOGSCLUSTERRETRIEVELOGSRESPONSEPARAMS_H
#define MTRDIAGNOSTICLOGSCLUSTERRETRIEVELOGSRESPONSEPARAMS_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRDiagnosticLogsClusterRetrieveLogsResponseParams : NSObject

@property (retain, nonatomic) NSData *content; // ivar: _content
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSNumber *timeSinceBoot; // ivar: _timeSinceBoot
@property (retain, nonatomic) NSNumber *timeStamp; // ivar: _timeStamp
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif