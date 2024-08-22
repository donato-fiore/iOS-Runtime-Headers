// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKACHIEVEMENTCHALLENGEINTERNAL_H
#define GKACHIEVEMENTCHALLENGEINTERNAL_H



#import "GKChallengeInternal.h"
#import "GKAchievementInternal.h"

@interface GKAchievementChallengeInternal : GKChallengeInternal

@property (copy, nonatomic) GKAchievementInternal *achievement; // ivar: _achievement


+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(NSUInteger)type;
-(id)serverRepresentationForReceivingPlayer:(id)arg0 ;
-(id)titleText;


@end


#endif