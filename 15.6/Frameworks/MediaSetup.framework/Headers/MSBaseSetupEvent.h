// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSBASESETUPEVENT_H
#define MSBASESETUPEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MSBaseSetupEvent : NSObject

@property (retain, nonatomic) NSString *eventName; // ivar: _eventName


-(id)encoded;
-(id)init;


@end


#endif