// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRETRIGGERTEMPLATE_H
#define HRETRIGGERTEMPLATE_H

@class NSDictionary;
@protocol HFIconDescriptor;


#import "HREActionTemplate.h"

@interface HRETriggerTemplate : HREActionTemplate

@property (retain, nonatomic) NSObject<HFIconDescriptor> *defaultIconDescriptor; // ivar: _defaultIconDescriptor
@property (retain, nonatomic) NSDictionary *iconDescriptorsByTriggerCharacteristic; // ivar: _iconDescriptorsByTriggerCharacteristic


-(Class)recommendationClass;
-(id)_subclass_triggerBuilderForRecommendation:(id)arg0 withObjects:(id)arg1 ;
-(id)iconDescriptorForRecommendation:(id)arg0 withObjects:(id)arg1 ;
-(id)triggerBuilderForRecommendation:(id)arg0 withObjects:(id)arg1 ;


@end


#endif