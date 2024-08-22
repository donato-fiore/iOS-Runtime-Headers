// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLMAILACCOUNTMIGRATOR_H
#define WLMAILACCOUNTMIGRATOR_H

@class ACAccountStore, NSString, WLFeaturePayload;
@protocol MFAccountValidatorDelegate, WLDataclassMigrating, WLAnalyticsDataSource;

#import <Foundation/Foundation.h>


@interface WLMailAccountMigrator : NSObject <MFAccountValidatorDelegate, WLDataclassMigrating, WLAnalyticsDataSource>



@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) WLFeaturePayload *featurePayload; // ivar: _featurePayload
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contentType;
-(BOOL)accountBased;
-(BOOL)storeRecordDataInDatabase;
-(BOOL)wantsSegmentedDownloads;
-(id)contentType;
-(id)dataType;
-(id)importDidEnd;
-(id)importWillBegin;
-(id)init;
-(void)_importGoogleAccountWithUsername:(id)arg0 completion:(id)arg1 ;
-(void)accountValidator:(id)arg0 finishedValidationOfAccount:(id)arg1 usedSSL:(BOOL)arg2 ;
-(void)addWorkingTime:(NSUInteger)arg0 ;
-(void)enable;
-(void)estimateItemSizeForSummary:(id)arg0 account:(id)arg1 ;
-(void)importRecordData:(id)arg0 summary:(id)arg1 account:(id)arg2 completion:(id)arg3 ;
-(void)setEstimatedDataSize:(NSUInteger)arg0 ;
-(void)setState:(id)arg0 ;


@end


#endif