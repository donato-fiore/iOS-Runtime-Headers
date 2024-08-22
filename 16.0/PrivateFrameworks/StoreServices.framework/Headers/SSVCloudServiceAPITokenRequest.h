// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVCLOUDSERVICEAPITOKENREQUEST_H
#define SSVCLOUDSERVICEAPITOKENREQUEST_H

@class NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"

@interface SSVCloudServiceAPITokenRequest : SSRequest <SSXPCCoding>



@property (readonly, copy, nonatomic) NSString *clientToken; // ivar: _clientToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithClientToken:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithResponseBlock:(id)arg0 ;


@end


#endif