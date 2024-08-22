// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BYANALYTICSLAZYEVENT_H
#define BYANALYTICSLAZYEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BYAnalyticsLazyEvent : NSObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) id *payloadBlock; // ivar: _payloadBlock
@property (nonatomic) BOOL persist; // ivar: _persist


// +(id)eventWithName:(id)arg0 withPayloadBlock:(id)arg1 persist:(unk)arg2  ;
-(id)description;


@end


#endif