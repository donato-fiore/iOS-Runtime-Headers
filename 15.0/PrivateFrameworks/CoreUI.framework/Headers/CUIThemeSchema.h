// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUITHEMESCHEMA_H
#define CUITHEMESCHEMA_H


#import <Foundation/Foundation.h>


@interface CUIThemeSchema : NSObject



+(id)defaultSchema;
+(id)schemaForPlatform:(NSInteger)arg0 ;
-(NSInteger)schemaVersion;
-(NSUInteger)dimensionDefinitionCountForPartDefinition:(struct ? *)arg0 ;
-(NSUInteger)effectDefinitionCount;
-(NSUInteger)elementCategoryCount;
-(NSUInteger)elementDefinitionCount;
-(NSUInteger)materialDefinitionCount;
-(NSUInteger)partDefinitionCountForEffectDefinition:(struct ? *)arg0 ;
-(NSUInteger)partDefinitionCountForElementDefinition:(struct ? *)arg0 ;
-(NSUInteger)partDefinitionCountForMaterialDefinition:(struct ? *)arg0 ;
-(id)schemaEffectRenditionsForPartDefinition:(struct ? *)arg0 ;
-(id)schemaMaterialRenditionsForPartDefinition:(struct ? *)arg0 ;
-(id)schemaRenditionsForPartDefinition:(struct ? *)arg0 ;
-(id)widgetNameForPartDefinition:(struct ? *)arg0 ;
-(struct ? *)categoryForElementDefinition:(struct ? *)arg0 ;
-(struct ? *)effectDefinitionAtIndex:(NSUInteger)arg0 ;
-(struct ? *)effectDefinitionWithName:(id)arg0 ;
-(struct ? *)elementCategoryAtIndex:(NSUInteger)arg0 ;
-(struct ? *)elementDefinitionAtIndex:(NSUInteger)arg0 ;
-(struct ? *)elementDefinitionWithName:(id)arg0 ;
-(struct ? *)materialDefinitionAtIndex:(NSUInteger)arg0 ;
-(struct ? *)materialDefinitionWithName:(id)arg0 ;
-(struct ? *)partDefinitionForWidgetName:(id)arg0 ;
-(struct ? *)partDefinitionWithName:(id)arg0 forElementDefinition:(struct ? *)arg1 ;
-(struct ? *)sortedEffectDefinitionAtIndex:(NSUInteger)arg0 ;
-(struct ? *)sortedElementDefinitionAtIndex:(NSUInteger)arg0 ;
-(struct ? *)sortedMaterialDefinitionAtIndex:(NSUInteger)arg0 ;
-(void)enumerateAvailableThemeAttributesInPartDefinition:(struct ? *)arg0 usingBlock:(id)arg1 ;
-(void)enumerateAvailableValuesForThemeAttribute:(int)arg0 inPartDefinition:(struct ? *)arg1 usingBlock:(id)arg2 ;


@end


#endif