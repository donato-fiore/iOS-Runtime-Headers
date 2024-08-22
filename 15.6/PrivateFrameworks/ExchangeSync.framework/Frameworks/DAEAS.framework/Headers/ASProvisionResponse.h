// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASPROVISIONRESPONSE_H
#define ASPROVISIONRESPONSE_H

@class NSArray, NSNumber, NSString;


#import "ASItem.h"

@interface ASProvisionResponse : ASItem {
    NSArray *_policies;
    NSNumber *_status;
    BOOL _remoteWipe;
    BOOL _accountOnlyRemoteWipe;
    NSString *_policyType;
}




+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
-(BOOL)accountOnlyRemoteWipe;
-(BOOL)remoteWipe;
-(id)asParseRules;
-(id)description;
-(id)init;
-(id)initWithPolicyType:(id)arg0 ;
-(id)policies;
-(id)policyType;
-(id)status;
-(void)_setAccountOnlyRemoteWipe:(id)arg0 ;
-(void)_setPolicies:(id)arg0 ;
-(void)_setRemoteWipe:(id)arg0 ;
-(void)_setStatus:(id)arg0 ;
-(void)setPolicyType:(id)arg0 ;


@end


#endif