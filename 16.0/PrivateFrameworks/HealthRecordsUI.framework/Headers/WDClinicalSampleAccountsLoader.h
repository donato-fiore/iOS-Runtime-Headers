// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDCLINICALSAMPLEACCOUNTSLOADER_H
#define WDCLINICALSAMPLEACCOUNTSLOADER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "HRProfile.h"

@interface WDClinicalSampleAccountsLoader : NSObject

@property (copy, nonatomic) NSArray *accountDataBatches; // ivar: _accountDataBatches
@property (copy, nonatomic) NSArray *cachedAccounts; // ivar: _cachedAccounts
@property (retain, nonatomic) HRProfile *profile; // ivar: _profile


+(id)knownAccountFiles;
-(BOOL)_triggerIngestOfDataBatch:(id)arg0 accountIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)_createTemporaryFileForDataBatch:(id)arg0 error:(*id)arg1 ;
-(id)_gatewayForAccount:(id)arg0 ;
-(id)_parseAccounts;
-(id)_providerForAccount:(id)arg0 ;
-(id)_sampleAccountForGatewayWithExternalID:(id)arg0 error:(*id)arg1 ;
-(id)initWithProfile:(id)arg0 ;
-(id)providerForSampleDataSearchResultWithExternalID:(id)arg0 error:(*id)arg1 ;
-(id)sampleAccountsAsSearchResults;
-(void)_createAccountAndTriggerIngestForDataBatch:(id)arg0 account:(id)arg1 completion:(id)arg2 ;
-(void)loadFirstSampleAccountDataBatchForGatewayWithExternalID:(id)arg0 completion:(id)arg1 ;


@end


#endif