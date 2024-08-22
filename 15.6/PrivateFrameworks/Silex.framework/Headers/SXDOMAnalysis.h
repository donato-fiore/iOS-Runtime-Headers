// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDOMANALYSIS_H
#define SXDOMANALYSIS_H

@class NSMutableDictionary;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "SXConditionalObjectAnalysis.h"
#import "SXNamespacedObjectReferences.h"

@interface SXDOMAnalysis : NSObject <NSCopying, NSMutableCopying>

 {
    NSMutableDictionary *_roleToComponentsMap;
    NSMutableDictionary *_componentToRoleMap;
    NSMutableDictionary *_typeToComponentsMap;
    NSMutableDictionary *_componentToTypeMap;
    NSMutableDictionary *_componentStyleToComponentsMap;
    NSMutableDictionary *_componentToComponentStylesMap;
    NSMutableDictionary *_componentTextStyleToComponentsMap;
    NSMutableDictionary *_componentToComponentTextStylesMap;
    NSMutableDictionary *_textStyleToComponentsMap;
    NSMutableDictionary *_componentToTextStylesMap;
    NSMutableDictionary *_componentToChildComponentsMap;
    NSMutableDictionary *_componentToParentComponentMap;
}


@property (readonly, copy, nonatomic) SXConditionalObjectAnalysis *conditionalObjectAnalysis; // ivar: _conditionalObjectAnalysis
@property (readonly, copy, nonatomic) SXNamespacedObjectReferences *namespacedObjectReferences; // ivar: _namespacedObjectReferences


-(id)childComponentsOfComponent:(id)arg0 includeDescendants:(BOOL)arg1 ;
-(id)componentStylesForComponent:(id)arg0 ;
-(id)componentStylesForComponents:(id)arg0 ;
-(id)componentTextStylesForComponent:(id)arg0 ;
-(id)componentTextStylesForComponents:(id)arg0 ;
-(id)componentsForComponentStyle:(id)arg0 ;
-(id)componentsForComponentStyles:(id)arg0 ;
-(id)componentsForComponentTextStyle:(id)arg0 ;
-(id)componentsForComponentTextStyles:(id)arg0 ;
-(id)componentsForTextStyle:(id)arg0 ;
-(id)componentsForTextStyles:(id)arg0 ;
-(id)componentsWithRole:(int)arg0 ;
-(id)componentsWithType:(id)arg0 ;
-(id)containerPathForComponentWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifiersForKey:(id)arg0 map:(id)arg1 ;
-(id)identifiersForKeys:(id)arg0 map:(id)arg1 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)parentComponentOfComponent:(id)arg0 ;
-(id)textStylesForComponent:(id)arg0 ;
-(id)textStylesForComponents:(id)arg0 ;
-(id)typeForComponent:(id)arg0 ;
-(int)roleForComponent:(id)arg0 ;
-(void)populateWithSource:(id)arg0 ;


@end


#endif