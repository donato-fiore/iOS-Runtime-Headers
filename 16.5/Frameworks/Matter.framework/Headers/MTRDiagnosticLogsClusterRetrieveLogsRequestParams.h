// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDIAGNOSTICLOGSCLUSTERRETRIEVELOGSREQUESTPARAMS_H
#define MTRDIAGNOSTICLOGSCLUSTERRETRIEVELOGSREQUESTPARAMS_H

@class NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRDiagnosticLogsClusterRetrieveLogsRequestParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *intent; // ivar: _intent
@property (copy, nonatomic) NSNumber *requestedProtocol; // ivar: _requestedProtocol
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (copy, nonatomic) NSString *transferFileDesignator; // ivar: _transferFileDesignator


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif