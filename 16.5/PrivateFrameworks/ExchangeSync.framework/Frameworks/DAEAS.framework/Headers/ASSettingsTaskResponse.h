// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASSETTINGSTASKRESPONSE_H
#define ASSETTINGSTASKRESPONSE_H

@class NSNumber;


#import "ASItem.h"
#import "ASSettingsTaskOofResponse.h"
#import "ASSettingsTaskUserInformationResponse.h"

@interface ASSettingsTaskResponse : ASItem

@property (retain, nonatomic) ASSettingsTaskOofResponse *oof; // ivar: _oof
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) ASSettingsTaskUserInformationResponse *userInformation; // ivar: _userInformation


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