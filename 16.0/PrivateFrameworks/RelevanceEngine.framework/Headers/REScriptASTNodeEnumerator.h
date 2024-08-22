// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RESCRIPTASTNODEENUMERATOR_H
#define RESCRIPTASTNODEENUMERATOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "REScriptSymbolTable.h"

@interface REScriptASTNodeEnumerator : NSObject {
    NSArray *_nodes;
    REScriptSymbolTable *_table;
}




-(BOOL)buildSymbolTableWithError:(*id)arg0 ;
-(id)initWithRootNodes:(id)arg0 symbolTable:(id)arg1 ;


@end


#endif