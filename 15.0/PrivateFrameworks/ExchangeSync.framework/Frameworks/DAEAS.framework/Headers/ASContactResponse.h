// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCONTACTRESPONSE_H
#define ASCONTACTRESPONSE_H



#import "ASContact.h"

@interface ASContactResponse : ASContact



+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;


@end


#endif