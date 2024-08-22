// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDIAGNOSTICLOGSCLUSTERRETRIEVELOGSRESPONSEPARAMS_H
#define CHIPDIAGNOSTICLOGSCLUSTERRETRIEVELOGSRESPONSEPARAMS_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPDiagnosticLogsClusterRetrieveLogsResponseParams : NSObject

@property (retain, nonatomic) NSData *content; // ivar: _content
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSNumber *timeSinceBoot; // ivar: _timeSinceBoot
@property (retain, nonatomic) NSNumber *timeStamp; // ivar: _timeStamp


-(id)init;


@end


#endif