// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKINVITEETIMESPAN_H
#define EKINVITEETIMESPAN_H

@class NSMutableArray, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EKInviteeTimeSpan : NSObject <NSCopying>



@property (retain, nonatomic) NSMutableArray *conflictedParticipants; // ivar: _conflictedParticipants
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif