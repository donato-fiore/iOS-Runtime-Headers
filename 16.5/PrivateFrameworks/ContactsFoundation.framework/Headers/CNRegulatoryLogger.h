// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNREGULATORYLOGGER_H
#define CNREGULATORYLOGGER_H

@class NSString, PAApplication, PAAccessLogger;
@protocol CNRegulatoryLogger, OS_tcc_identity, OS_os_log;

#import <Foundation/Foundation.h>

#import "CNAuditToken.h"

@interface CNRegulatoryLogger : NSObject <CNRegulatoryLogger>



@property (readonly, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity; // ivar: _assumedIdentity
@property (readonly, nonatomic) CNAuditToken *cnAuditToken; // ivar: _cnAuditToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger greenTeaDiagnosticEventCounter; // ivar: _greenTeaDiagnosticEventCounter
@property (nonatomic) NSUInteger greenTeaDiagnosticLogFaultForEventCount; // ivar: _greenTeaDiagnosticLogFaultForEventCount
@property (readonly, nonatomic) *ct_green_tea_logger_s greenTeaLogger; // ivar: _greenTeaLogger
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isGreenTeaDiagnosticsEnabled; // ivar: _isGreenTeaDiagnosticsEnabled
@property (readonly, nonatomic) BOOL isPrivacyAccountingDiagnosticsEnabled; // ivar: _isPrivacyAccountingDiagnosticsEnabled
@property (readonly, nonatomic) NSObject<OS_os_log> *os_log; // ivar: _os_log
@property (retain, nonatomic) PAApplication *privacyAccountingAccessor; // ivar: _privacyAccountingAccessor
@property (retain, nonatomic) PAAccessLogger *privacyAccountingLogger; // ivar: _privacyAccountingLogger
@property (retain, nonatomic) NSString *processDescription; // ivar: _processDescription
@property (readonly) Class superclass;


+(id)sharedInstanceForAddressBook;
-(id)accessorForAuditTokenValidatingAssumedIdentity;
-(id)initWithAuditToken:(id)arg0 assumedIdentity:(id)arg1 ;
-(id)initWithAuditToken:(id)arg0 assumedIdentity:(id)arg1 logCategory:(char *)arg2 ;
-(void)dealloc;
-(void)deletingContactsData;
-(void)displayingOOPContactPicker;
-(void)logContactPickerAccessEvent;
-(void)logContactsDataAccessEvent;
-(void)logContactsDataAccessEventWithAssetIdentifiers:(id)arg0 ;
-(void)logGreenTeaEvent:(id)arg0 ;
-(void)logPrivacyAccountingAccessEvent:(id)arg0 ;
-(void)modifyingContactsData;
-(void)readAndTransmittingContactsData;
-(void)readingContactsData;
-(void)receivingContactsDataFromOOPContactPicker;
-(void)willLogContactPickerAccessEvent;
-(void)willLogContactsDataAccessEvent;
-(void)willLogContactsDataAccessEventWithAssetIdentifiers:(id)arg0 ;
-(void)willNotLogContactPickerAccessEventAsLoggingDisabled;
-(void)willNotLogContactPickerAccessEventAsLoggingInProcess;
-(void)willNotLogContactsDataAccessEventAsLoggingDisabled;


@end


#endif