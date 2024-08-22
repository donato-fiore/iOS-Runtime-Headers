// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASARRAY_H
#define ASARRAY_H

@class NSMutableArray, NSDictionary;
@protocol ASParsingWithSubItems, ASParsingFrontingBasicType;


#import "ASItem.h"

@interface ASArray : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType>

 {
    NSMutableArray *_items;
    NSDictionary *_subclassRuleSet;
}




+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
-(id)asParseRules;
-(id)commonValue;
-(id)description;
-(id)initWithSubclassRuleSet:(id)arg0 ;
-(void)addItem:(id)arg0 ;


@end


#endif