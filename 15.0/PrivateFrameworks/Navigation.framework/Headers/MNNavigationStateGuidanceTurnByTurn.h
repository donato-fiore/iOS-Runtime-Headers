// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNNAVIGATIONSTATEGUIDANCETURNBYTURN_H
#define MNNAVIGATIONSTATEGUIDANCETURNBYTURN_H



#import "MNNavigationStateGuidance.h"

@interface MNNavigationStateGuidanceTurnByTurn : MNNavigationStateGuidance



-(NSUInteger)type;
-(void)postEnterState;
-(void)setFullGuidanceMode:(BOOL)arg0 ;
-(void)setGuidanceType:(NSUInteger)arg0 ;


@end


#endif