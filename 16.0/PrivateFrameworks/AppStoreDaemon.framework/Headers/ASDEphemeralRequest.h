// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDEPHEMERALREQUEST_H
#define ASDEPHEMERALREQUEST_H



#import "ASDRequest.h"
#import "ASDRequestOptions.h"

@interface ASDEphemeralRequest : ASDRequest {
    id *_completionHandler;
}


@property (readonly, copy, nonatomic) ASDRequestOptions *options; // ivar: _options


+(BOOL)supportsSecureCoding;
+(NSInteger)requestType;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)receiveResponse:(id)arg0 ;


@end


#endif