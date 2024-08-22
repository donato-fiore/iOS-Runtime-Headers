// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASMEETINGRESPONSERESPONSE_H
#define ASMEETINGRESPONSERESPONSE_H

@class NSMutableArray, NSArray;


#import "ASItem.h"

@interface ASMeetingResponseResponse : ASItem

@property (retain, nonatomic) NSMutableArray *mSingularResponses; // ivar: _mSingularResponses
@property (readonly, nonatomic) NSArray *singularResponses;


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;
-(id)init;
-(void)_addSingularResponse:(id)arg0 ;


@end


#endif