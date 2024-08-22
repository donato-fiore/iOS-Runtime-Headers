// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LKLOGEVENT_H
#define LKLOGEVENT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface LKLogEvent : NSObject

@property (readonly, nonatomic) NSUInteger activityIdentifier; // ivar: _activityIdentifier
@property (readonly, nonatomic) NSString *composedMessage; // ivar: _composedMessage
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *process; // ivar: _process
@property (readonly, nonatomic) NSString *senderImagePath; // ivar: _senderImagePath


-(BOOL)containsMessage:(id)arg0 ;
-(BOOL)loggedByFramework:(id)arg0 ;
-(BOOL)loggedByProcess:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionary;


@end


#endif