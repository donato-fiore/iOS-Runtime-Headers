// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AASECONDARYAUTHENTICATIONRESPONSE_H
#define AASECONDARYAUTHENTICATIONRESPONSE_H

@class NSData, NSString;


#import "AAResponse.h"

@interface AASecondaryAuthenticationResponse : AAResponse

@property (readonly, nonatomic) NSData *buddyML; // ivar: _buddyML
@property (readonly, nonatomic) NSString *secondFactorToken; // ivar: _secondFactorToken


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif