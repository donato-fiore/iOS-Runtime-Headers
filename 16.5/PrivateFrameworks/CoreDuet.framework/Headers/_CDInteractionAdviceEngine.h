// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDINTERACTIONADVICEENGINE_H
#define _CDINTERACTIONADVICEENGINE_H

@protocol _CDInteractionAdvising;

#import <Foundation/Foundation.h>

#import "_CDInteractionStore.h"
#import "_CDTemporalInteractionAdvisor.h"
#import "_CDSocialInteractionAdvisor.h"
#import "_CDQueryInteractionAdvisor.h"

@interface _CDInteractionAdviceEngine : NSObject <_CDInteractionAdvising>

 {
    _CDInteractionStore *_store;
    _CDTemporalInteractionAdvisor *_temporalAdvisor;
    _CDSocialInteractionAdvisor *_socialAdvisor;
    _CDQueryInteractionAdvisor *_queryAdvisor;
}


@property (readonly, nonatomic) _CDSocialInteractionAdvisor *socialAdvisor;
@property (readonly, nonatomic) _CDTemporalInteractionAdvisor *temporalAdvisor;


+(id)interactionAdviceEngineWithStore:(id)arg0 ;
-(id)adviseInteractionsForDate:(id)arg0 usingSettings:(id)arg1 ;
-(id)adviseInteractionsForKeywordsInString:(id)arg0 usingSettings:(id)arg1 ;
-(id)adviseInteractionsUsingSettings:(id)arg0 ;
-(id)adviseSocialInteractionsForDate:(id)arg0 andSeedContacts:(id)arg1 usingSettings:(id)arg2 ;
-(id)initWithStore:(id)arg0 ;
-(id)rankCandidateContacts:(id)arg0 usingSettings:(id)arg1 ;
-(void)tuneSocialAdvisorUsingSettings:(id)arg0 heartBeatHandler:(id)arg1 ;


@end


#endif