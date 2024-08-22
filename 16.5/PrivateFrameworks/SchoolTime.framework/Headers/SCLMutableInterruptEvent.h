// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLMUTABLEINTERRUPTEVENT_H
#define SCLMUTABLEINTERRUPTEVENT_H



#import "SCLInterruptEvent.h"
#import "SCLContact.h"

@interface SCLMutableInterruptEvent : SCLInterruptEvent

@property (copy, nonatomic) SCLContact *sender;
@property (nonatomic) BOOL shouldAlwaysInterrupt;
@property (nonatomic) NSUInteger type;
@property (nonatomic) NSUInteger urgency;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif