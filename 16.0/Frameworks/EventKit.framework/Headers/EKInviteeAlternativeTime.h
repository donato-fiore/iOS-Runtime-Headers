// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKINVITEEALTERNATIVETIME_H
#define EKINVITEEALTERNATIVETIME_H

@class NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface EKInviteeAlternativeTime : NSObject

@property (retain, nonatomic) NSArray *conflictedParticipants; // ivar: _conflictedParticipants
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)description;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 conflictedParticipants:(id)arg2 ;


@end


#endif