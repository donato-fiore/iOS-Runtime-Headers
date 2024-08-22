// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMJSONCOMMAND_H
#define FMJSONCOMMAND_H

@class NSDictionary, NSError;
@protocol OS_dispatch_queue;


#import "FMCommandBase.h"

@interface FMJSONCommand : FMCommandBase

@property (nonatomic) BOOL _hasParsedResponseBody; // ivar: __hasParsedResponseBody
@property (retain, nonatomic) NSDictionary *_requestBodyDict; // ivar: __requestBodyDict
@property (retain, nonatomic) NSDictionary *_responseBodyDict; // ivar: __responseBodyDict
@property (readonly, nonatomic) NSDictionary *jsonResponseDictionary;
@property (retain, nonatomic) NSError *jsonResponseParseError; // ivar: _jsonResponseParseError
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // ivar: _responseQueue
@property (readonly, nonatomic) NSDictionary *serverAlertInfo;


-(id)body;
-(id)headers;
-(id)init;
-(id)jsonBodyDictionary;
-(void)sendRequest;


@end


#endif