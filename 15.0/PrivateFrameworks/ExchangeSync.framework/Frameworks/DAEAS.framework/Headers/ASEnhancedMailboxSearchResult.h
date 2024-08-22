// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASENHANCEDMAILBOXSEARCHRESULT_H
#define ASENHANCEDMAILBOXSEARCHRESULT_H

@class NSString;


#import "ASEmailItem.h"

@interface ASEnhancedMailboxSearchResult : ASEmailItem

@property (retain, nonatomic) NSString *className; // ivar: _className


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(BOOL)_isSearchResult;
-(id)description;
-(id)init;


@end


#endif