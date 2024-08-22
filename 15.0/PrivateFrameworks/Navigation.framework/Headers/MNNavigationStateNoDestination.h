// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNNAVIGATIONSTATENODESTINATION_H
#define MNNAVIGATIONSTATENODESTINATION_H



#import "MNNavigationState.h"

@interface MNNavigationStateNoDestination : MNNavigationState



-(NSUInteger)desiredLocationProviderType;
-(NSUInteger)type;
-(void)setRoutesForPreview:(id)arg0 selectedRouteIndex:(NSUInteger)arg1 ;
-(void)startNavigationWithDetails:(id)arg0 activeBlock:(id)arg1 ;


@end


#endif