// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASPINGITEM_H
#define ASPINGITEM_H

@class NSArray, NSNumber;


#import "ASItem.h"

@interface ASPingItem : ASItem

@property (retain, nonatomic) NSArray *folders; // ivar: _folders
@property (retain, nonatomic) NSNumber *heartBeatInterval; // ivar: _heartBeatInterval
@property (retain, nonatomic) NSNumber *maxFolders; // ivar: _maxFolders
@property (retain, nonatomic) NSNumber *status; // ivar: _status


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;


@end


#endif