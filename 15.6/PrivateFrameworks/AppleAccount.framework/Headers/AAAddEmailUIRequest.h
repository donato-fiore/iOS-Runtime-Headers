// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAADDEMAILUIREQUEST_H
#define AAADDEMAILUIREQUEST_H

@class ACAccount;


#import "AARequest.h"

@interface AAAddEmailUIRequest : AARequest

@property (retain, nonatomic) ACAccount *account; // ivar: _account


-(id)initWithAccount:(id)arg0 ;
-(id)initWithURLString:(id)arg0 account:(id)arg1 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif