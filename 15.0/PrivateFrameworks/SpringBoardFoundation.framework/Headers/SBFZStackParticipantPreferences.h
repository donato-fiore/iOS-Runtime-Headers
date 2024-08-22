// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFZSTACKPARTICIPANTPREFERENCES_H
#define SBFZSTACKPARTICIPANTPREFERENCES_H

@class NSIndexSet, NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBFZStackParticipantPreferences : NSObject <NSCopying, BSDescriptionProviding>



@property (nonatomic) NSInteger activationPolicyForParticipantsBelow; // ivar: _activationPolicyForParticipantsBelow
@property (copy, nonatomic) NSIndexSet *assertIsAboveParticipantIdentifiers; // ivar: _assertIsAboveParticipantIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger homeAffordanceDrawingSuppression; // ivar: _homeAffordanceDrawingSuppression
@property (nonatomic) NSInteger homeGestureConsumption; // ivar: _homeGestureConsumption
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initInternal;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif