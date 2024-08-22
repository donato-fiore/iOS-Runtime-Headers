// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HREACTIONSETTEMPLATE_H
#define HREACTIONSETTEMPLATE_H

@class NSString;
@protocol HFIconDescriptor;


#import "HREActionTemplate.h"

@interface HREActionSetTemplate : HREActionTemplate

@property (retain, nonatomic) NSString *actionSetName; // ivar: _actionSetName
@property (retain, nonatomic) NSString *actionSetType; // ivar: _actionSetType
@property (retain, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor; // ivar: _iconDescriptor


-(Class)recommendationClass;
-(id)createStarterRecommendationInHome:(id)arg0 ;
-(id)init;


@end


#endif