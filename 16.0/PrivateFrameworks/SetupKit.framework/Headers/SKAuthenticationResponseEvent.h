// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKAUTHENTICATIONRESPONSEEVENT_H
#define SKAUTHENTICATIONRESPONSEEVENT_H

@class NSString;


#import "SKEvent.h"

@interface SKAuthenticationResponseEvent : SKEvent

@property (readonly, copy, nonatomic) NSString *password; // ivar: _password


-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithPassword:(id)arg0 ;


@end


#endif