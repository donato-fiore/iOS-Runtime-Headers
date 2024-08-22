// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASYNCSERVERSYNCDATARESPONSE_H
#define SASYNCSERVERSYNCDATARESPONSE_H

@class NSString, NSArray;


#import "SABaseClientBoundCommand.h"

@interface SASyncServerSyncDataResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *assistantId;
@property (nonatomic) NSInteger batchNumber;
@property (copy, nonatomic) NSArray *dataBatch;
@property (nonatomic) BOOL lastBatch;
@property (copy, nonatomic) NSString *responseCode;
@property (copy, nonatomic) NSString *serverGeneration;
@property (copy, nonatomic) NSString *syncType;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif