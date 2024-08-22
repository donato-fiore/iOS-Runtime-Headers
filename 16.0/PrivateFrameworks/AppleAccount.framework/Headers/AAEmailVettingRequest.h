// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAEMAILVETTINGREQUEST_H
#define AAEMAILVETTINGREQUEST_H

@class ACAccount;


#import "AARequest.h"

@interface AAEmailVettingRequest : AARequest

@property (retain, nonatomic) ACAccount *account; // ivar: _account


-(id)initWithAccount:(id)arg0 ;
-(id)initWithURLString:(id)arg0 account:(id)arg1 ;
-(id)urlRequest;


@end


#endif