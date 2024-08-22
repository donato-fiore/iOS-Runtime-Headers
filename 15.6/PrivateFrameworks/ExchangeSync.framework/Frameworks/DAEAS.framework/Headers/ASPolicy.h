// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASPOLICY_H
#define ASPOLICY_H

@class NSString;


#import "ASItem.h"

@interface ASPolicy : ASItem {
    NSString *_type;
    NSString *_key;
    NSString *_status;
}




+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;
-(id)key;
-(id)perDomainDictsForPolicy;
-(id)type;
-(int)status;
-(void)_setKey:(id)arg0 ;
-(void)_setStatus:(id)arg0 ;
-(void)_setType:(id)arg0 ;


@end


#endif