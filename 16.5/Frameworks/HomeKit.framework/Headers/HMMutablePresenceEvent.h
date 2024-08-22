// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMUTABLEPRESENCEEVENT_H
#define HMMUTABLEPRESENCEEVENT_H

@class NSString, NSArray;


#import "HMPresenceEvent.h"

@interface HMMutablePresenceEvent : HMPresenceEvent

@property (nonatomic) NSUInteger presenceEventType;
@property (copy, nonatomic) NSString *presenceType;
@property (nonatomic) NSUInteger presenceUserType;
@property (retain, nonatomic) NSArray *users;




@end


#endif