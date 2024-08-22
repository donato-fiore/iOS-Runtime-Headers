// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSETTINGSTASKACCOUNTEMAILADDRESSES_H
#define ASSETTINGSTASKACCOUNTEMAILADDRESSES_H

@class NSMutableSet, NSString;


#import "ASItem.h"

@interface ASSettingsTaskAccountEmailAddresses : ASItem

@property (retain, nonatomic) NSMutableSet *mEmailAddresses; // ivar: _mEmailAddresses
@property (retain, nonatomic) NSString *primarySMTPAddress; // ivar: _primarySMTPAddress


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;
-(id)emailAddresses;
-(void)addEmailAddress:(id)arg0 ;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;


@end


#endif