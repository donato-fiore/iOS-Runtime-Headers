// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HREACTIONTEMPLATE_H
#define HREACTIONTEMPLATE_H

@class NSDictionary, NSSet;


#import "HRETemplate.h"
#import "HREActionVarianceCollection.h"

@interface HREActionTemplate : HRETemplate

@property (readonly, nonatomic) NSDictionary *actionMap; // ivar: _actionMap
@property (readonly, nonatomic) HREActionVarianceCollection *allowedVariance; // ivar: _allowedVariance
@property (retain, nonatomic) NSSet *extraInvolvedTypes; // ivar: _extraInvolvedTypes


-(id)createStarterRecommendationInHome:(id)arg0 ;
-(id)involvedAccessoryTypes;


@end


#endif