// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISTIMESTAMPEDEVENT_H
#define ISTIMESTAMPEDEVENT_H

@class SIOrderedEvent;

#import <Foundation/Foundation.h>


@interface ISTimestampedEvent : NSObject

@property (nonatomic, readonly) SIOrderedEvent *orderedEvent; // ivar: orderedEvent
@property (nonatomic, readonly) CGFloat timestamp; // ivar: timestamp


-(id)dictionaryRepresentation;
-(id)init;


@end


#endif