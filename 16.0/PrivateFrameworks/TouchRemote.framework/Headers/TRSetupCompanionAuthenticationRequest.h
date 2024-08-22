// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRSETUPCOMPANIONAUTHENTICATIONREQUEST_H
#define TRSETUPCOMPANIONAUTHENTICATIONREQUEST_H

@class ACAccount, AKDevice, NSSet;


#import "TRRequestMessage.h"

@interface TRSetupCompanionAuthenticationRequest : TRRequestMessage

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) AKDevice *companionDevice; // ivar: _companionDevice
@property (nonatomic) BOOL shouldUseAIDA; // ivar: _shouldUseAIDA
@property (retain, nonatomic) NSSet *targetedAccountServices; // ivar: _targetedAccountServices


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif