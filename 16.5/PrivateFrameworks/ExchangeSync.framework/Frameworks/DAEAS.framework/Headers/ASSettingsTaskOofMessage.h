// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASSETTINGSTASKOOFMESSAGE_H
#define ASSETTINGSTASKOOFMESSAGE_H

@class NSNumber, NSString;


#import "ASItem.h"

@interface ASSettingsTaskOofMessage : ASItem

@property (retain, nonatomic) NSNumber *audience; // ivar: _audience
@property (retain, nonatomic) NSString *bodyType; // ivar: _bodyType
@property (retain, nonatomic) NSNumber *enabled; // ivar: _enabled
@property (retain, nonatomic) NSString *replyMessage; // ivar: _replyMessage


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;
-(void)appliesToExternalKnown:(id)arg0 ;
-(void)appliesToExternalUnknown:(id)arg0 ;
-(void)appliesToInternal:(id)arg0 ;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;


@end


#endif