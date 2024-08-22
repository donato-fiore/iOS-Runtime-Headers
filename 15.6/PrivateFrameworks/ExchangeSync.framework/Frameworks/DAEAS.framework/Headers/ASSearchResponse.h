// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSEARCHRESPONSE_H
#define ASSEARCHRESPONSE_H

@class NSNumber, NSArray;


#import "ASItem.h"

@interface ASSearchResponse : ASItem

@property (nonatomic) int expectedResultType; // ivar: _expectedResultType
@property (copy, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSArray *stores; // ivar: _stores


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;


@end


#endif