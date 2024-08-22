// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTRIGGERBUILDERITEM_H
#define HUTRIGGERBUILDERITEM_H

@class HFItem, HFTriggerBuilder;
@protocol NSCopying;



@interface HUTriggerBuilderItem : HFItem <NSCopying>



@property (readonly, nonatomic) NSUInteger naturalLanguageNameType; // ivar: _naturalLanguageNameType
@property (readonly, nonatomic) HFTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


+(id)_detailedErrorDescriptionForForceDisableReasons:(NSUInteger)arg0 inHome:(id)arg1 ;
+(id)settingsURLForForceDisableReasons:(NSUInteger)arg0 ;
-(NSUInteger)_triggerType;
-(id)_forceDisableReasons;
-(id)_resultsForTriggerConditions;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTriggerBuilder:(id)arg0 nameType:(NSUInteger)arg1 ;


@end


#endif