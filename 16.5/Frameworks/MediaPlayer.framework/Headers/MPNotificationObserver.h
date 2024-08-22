// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPNOTIFICATIONOBSERVER_H
#define MPNOTIFICATIONOBSERVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MPNotificationObserver : NSObject {
    NSInteger _handlerCallCount;
}


@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, weak, nonatomic) id *object; // ivar: _object


-(id)description;
-(id)initWithName:(id)arg0 object:(id)arg1 handler:(id)arg2 ;
-(void)_handleNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif