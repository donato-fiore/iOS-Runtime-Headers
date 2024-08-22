// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRSETUPACTIVATIONRESPONSE_H
#define TRSETUPACTIVATIONRESPONSE_H

@class NSError;


#import "TRResponseMessage.h"

@interface TRSetupActivationResponse : TRResponseMessage

@property (nonatomic) BOOL activated; // ivar: _activated
@property (retain, nonatomic) NSError *error; // ivar: _error


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif