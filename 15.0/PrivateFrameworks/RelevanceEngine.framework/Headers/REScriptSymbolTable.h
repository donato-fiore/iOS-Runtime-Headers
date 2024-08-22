// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RESCRIPTSYMBOLTABLE_H
#define RESCRIPTSYMBOLTABLE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "REScriptSymbolTable.h"

@interface REScriptSymbolTable : NSObject {
    REScriptSymbolTable *_parentTable;
    NSMutableDictionary *_definitions;
}




-(BOOL)define:(id)arg0 type:(NSUInteger)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)setNodeValue:(id)arg0 forDefinition:(id)arg1 error:(*id)arg2 ;
-(BOOL)setObjectValue:(id)arg0 forDefinition:(id)arg1 error:(*id)arg2 ;
-(BOOL)typeForDefinition:(id)arg0 type:(*NSUInteger)arg1 ;
-(id)initWithParentScope:(id)arg0 ;
-(id)nodeValueForDefinition:(id)arg0 ;
-(id)objectValueForDefinition:(id)arg0 ;
-(void)_enumerateObjectsOfType:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateFeatures:(id)arg0 ;
-(void)enumerateRules:(id)arg0 ;


@end


#endif