// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKAUTHENTICATIONPRESENTEVENT_H
#define SKAUTHENTICATIONPRESENTEVENT_H

@class NSString;


#import "SKEvent.h"

@interface SKAuthenticationPresentEvent : SKEvent

@property (readonly, copy, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) int passwordType; // ivar: _passwordType


-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithPasswordType:(int)arg0 password:(id)arg1 ;


@end


#endif