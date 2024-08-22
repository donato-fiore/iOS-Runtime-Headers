// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASITEMOPERATIONSRESPONSE_H
#define ASITEMOPERATIONSRESPONSE_H

@class NSNumber, NSArray;


#import "ASItem.h"

@interface ASItemOperationsResponse : ASItem {
    NSNumber *_status;
    NSArray *_fetchResponses;
}




+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;
-(id)fetchResponses;
-(id)status;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;
-(void)setFetchResponses:(id)arg0 ;
-(void)setStatus:(id)arg0 ;


@end


#endif