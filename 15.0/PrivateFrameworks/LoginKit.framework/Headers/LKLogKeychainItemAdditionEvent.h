// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LKLOGKEYCHAINITEMADDITIONEVENT_H
#define LKLOGKEYCHAINITEMADDITIONEVENT_H

@class NSString;


#import "LKLogEvent.h"

@interface LKLogKeychainItemAdditionEvent : LKLogEvent

@property (readonly, nonatomic) NSString *keychainItemAdded; // ivar: _keychainItemAdded


+(id)eventFromLKLogEvent:(id)arg0 ;
-(id)dictionary;


@end


#endif