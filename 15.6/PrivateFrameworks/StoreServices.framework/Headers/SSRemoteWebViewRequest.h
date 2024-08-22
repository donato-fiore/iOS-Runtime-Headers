// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSREMOTEWEBVIEWREQUEST_H
#define SSREMOTEWEBVIEWREQUEST_H

@class NSString;


#import "SSRequest.h"

@interface SSRemoteWebViewRequest : SSRequest

@property (retain, nonatomic) NSString *URLString; // ivar: _URLString
@property (retain, nonatomic) NSString *referrer; // ivar: _referrer


-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif