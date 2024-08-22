// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSEARCHSTORE_H
#define ASSEARCHSTORE_H

@class NSMutableArray, NSString, NSArray, NSNumber;


#import "ASItem.h"

@interface ASSearchStore : ASItem

@property (retain, nonatomic) NSMutableArray *mResults; // ivar: _mResults
@property (copy, nonatomic) NSString *range; // ivar: _range
@property (readonly, nonatomic) NSArray *results;
@property (copy, nonatomic) NSNumber *status; // ivar: _status
@property (copy, nonatomic) NSNumber *total; // ivar: _total


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
-(id)asParseRules;
-(id)description;
-(void)addResult:(id)arg0 ;


@end


#endif