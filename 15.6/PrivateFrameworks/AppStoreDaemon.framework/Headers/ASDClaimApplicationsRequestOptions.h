// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDCLAIMAPPLICATIONSREQUESTOPTIONS_H
#define ASDCLAIMAPPLICATIONSREQUESTOPTIONS_H

@class NSNumber, NSArray, NSData, NSDictionary;


#import "ASDRequestOptions.h"

@interface ASDClaimApplicationsRequestOptions : ASDRequestOptions

@property (copy, nonatomic) NSNumber *accountID; // ivar: _accountID
@property (readonly, nonatomic) NSArray *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (readonly, nonatomic) NSInteger claimStyle; // ivar: _claimStyle
@property (copy, nonatomic) NSData *clientAuditTokenData; // ivar: _clientAuditTokenData
@property (nonatomic) BOOL establishesActiveAccount; // ivar: _establishesActiveAccount
@property (copy, nonatomic) NSDictionary *httpHeaders; // ivar: _httpHeaders
@property (nonatomic) BOOL ignoresPreviousClaimAttempts; // ivar: _ignoresPreviousClaimAttempts
@property (copy, nonatomic) NSNumber *purchaseID; // ivar: _purchaseID
@property (nonatomic) BOOL suppressErrorDialogs; // ivar: _suppressErrorDialogs


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundleIdentifiers:(id)arg0 ;
-(id)initWithClaimStyle:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif