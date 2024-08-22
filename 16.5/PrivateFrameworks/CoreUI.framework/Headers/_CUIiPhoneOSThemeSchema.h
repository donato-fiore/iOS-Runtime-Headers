// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CUIIPHONEOSTHEMESCHEMA_H
#define _CUIIPHONEOSTHEMESCHEMA_H



#import "CUIThemeSchema.h"

@interface _CUIiPhoneOSThemeSchema : CUIThemeSchema



-(NSInteger)schemaVersion;
-(NSUInteger)effectDefinitionCount;
-(NSUInteger)elementCategoryCount;
-(NSUInteger)elementDefinitionCount;
-(NSUInteger)materialDefinitionCount;
-(id)schemaEffectRenditionsForPartDefinition:(struct ? *)arg0 ;
-(id)schemaRenditionsForPartDefinition:(struct ? *)arg0 ;
-(id)widgetNameForPartDefinition:(struct ? *)arg0 ;
-(struct ? *)_sortedEffectDefinitions;
-(struct ? *)_sortedElementDefinitions;
-(struct ? *)categoryForElementDefinition:(struct ? *)arg0 ;
-(struct ? *)effectDefinitionAtIndex:(NSUInteger)arg0 ;
-(struct ? *)effectDefinitionWithName:(id)arg0 ;
-(struct ? *)elementCategoryAtIndex:(NSUInteger)arg0 ;
-(struct ? *)elementDefinitionAtIndex:(NSUInteger)arg0 ;
-(struct ? *)elementDefinitionWithName:(id)arg0 ;
-(struct ? *)sortedEffectDefinitionAtIndex:(NSUInteger)arg0 ;
-(struct ? *)sortedElementDefinitionAtIndex:(NSUInteger)arg0 ;


@end


#endif