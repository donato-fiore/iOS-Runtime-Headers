// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASITEMOPERATIONSFETCHRESULT_H
#define ASITEMOPERATIONSFETCHRESULT_H

@class NSString;


#import "ASEmailItem.h"

@interface ASItemOperationsFetchResult : ASEmailItem

@property (retain, nonatomic) NSString *classString; // ivar: _classString


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(BOOL)_isSearchResult;
-(id)init;


@end


#endif