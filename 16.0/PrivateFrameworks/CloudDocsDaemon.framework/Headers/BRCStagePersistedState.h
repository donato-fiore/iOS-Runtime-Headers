// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCSTAGEPERSISTEDSTATE_H
#define BRCSTAGEPERSISTEDSTATE_H



#import "BRCPersistedState.h"

@interface BRCStagePersistedState : BRCPersistedState {
    NSInteger _latestGCStartTime;
}




+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg0 options:(id)arg1 ;
-(NSInteger)timeSinceLatestGCStartTime;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLatestGCStartTime:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif