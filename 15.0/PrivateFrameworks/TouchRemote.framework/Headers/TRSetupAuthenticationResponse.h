// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRSETUPAUTHENTICATIONRESPONSE_H
#define TRSETUPAUTHENTICATIONRESPONSE_H

@class NSError, NSSet;


#import "TRResponseMessage.h"

@interface TRSetupAuthenticationResponse : TRResponseMessage

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSSet *unauthenticatedAccountServices; // ivar: _unauthenticatedAccountServices


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif