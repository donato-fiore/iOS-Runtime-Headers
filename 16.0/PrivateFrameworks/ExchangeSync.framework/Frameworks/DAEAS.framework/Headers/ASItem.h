// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASITEM_H
#define ASITEM_H

@class NSMutableDictionary;
@protocol ASParsing;

#import <Foundation/Foundation.h>

#import "ASItem.h"

@interface ASItem : NSObject <ASParsing>

 {
    id *_currentStreamBlock;
}


@property (nonatomic) int codePage; // ivar: _codePage
@property (copy, nonatomic) id *currentStreamBlock;
@property (nonatomic) int currentlyParsingCPTNumber; // ivar: _currentlyParsingCPTNumber
@property (retain, nonatomic) NSObject<ASParsing> *currentlyParsingSubItem; // ivar: _currentlyParsingSubItem
@property (weak, nonatomic) ASItem *parent; // ivar: _parent
@property (retain, nonatomic) NSMutableDictionary *parseRuleUsageNumbers; // ivar: _parseRuleUsageNumbers
@property (nonatomic) int parsingState; // ivar: _parsingState
@property (weak, nonatomic) ASItem *root; // ivar: _root
@property (nonatomic) int token; // ivar: _token


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)expectsContent;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
+(id)parseRuleCache;
-(BOOL)_haveEnoughDataToKeepParsingWithContext:(id)arg0 curToken:(unsigned char)arg1 ;
-(BOOL)_itemPathMatches:(id)arg0 ;
-(BOOL)_itemPathWithDCCPTMatches:(id)arg0 dccpt:(int)arg1 ;
-(BOOL)_parseNextValueWithDataclass:(NSInteger)arg0 context:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 parseRules:(id)arg6 account:(id)arg7 ;
-(BOOL)_setupFirstParseWithContext:(id)arg0 root:(id)arg1 parent:(id)arg2 ;
-(BOOL)_streamIfNecessaryFromContext:(id)arg0 ;
-(BOOL)nextParsedObjectWithContext:(id)arg0 root:(id)arg1 callbackDict:(id)arg2 streamCallbackDict:(id)arg3 dataclass:(NSInteger)arg4 outParsedObject:(*id)arg5 outCPTNumber:(*int)arg6 account:(id)arg7 ;
-(NSInteger)_dataclass;
-(id)_copyStreamingBlockForStreamingCallbackDict:(SEL)arg0 dccpt:(id)arg1 ;
-(id)_replacementObjectWithCallbackDict:(id)arg0 ;
-(id)asParseRules;
-(id)init;
-(int)_streamYourLittleHeartOutWithContext:(id)arg0 ;
-(void)ignoreThisContent:(id)arg0 ;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;


@end


#endif