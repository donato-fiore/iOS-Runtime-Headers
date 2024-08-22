// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFPLACEHOLDERTRIGGERBUILDER_H
#define HFPLACEHOLDERTRIGGERBUILDER_H



#import "HFTriggerBuilder.h"

@interface HFPlaceholderTriggerBuilder : HFTriggerBuilder

@property (nonatomic) BOOL isEditing; // ivar: _isEditing


+(id)createPlaceholderTriggerForHome:(id)arg0 withTriggerActionSetBuilder:(id)arg1 context:(id)arg2 ;
-(id)commitItem;
-(id)naturalLanguageNameOfType:(NSUInteger)arg0 ;


@end


#endif