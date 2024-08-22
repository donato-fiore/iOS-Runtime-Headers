// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTRIPEVENT_H
#define PPTRIPEVENT_H

@class NSArray;


#import "PPScoredEvent.h"

@interface PPTripEvent : PPScoredEvent

@property (readonly, nonatomic) NSArray *tripParts; // ivar: _tripParts


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)destinations;
-(id)destinationsBasedTitle;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 tripParts:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif