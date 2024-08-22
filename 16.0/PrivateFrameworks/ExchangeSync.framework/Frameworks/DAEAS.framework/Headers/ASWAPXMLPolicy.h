// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASWAPXMLPOLICY_H
#define ASWAPXMLPOLICY_H

@class NSString;


#import "ASPolicy.h"

@interface ASWAPXMLPolicy : ASPolicy {
    NSString *_data;
}




+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)_policyForWAPProvisioningXMLData;
-(id)_wbxmlPolicyDict;
-(id)data;
-(id)perDomainDictsForPolicy;
-(void)_setData:(id)arg0 ;


@end


#endif