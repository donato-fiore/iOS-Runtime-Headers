// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRUIBUTTONEVENT_H
#define TVRUIBUTTONEVENT_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface TVRUIButtonEvent : NSObject

@property (readonly, nonatomic) NSInteger buttonType; // ivar: _buttonType
@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType
@property (readonly, copy, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(id)createButtonEvent:(NSInteger)arg0 buttonType:(NSInteger)arg1 ;
-(id)_initWithButtonType:(NSInteger)arg0 eventType:(NSInteger)arg1 ;
-(id)description;


@end


#endif