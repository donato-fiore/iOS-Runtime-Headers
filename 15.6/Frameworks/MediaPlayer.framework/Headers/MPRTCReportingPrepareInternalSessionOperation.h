// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPRTCREPORTINGPREPAREINTERNALSESSIONOPERATION_H
#define MPRTCREPORTINGPREPAREINTERNALSESSIONOPERATION_H

@class NSDictionary, NSString;


#import "MPAsyncOperation.h"

@interface MPRTCReportingPrepareInternalSessionOperation : MPAsyncOperation

@property (copy, nonatomic) NSDictionary *additionalUserInfo; // ivar: _additionalUserInfo
@property (copy, nonatomic) NSString *clientName; // ivar: _clientName
@property (nonatomic) int clientType; // ivar: _clientType
@property (nonatomic) NSInteger clientVersion; // ivar: _clientVersion
@property (retain, nonatomic) id *hierarchyToken; // ivar: _hierarchyToken
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (nonatomic) NSInteger sessionID; // ivar: _sessionID


-(void)execute;


@end


#endif