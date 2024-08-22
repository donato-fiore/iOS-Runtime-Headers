// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSUGGESTEDEVENT_H
#define PPSUGGESTEDEVENT_H

@class NSString;


#import "PPScoredEvent.h"

@interface PPSuggestedEvent : PPScoredEvent

@property (readonly, nonatomic) unsigned char category; // ivar: _category
@property (readonly, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPPEvent:(id)arg0 ;
-(id)initWithPPEvent:(id)arg0 score:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif