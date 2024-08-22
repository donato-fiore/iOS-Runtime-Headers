// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPERSISTEDALLOCATIONSTATUSCURSOR_H
#define TRIPERSISTEDALLOCATIONSTATUSCURSOR_H

@class TRIPBMessage, TRIPBTimestamp;



@interface TRIPersistedAllocationStatusCursor : TRIPBMessage

@property (nonatomic) BOOL hasLowerBoundExclusive;
@property (retain, nonatomic) TRIPBTimestamp *lowerBoundExclusive;


+(id)descriptor;


@end


#endif