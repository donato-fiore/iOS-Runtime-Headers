// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASTOPLEVELERRORCHECKER_H
#define ASTOPLEVELERRORCHECKER_H

@class NSNumber, NSDictionary;
@protocol ASParsingNotifyOfUnknownTokens;


#import "ASItem.h"

@interface ASTopLevelErrorChecker : ASItem <ASParsingNotifyOfUnknownTokens>



@property (retain, nonatomic) NSNumber *foundStatus; // ivar: _foundStatus
@property (retain, nonatomic) NSDictionary *parseRules; // ivar: _parseRules


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
-(id)asParseRules;
-(id)initWithCodePage:(int)arg0 statusToken:(int)arg1 ;
-(void)unknownToken:(int)arg0 receivedForCodePage:(int)arg1 ;


@end


#endif