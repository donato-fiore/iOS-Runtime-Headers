// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSEVENTQUEUEEVENT_H
#define BSEVENTQUEUEEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BSEventQueueEvent : NSObject {
    id *_handler;
}


@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)eventWithName:(id)arg0 handler:(id)arg1 ;
-(id)description;
-(void)execute;


@end


#endif