// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSENDMAILRESPONSE_H
#define ASSENDMAILRESPONSE_H

@class NSNumber;


#import "ASItem.h"

@interface ASSendMailResponse : ASItem

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