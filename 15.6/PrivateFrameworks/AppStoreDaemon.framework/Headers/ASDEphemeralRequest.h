// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDEPHEMERALREQUEST_H
#define ASDEPHEMERALREQUEST_H



#import "ASDRequest.h"
#import "ASDRequestOptions.h"

@interface ASDEphemeralRequest : ASDRequest

@property (copy) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy, nonatomic) ASDRequestOptions *options; // ivar: _options


+(BOOL)supportsSecureCoding;
+(NSInteger)requestType;
-(id)_initWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_callCompletionHandlerWithResponse:(id)arg0 ;
-(void)_failCompletionHandlerWithError:(id)arg0 ;
-(void)_startWithCompletionHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)receiveResponse:(id)arg0 ;


@end


#endif