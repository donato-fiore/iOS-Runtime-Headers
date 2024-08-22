// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASRESOLVERECIPIENTSRESPONSE_H
#define ASRESOLVERECIPIENTSRESPONSE_H

@class NSNumber, NSMutableArray, NSArray;


#import "ASItem.h"

@interface ASResolveRecipientsResponse : ASItem

@property (retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus; // ivar: _easStatus
@property (retain, nonatomic) NSMutableArray *mResponses; // ivar: _mResponses
@property (retain, nonatomic) NSArray *responses; // ivar: _responses


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;
-(void)addResponse:(id)arg0 ;


@end


#endif