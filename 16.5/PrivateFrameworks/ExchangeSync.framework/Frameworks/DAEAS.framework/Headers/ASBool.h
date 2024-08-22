// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASBOOL_H
#define ASBOOL_H

@protocol ASParsingFrontingBasicType;


#import "ASItem.h"

@interface ASBool : ASItem <ASParsingFrontingBasicType>





+(BOOL)acceptsTopLevelLeaves;
+(BOOL)expectsContent;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
-(id)commonValue;
-(int)parsingState;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;


@end


#endif