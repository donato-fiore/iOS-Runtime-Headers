// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLMCLICKEVENT_H
#define CLMCLICKEVENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLMClickEvent : NSObject <NSSecureCoding>



@property NSUInteger absoluteTime; // ivar: _absoluteTime
@property NSInteger eventType; // ivar: _eventType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif