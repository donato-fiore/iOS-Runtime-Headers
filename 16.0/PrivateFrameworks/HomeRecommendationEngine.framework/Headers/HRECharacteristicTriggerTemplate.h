// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRECHARACTERISTICTRIGGERTEMPLATE_H
#define HRECHARACTERISTICTRIGGERTEMPLATE_H

@class NSArray;


#import "HRETriggerTemplate.h"

@interface HRECharacteristicTriggerTemplate : HRETriggerTemplate

@property (nonatomic) BOOL allowMultipleEventsFeature; // ivar: _allowMultipleEventsFeature
@property (nonatomic) BOOL characteristicPerServiceRule; // ivar: _characteristicPerServiceRule
@property (retain, nonatomic) NSArray *characteristicTypePriority; // ivar: _characteristicTypePriority
@property (nonatomic) BOOL enforcePriority; // ivar: _enforcePriority
@property (nonatomic) BOOL singleRecommendationPerSplit; // ivar: _singleRecommendationPerSplit
@property (retain, nonatomic) NSArray *triggerCharacteristicValues; // ivar: _triggerCharacteristicValues


-(id)_subclass_triggerBuilderForRecommendation:(id)arg0 withObjects:(id)arg1 ;
-(id)init;


@end


#endif