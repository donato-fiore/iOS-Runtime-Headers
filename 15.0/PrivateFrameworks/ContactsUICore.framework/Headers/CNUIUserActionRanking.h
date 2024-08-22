// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUIUSERACTIONRANKING_H
#define CNUIUSERACTIONRANKING_H

@class NSString;
@protocol CNUIUserActionRanking, CNUIInteractionAdvisor;

#import <Foundation/Foundation.h>


@interface CNUIUserActionRanking : NSObject <CNUIUserActionRanking>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNUIInteractionAdvisor> *interactionAdvisor; // ivar: _interactionAdvisor
@property (readonly) Class superclass;


+(id)advisorSettingsForIdentifyingMostRecentAction:(id)arg0 actionType:(id)arg1 ;
+(id)advisorSettingsForSortingAddresses:(id)arg0 actionType:(id)arg1 ;
+(id)constrainMechanismsForActionType:(id)arg0 ;
+(id)sortKeyWithUsername:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)init;
-(id)initWithInteractionAdvisor:(id)arg0 ;
-(id)selectMostRecentActionFromItems:(id)arg0 ;
-(id)selectRecentActionItems:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)sortActionItems:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)sortKeysByRankingAddresses:(id)arg0 actionType:(id)arg1 scheduler:(id)arg2 ;


@end


#endif