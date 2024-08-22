// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSAUTOFILLQUIRKSSNAPSHOT_H
#define WBSAUTOFILLQUIRKSSNAPSHOT_H

@class NSDictionary, NSString, NSSet, NSArray;
@protocol WBSRemotePlistSnapshot;

#import <Foundation/Foundation.h>


@interface WBSAutoFillQuirksSnapshot : NSObject <WBSRemotePlistSnapshot>

 {
    NSDictionary *_autoFillQuirks;
}


@property (readonly, copy, nonatomic) NSDictionary *changePasswordURLsByDomain; // ivar: _changePasswordURLsByDomain
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *domainsIneligibleForAutomaticLogin; // ivar: _domainsIneligibleForAutomaticLogin
@property (readonly, copy, nonatomic) NSArray *domainsIneligibleForPasswordAuditing; // ivar: _domainsIneligibleForPasswordAuditing
@property (readonly, copy, nonatomic) NSSet *domainsIneligibleForStreamlinedLogin; // ivar: _domainsIneligibleForStreamlinedLogin
@property (readonly, copy, nonatomic) NSArray *domainsToConsiderIdentical; // ivar: _domainsToConsiderIdentical
@property (readonly, copy, nonatomic) NSArray *domainsWithAssociatedCredentials; // ivar: _domainsWithAssociatedCredentials
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *passwordRequirementsByDomain; // ivar: _passwordRequirementsByDomain
@property (readonly) Class superclass;


-(id)_changePasswordURLStringsByDomainFromAutoFillQuirks:(id)arg0 error:(*id)arg1 ;
-(id)_domainsIneligibleForAutomaticLoginFromAutoFillQuirks:(id)arg0 error:(*id)arg1 ;
-(id)_domainsIneligibleForPasswordAuditingFromAutoFillQuirks:(id)arg0 error:(*id)arg1 ;
-(id)_domainsIneligibleForStreamlinedLoginFromAutoFillQuirks:(id)arg0 error:(*id)arg1 ;
-(id)_domainsToConsiderIdenticalFromAutoFillQuirls:(id)arg0 error:(*id)arg1 ;
-(id)_domainsWithAssociatedCredentialsFromAutoFillQuirks:(id)arg0 error:(*id)arg1 ;
-(id)_passwordRequirementsByDomainFromAutoFillQuirks:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithPlistData:(id)arg0 error:(*id)arg1 ;
-(id)plistDataWithFormat:(NSUInteger)arg0 ;


@end


#endif