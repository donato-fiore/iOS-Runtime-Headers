// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ANESHAREDWAITEVENT_H
#define _ANESHAREDWAITEVENT_H

@class IOSurfaceSharedEvent;

#import <Foundation/Foundation.h>


@interface _ANESharedWaitEvent : NSObject

@property (readonly, nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly, nonatomic) IOSurfaceSharedEvent *sharedEvent; // ivar: _sharedEvent
@property (readonly, nonatomic) NSUInteger value; // ivar: _value


+(id)new;
+(id)waitEventWithValue:(NSUInteger)arg0 sharedEvent:(id)arg1 ;
+(id)waitEventWithValue:(NSUInteger)arg0 sharedEvent:(id)arg1 eventType:(NSUInteger)arg2 ;
-(id)description;
-(id)init;
-(id)initWithValue:(NSUInteger)arg0 sharedEvent:(id)arg1 eventType:(NSUInteger)arg2 ;


@end


#endif