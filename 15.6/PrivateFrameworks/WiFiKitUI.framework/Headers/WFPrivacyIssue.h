// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPRIVACYISSUE_H
#define WFPRIVACYISSUE_H

@class NSString;


#import "WFHealthIssue.h"

@interface WFPrivacyIssue : WFHealthIssue {
    NSString *_issueShortTitle;
    NSString *_issueTitle;
    NSString *_issueDescription;
    NSString *_issueRecommendation;
    NSString *_typeString;
}




+(id)carrierNetworkIssue;
+(id)dnsFilteredNetworkIssue;
+(id)privateAddressDisabledByCarrierIssueWithCarrierName:(id)arg0 ;
+(id)privateAddressDisabledByProfileIssueWithOrganizationName:(id)arg0 profileName:(id)arg1 profileUUID:(id)arg2 ;
+(id)privateAddressDisabledBySystemIssue;
+(id)privateAddressDisabledByUserIssue;
-(NSUInteger)_healthIssueTypeForSubType:(NSUInteger)arg0 ;
-(id)_descriptionForSubType:(NSUInteger)arg0 organizationName:(id)arg1 profileName:(id)arg2 ;
-(id)_privateAddressTypeToString:(NSUInteger)arg0 ;
-(id)_recommendationForSubType:(NSUInteger)arg0 organizationName:(id)arg1 ;
-(id)_titleForSubType:(NSUInteger)arg0 ;
-(id)initWithPrivacyType:(NSUInteger)arg0 organizationName:(id)arg1 profileName:(id)arg2 profileUUID:(id)arg3 ;
-(id)issueDescription;
-(id)issueRecommendation;
-(id)issueShortTitle;
-(id)issueTitle;
-(id)typeString;


@end


#endif