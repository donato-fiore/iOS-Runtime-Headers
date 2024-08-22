// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRSETUPNETWORKREQUEST_H
#define TRSETUPNETWORKREQUEST_H

@class NSString;


#import "TRRequestMessage.h"

@interface TRSetupNetworkRequest : TRRequestMessage

@property (copy, nonatomic) NSString *networkPassword; // ivar: _networkPassword
@property (copy, nonatomic) NSString *networkSSID; // ivar: _networkSSID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif