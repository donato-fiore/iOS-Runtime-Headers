// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCLEARINPUTFEEDBACK_H
#define SFCLEARINPUTFEEDBACK_H



#import "SFFeedback.h"

@interface SFClearInputFeedback : SFFeedback

@property (nonatomic) NSUInteger triggerEvent; // ivar: _triggerEvent


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif