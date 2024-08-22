// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRSETUPNETWORKRESPONSE_H
#define TRSETUPNETWORKRESPONSE_H



#import "TRResponseMessage.h"

@interface TRSetupNetworkResponse : TRResponseMessage

@property (nonatomic) BOOL hasNetwork; // ivar: _hasNetwork


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif