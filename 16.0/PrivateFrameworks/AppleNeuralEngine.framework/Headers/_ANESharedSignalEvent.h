// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ANESHAREDSIGNALEVENT_H
#define _ANESHAREDSIGNALEVENT_H

@class IOSurfaceSharedEvent;

#import <Foundation/Foundation.h>


@interface _ANESharedSignalEvent : NSObject

@property (readonly, nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly, nonatomic) IOSurfaceSharedEvent *sharedEvent; // ivar: _sharedEvent
@property (readonly, nonatomic) unsigned int symbolIndex; // ivar: _symbolIndex
@property (readonly, nonatomic) NSUInteger value; // ivar: _value


+(id)new;
+(id)signalEventWithValue:(NSUInteger)arg0 symbolIndex:(unsigned int)arg1 eventType:(NSUInteger)arg2 sharedEvent:(id)arg3 ;
-(id)description;
-(id)init;
-(id)initWithValue:(NSUInteger)arg0 symbolIndex:(unsigned int)arg1 eventType:(NSUInteger)arg2 sharedEvent:(id)arg3 ;
-(id)waitEvent;


@end


#endif