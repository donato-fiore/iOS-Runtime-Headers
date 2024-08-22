// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTAGENTNOTIFICATION_H
#define MTAGENTNOTIFICATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MTPowerAssertion.h"

@interface MTAgentNotification : NSObject

@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) MTPowerAssertion *powerAssertion; // ivar: _powerAssertion
@property (nonatomic) NSInteger type; // ivar: _type


+(id)notificationWithType:(NSInteger)arg0 name:(id)arg1 ;
+(id)notificationWithType:(NSInteger)arg0 name:(id)arg1 powerAssertionTimeout:(CGFloat)arg2 ;
-(id)initWithType:(NSInteger)arg0 name:(id)arg1 powerAssertionTimeout:(CGFloat)arg2 ;
-(void)dealloc;
-(void)releaseAssertion;


@end


#endif