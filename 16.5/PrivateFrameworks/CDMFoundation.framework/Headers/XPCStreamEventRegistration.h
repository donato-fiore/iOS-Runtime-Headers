// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XPCSTREAMEVENTREGISTRATION_H
#define XPCSTREAMEVENTREGISTRATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface XPCStreamEventRegistration : NSObject

@property (readonly, nonatomic) NSString *eventName; // ivar: _eventName
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) NSString *streamName; // ivar: _streamName


+(id)registrationWithStream:(id)arg0 eventName:(id)arg1 handler:(id)arg2 ;
-(id)_initWithStream:(id)arg0 eventName:(id)arg1 handler:(id)arg2 ;


@end


#endif