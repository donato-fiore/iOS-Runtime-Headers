// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBEVENTQUEUEEVENT_H
#define RBEVENTQUEUEEVENT_H


#import <Foundation/Foundation.h>


@interface RBEventQueueEvent : NSObject

@property (copy, nonatomic) id *action; // ivar: _action
@property (retain, nonatomic) id *context; // ivar: _context
@property (nonatomic) CGFloat eventTime; // ivar: _eventTime


-(NSInteger)compare:(id)arg0 ;
-(id)description;


@end


#endif