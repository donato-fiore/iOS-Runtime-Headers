// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRCBUTTONEVENT_H
#define TVRCBUTTONEVENT_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TVRCButton.h"

@interface TVRCButtonEvent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) TVRCButton *button; // ivar: _button
@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType
@property (readonly, copy, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)buttonEventForButton:(id)arg0 eventType:(NSInteger)arg1 ;
-(id)_init;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif