// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMPRIORITYNOTIFICATIONCENTERENTRY_H
#define CAMPRIORITYNOTIFICATIONCENTERENTRY_H


#import <Foundation/Foundation.h>


@interface CAMPriorityNotificationCenterEntry : NSObject

@property (retain, nonatomic) id *object; // ivar: _object
@property (weak, nonatomic) id *observer; // ivar: _observer
@property (nonatomic) SEL selector; // ivar: _selector


-(id)description;
-(id)initWithObserver:(id)arg0 selector:(SEL)arg1 object:(id)arg2 ;


@end


#endif