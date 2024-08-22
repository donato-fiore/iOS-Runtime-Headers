// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIUSERACTIONDISAMBIGUATIONMODELER_H
#define CNUIUSERACTIONDISAMBIGUATIONMODELER_H

@protocol CNUIDefaultUserActionFetcher, CNUIUserActionDiscoveringEnvironment, CNUIUserActionRanking, CNUIUserActionTargetDiscovering;

#import <Foundation/Foundation.h>


@interface CNUIUserActionDisambiguationModeler : NSObject

@property (retain, nonatomic) NSObject<CNUIDefaultUserActionFetcher> *defaultActionFetcher; // ivar: _defaultActionFetcher
@property (retain, nonatomic) NSObject<CNUIUserActionDiscoveringEnvironment> *discoveringEnvironment; // ivar: _discoveringEnvironment
@property (retain, nonatomic) NSObject<CNUIUserActionRanking> *rankingHelper; // ivar: _rankingHelper
@property (retain, nonatomic) NSObject<CNUIUserActionTargetDiscovering> *targetDiscoveringHelper; // ivar: _targetDiscoveringHelper


+(id)descriptorForRequiredKeys;
-(id)_discoverActionsForContact:(id)arg0 actionType:(id)arg1 ;
-(id)defaultActionChangedObservable;
-(id)defaultActionFromActions:(id)arg0 ;
-(id)discoverActionsForContact:(id)arg0 actionType:(id)arg1 ;
-(id)init;
-(id)initWithDiscoveringEnvironment:(id)arg0 ;
-(id)initWithTargetDiscoveringHelper:(id)arg0 rankingHelper:(id)arg1 defaultActionFetcher:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)modelsWithContact:(id)arg0 actionType:(id)arg1 ;
-(id)modelsWithDefaultAction:(id)arg0 actions:(id)arg1 recentActions:(id)arg2 sorts:(BOOL)arg3 throttles:(BOOL)arg4 ;
-(id)recentActionsFromActions:(id)arg0 ;
-(id)schedulerProvider;
-(id)sortActionsOnModel:(id)arg0 ;
-(id)targetsChangedObservableForActionType:(id)arg0 ;
-(id)thirdPartyActionsForContactProperty:(id)arg0 ;
-(id)thirdPartyTargetsForActionTypes:(id)arg0 ;
-(void)setContactStore:(id)arg0 ;


@end


#endif