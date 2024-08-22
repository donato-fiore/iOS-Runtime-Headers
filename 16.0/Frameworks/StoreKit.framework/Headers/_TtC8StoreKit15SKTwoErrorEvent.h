// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8STOREKIT15SKTWOERROREVENT_H
#define _TTC8STOREKIT15SKTWOERROREVENT_H

@class NSString;


#import "SKBaseErrorEvent.h"

@interface _TtC8StoreKit15SKTwoErrorEvent : SKBaseErrorEvent

@property (nonatomic, readonly) NSString *eventName;


-(id)createPayload;
-(id)init;


@end


#endif