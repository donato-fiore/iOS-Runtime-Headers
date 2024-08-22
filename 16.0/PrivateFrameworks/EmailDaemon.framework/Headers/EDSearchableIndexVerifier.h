// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDSEARCHABLEINDEXVERIFIER_H
#define EDSEARCHABLEINDEXVERIFIER_H

@class NSString;
@protocol EFLoggable, EFSignpostable, EDSearchableIndexVerifierDataSource, OS_os_activity;

#import <Foundation/Foundation.h>


@interface EDSearchableIndexVerifier : NSObject <EFLoggable, EFSignpostable>



@property (weak, nonatomic) NSObject<EDSearchableIndexVerifierDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_os_activity> *indexVerificationActivity; // ivar: _indexVerificationActivity
@property (readonly) NSUInteger signpostID;
@property (readonly) Class superclass;


+(id)log;
+(id)signpostLog;
-(NSUInteger)_findMissingTransactionIDs:(id)arg0 dataSource:(id)arg1 ;
-(id)_failingSamples:(id)arg0 tester:(id)arg1 ;
-(id)_missingTransactionIDsFromTransactionIDs:(id)arg0 ;
-(id)_verifyDataSamples:(id)arg0 ;
-(id)_verifySamples:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(void)_addFailingSamples:(id)arg0 toResultDictionary:(id)arg1 ;
// -(void)verifyDataSamplesWithCompletionHandler:(id)arg0 scheduler:(unk)arg1  ;


@end


#endif