// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPERSISTEDNETWORKBEHAVIOR_H
#define TRIPERSISTEDNETWORKBEHAVIOR_H

@class TRIPBMessage;



@interface TRIPersistedNetworkBehavior : TRIPBMessage

@property (nonatomic) BOOL allowsCellular;
@property (nonatomic) BOOL hasAllowsCellular;
@property (nonatomic) BOOL hasNetworkBehavior;
@property (nonatomic) int networkBehavior;


+(id)descriptor;


@end


#endif