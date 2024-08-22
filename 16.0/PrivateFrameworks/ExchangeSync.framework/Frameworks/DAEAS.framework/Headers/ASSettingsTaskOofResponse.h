// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASSETTINGSTASKOOFRESPONSE_H
#define ASSETTINGSTASKOOFRESPONSE_H

@class NSNumber;


#import "ASItem.h"
#import "ASSettingsTaskOofGetResponse.h"

@interface ASSettingsTaskOofResponse : ASItem

@property (retain, nonatomic) ASSettingsTaskOofGetResponse *oofGetResult; // ivar: _oofGetResult
@property (retain, nonatomic) NSNumber *status; // ivar: _status


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