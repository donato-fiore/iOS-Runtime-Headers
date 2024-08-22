// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSAUTOFILLASSOCIATEDDOMAINSMANAGER_H
#define WBSAUTOFILLASSOCIATEDDOMAINSMANAGER_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface WBSAutoFillAssociatedDomainsManager : NSObject {
    NSMutableDictionary *_domainToDomainsWithAssociatedCredentials;
    NSMutableDictionary *_domainsToDomainsToConsiderIdentical;
}


@property (copy, nonatomic) NSArray *domainsToConsiderIdentical; // ivar: _domainsToConsiderIdentical
@property (copy, nonatomic) NSArray *domainsWithAssociatedCredentials; // ivar: _domainsWithAssociatedCredentials


-(id)domainsToConsiderIdenticalToDomain:(id)arg0 ;
-(id)domainsWithAssociatedCredentialsForDomain:(id)arg0 ;
-(id)init;
-(id)initWithDomainsWithAssociatedCredentials:(id)arg0 ;
-(id)initWithDomainsWithAssociatedCredentials:(id)arg0 domainsToConsiderIdentical:(id)arg1 ;
-(void)_updateDomainToDomainsToConsiderIdentical;
-(void)_updateDomainToDomainsWithAssociatedCredentials;


@end


#endif