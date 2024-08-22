// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSSETUPFAILEDEVENT_H
#define MSSETUPFAILEDEVENT_H

@class NSString;


#import "MSBaseSetupEvent.h"

@interface MSSetupFailedEvent : MSBaseSetupEvent

@property (retain, nonatomic) NSString *errorName; // ivar: _errorName
@property (retain, nonatomic) NSString *serviceID; // ivar: _serviceID


-(id)encoded;
-(id)initWithErrorNamed:(id)arg0 ;


@end


#endif