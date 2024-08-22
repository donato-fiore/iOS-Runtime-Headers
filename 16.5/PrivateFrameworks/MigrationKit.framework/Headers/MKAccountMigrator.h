// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKACCOUNTMIGRATOR_H
#define MKACCOUNTMIGRATOR_H

@class ACAccountStore, MFAccountValidator, NSMutableDictionary, NSString;
@protocol MFAccountValidatorDelegate;


#import "MKMigrator.h"

@interface MKAccountMigrator : MKMigrator <MFAccountValidatorDelegate>

 {
    BOOL _isImporting;
    NSUInteger _totalOperationCount;
    NSUInteger _completedOperationCount;
    ACAccountStore *_accountStore;
    MFAccountValidator *_accountValidator;
    NSMutableDictionary *_startDatesByAccountName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)accountStoreDidImportAccount:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)accountValidator:(id)arg0 finishedValidationOfAccount:(id)arg1 usedSSL:(BOOL)arg2 ;
-(void)import;
-(void)import:(id)arg0 ;
-(void)importDataEncodedInJSON:(id)arg0 ;


@end


#endif