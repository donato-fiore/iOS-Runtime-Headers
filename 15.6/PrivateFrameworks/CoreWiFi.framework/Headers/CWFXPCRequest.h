// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFXPCREQUEST_H
#define CWFXPCREQUEST_H

@class NSBlockOperation, NSUUID, NSDictionary, NSDate;


#import "CWFRequestParameters.h"

@interface CWFXPCRequest : NSBlockOperation

@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property BOOL didSendResponse; // ivar: _didSendResponse
@property (copy, nonatomic) NSDictionary *info; // ivar: _info
@property (copy, nonatomic) NSDate *receivedAt; // ivar: _receivedAt
@property (copy, nonatomic) CWFRequestParameters *requestParameters; // ivar: _requestParameters
@property (copy, nonatomic) id *response; // ivar: _response
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)description;
-(id)init;


@end


#endif