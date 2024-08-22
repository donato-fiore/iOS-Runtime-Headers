// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMEEVENT_H
#define HMEEVENT_H

@class NSData;

#import <Foundation/Foundation.h>

#import "HMEEventMetadata.h"

@interface HMEEvent : NSObject

@property (readonly, copy) NSData *encodedData;
@property (readonly, copy, nonatomic) NSData *eventData; // ivar: _eventData
@property (readonly) HMEEventMetadata *eventMetadata; // ivar: _eventMetadata


+(id)eventFromProtobuff:(id)arg0 ;
-(id)_initWithEventData:(id)arg0 metadata:(id)arg1 ;
-(id)description;
-(id)initWithEventData:(id)arg0 ;
-(id)initWithEventData:(id)arg0 metadata:(id)arg1 ;
-(id)initWithSubclassedEventMetadata:(id)arg0 ;
-(id)pbEvent;


@end


#endif