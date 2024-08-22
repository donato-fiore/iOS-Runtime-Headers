// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDIAGNOSTICLOGSCLUSTERRETRIEVELOGSREQUESTPARAMS_H
#define MTRDIAGNOSTICLOGSCLUSTERRETRIEVELOGSREQUESTPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface MTRDiagnosticLogsClusterRetrieveLogsRequestParams : NSObject

@property (retain, nonatomic) NSNumber *intent; // ivar: _intent
@property (retain, nonatomic) NSNumber *requestedProtocol; // ivar: _requestedProtocol
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSData *transferFileDesignator; // ivar: _transferFileDesignator


-(id)description;
-(id)init;


@end


#endif