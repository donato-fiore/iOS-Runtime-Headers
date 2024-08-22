// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDLISTDEFINITIONTABLE_H
#define WDLISTDEFINITIONTABLE_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "WDDocument.h"
#import "WDListDefinition.h"

@interface WDListDefinitionTable : NSObject {
    WDDocument *mDocument;
    NSMutableArray *mListDefinitions;
    NSMutableDictionary *mListDefinitionMapById;
    NSMutableDictionary *mListDefinitionMapByStyleId;
    WDListDefinition *mNullListDefinition;
    WDListDefinition *mDefaultListDefinition;
}




-(id)addDefinitionWithDefinitionId:(int)arg0 styleId:(id)arg1 ;
-(id)definitionWithDefinitionId:(int)arg0 ;
-(id)definitionWithStyleId:(id)arg0 ;
-(id)definitions;
-(id)description;
-(id)initWithDocument:(id)arg0 ;
-(id)resolvedDefinitionWithDefinitionId:(int)arg0 ;


@end


#endif