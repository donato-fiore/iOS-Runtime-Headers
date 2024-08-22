// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICAUTHORIZEMACHINEURLREQUEST_H
#define ICAUTHORIZEMACHINEURLREQUEST_H

@class NSString, NSData;


#import "ICStoreURLRequest.h"

@interface ICAuthorizeMachineURLRequest : ICStoreURLRequest

@property (copy, nonatomic) NSString *keybagPath; // ivar: _keybagPath
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (copy, nonatomic) NSData *tokenData; // ivar: _tokenData


-(void)buildStoreURLRequestWithURLRequest:(id)arg0 builderProperties:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif