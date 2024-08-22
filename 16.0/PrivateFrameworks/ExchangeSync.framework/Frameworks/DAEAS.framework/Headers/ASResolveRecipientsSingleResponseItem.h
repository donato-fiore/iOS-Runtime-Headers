// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASRESOLVERECIPIENTSSINGLERESPONSEITEM_H
#define ASRESOLVERECIPIENTSSINGLERESPONSEITEM_H

@class NSNumber, NSString, NSMutableArray, NSArray;


#import "ASItem.h"

@interface ASResolveRecipientsSingleResponseItem : ASItem

@property (retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus; // ivar: _easStatus
@property (retain, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (retain, nonatomic) NSMutableArray *mRecipients; // ivar: _mRecipients
@property (readonly, nonatomic) NSArray *recipients;


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;
-(void)addRecipient:(id)arg0 ;


@end


#endif