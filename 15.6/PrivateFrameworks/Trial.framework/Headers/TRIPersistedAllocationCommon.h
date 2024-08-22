// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPERSISTEDALLOCATIONCOMMON_H
#define TRIPERSISTEDALLOCATIONCOMMON_H

@class TRIPBMessage, TRIPBTimestamp;



@interface TRIPersistedAllocationCommon : TRIPBMessage

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) TRIPBTimestamp *timestamp;
@property (nonatomic) unsigned int type;


+(id)descriptor;


@end


#endif