// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPERSISTEDTASKCAPABILITYMODIFIER_H
#define TRIPERSISTEDTASKCAPABILITYMODIFIER_H

@class TRIPBMessage;



@interface TRIPersistedTaskCapabilityModifier : TRIPBMessage

@property (nonatomic) NSUInteger add;
@property (nonatomic) BOOL hasAdd;
@property (nonatomic) BOOL hasRemove;
@property (nonatomic) NSUInteger remove;


+(id)descriptor;


@end


#endif