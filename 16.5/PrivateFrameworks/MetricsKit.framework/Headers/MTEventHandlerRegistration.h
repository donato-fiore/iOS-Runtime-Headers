// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTEVENTHANDLERREGISTRATION_H
#define MTEVENTHANDLERREGISTRATION_H

@class NSArray, NSString;


#import "MTObject.h"
#import "MTEventHandler.h"

@interface MTEventHandlerRegistration : MTObject

@property (retain, nonatomic) NSArray *eventData; // ivar: _eventData
@property (retain, nonatomic) MTEventHandler *eventHandler; // ivar: _eventHandler
@property (retain, nonatomic) Class eventHandlerClass; // ivar: _eventHandlerClass
@property (retain, nonatomic) NSString *registeredName; // ivar: _registeredName


-(id)initWithMetricsKit:(id)arg0 name:(id)arg1 class:(Class)arg2 eventData:(id)arg3 ;


@end


#endif