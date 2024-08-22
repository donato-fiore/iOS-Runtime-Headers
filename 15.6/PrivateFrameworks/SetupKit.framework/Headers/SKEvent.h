// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKEVENT_H
#define SKEVENT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface SKEvent : NSObject

@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) int eventType; // ivar: _eventType


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithEventType:(int)arg0 ;
-(id)initWithEventType:(int)arg0 error:(id)arg1 ;


@end


#endif