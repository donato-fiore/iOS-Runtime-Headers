// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASSETTINGSTASKUSERINFORMATIONGETRESPONSE_H
#define ASSETTINGSTASKUSERINFORMATIONGETRESPONSE_H

@class NSArray, NSString;


#import "ASItem.h"

@interface ASSettingsTaskUserInformationGetResponse : ASItem

@property (retain, nonatomic) NSArray *accounts; // ivar: _accounts
@property (retain, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (retain, nonatomic) NSString *primarySMTPAddress; // ivar: _primarySMTPAddress


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;


@end


#endif