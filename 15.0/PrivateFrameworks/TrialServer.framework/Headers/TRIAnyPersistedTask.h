// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIANYPERSISTEDTASK_H
#define TRIANYPERSISTEDTASK_H

@class TRIPBMessage, NSData;



@interface TRIAnyPersistedTask : TRIPBMessage

@property (nonatomic) BOOL hasSerialized;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSData *serialized;
@property (nonatomic) int type;


+(id)descriptor;


@end


#endif