// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASENHANCEDSEARCHRESPONSE_H
#define ASENHANCEDSEARCHRESPONSE_H

@class NSMutableArray, NSNumber, NSArray;


#import "ASItem.h"

@interface ASEnhancedSearchResponse : ASItem

@property (nonatomic) int expectedResultType; // ivar: _expectedResultType
@property (retain, nonatomic) NSMutableArray *mResults; // ivar: _mResults
@property (copy, nonatomic) NSNumber *status; // ivar: _status
@property (readonly, nonatomic) NSArray *stores;


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;
-(void)addStoreResponse:(id)arg0 ;


@end


#endif