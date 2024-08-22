// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASMAILBOXSEARCHRESULT_H
#define ASMAILBOXSEARCHRESULT_H

@class NSArray, NSMutableArray;


#import "ASEmailItem.h"

@interface ASMailboxSearchResult : ASEmailItem

@property (readonly, nonatomic) NSArray *classes;
@property (retain, nonatomic) NSMutableArray *mClasses; // ivar: _mClasses


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(BOOL)_isSearchResult;
-(id)description;
-(id)init;
-(void)addClass:(id)arg0 ;


@end


#endif