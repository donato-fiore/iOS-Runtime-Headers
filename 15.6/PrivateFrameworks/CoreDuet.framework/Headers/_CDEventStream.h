// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDEVENTSTREAM_H
#define _CDEVENTSTREAM_H


#import <Foundation/Foundation.h>

#import "_CDEventStreamProperties.h"

@interface _CDEventStream : NSObject

@property (readonly) _CDEventStreamProperties *eventStreamProperties; // ivar: eventStreamProperties


+(id)eventStreamWithProperties:(id)arg0 ;
-(id)description;
-(id)initWithProperties:(id)arg0 ;


@end


#endif