// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDIAGNOSTICLOGSCLUSTERRETRIEVELOGSREQUESTPARAMS_H
#define CHIPDIAGNOSTICLOGSCLUSTERRETRIEVELOGSREQUESTPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface CHIPDiagnosticLogsClusterRetrieveLogsRequestParams : NSObject

@property (retain, nonatomic) NSNumber *intent; // ivar: _intent
@property (retain, nonatomic) NSNumber *requestedProtocol; // ivar: _requestedProtocol
@property (retain, nonatomic) NSData *transferFileDesignator; // ivar: _transferFileDesignator


-(id)init;


@end


#endif