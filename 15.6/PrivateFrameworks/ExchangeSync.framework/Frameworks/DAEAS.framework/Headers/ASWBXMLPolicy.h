// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASWBXMLPOLICY_H
#define ASWBXMLPOLICY_H

@class NSMutableDictionary;


#import "ASPolicy.h"

@interface ASWBXMLPolicy : ASPolicy {
    NSMutableDictionary *_policyData;
}




+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)perDomainDictsForPolicy;
-(void)_cleanUpPolicyData:(id)arg0 ;
-(void)_setPolicyData:(id)arg0 ;


@end


#endif