// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUBCALACCOUNT_H
#define SUBCALACCOUNT_H

@class DAAccount, NSString, NSDictionary, NSURL, DACoreDAVTaskManager, NSData;
@protocol SubCalValidationTaskDelegate, DASubCalAccount;



@interface SubCalAccount : DAAccount <SubCalValidationTaskDelegate, DASubCalAccount>



@property (nonatomic) BOOL allowInsecureConnection;
@property (retain, nonatomic) NSString *calDAVURLString;
@property (readonly, nonatomic) NSString *calendarExternalId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *externalRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isHolidaySubscribedCalendar;
@property (nonatomic) BOOL isManagedCalendar; // ivar: _isManagedCalendar
@property (nonatomic) CGFloat refreshInterval;
@property (nonatomic) BOOL shouldRemoveAlarms;
@property (nonatomic) BOOL shouldRemoveAttachments;
@property (nonatomic) int subCalAccountVersion; // ivar: _subCalAccountVersion
@property (nonatomic) BOOL subscribedURLSanitized;
@property (readonly, nonatomic) NSURL *subscriptionURL;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *syncId;
@property (readonly, nonatomic) DACoreDAVTaskManager *taskManager;
@property (retain, nonatomic) NSData *tmpICSData; // ivar: _tmpICSData
@property (nonatomic) BOOL useFTP;


-(BOOL)accountHasSignificantPropertyChangesWithChangeInfo:(id)arg0 ;
-(BOOL)hasSubscribedCalendarAtURL:(id)arg0 ;
-(BOOL)isEqualToAccount:(id)arg0 ;
-(BOOL)isSubscribedCalendarAccount;
-(BOOL)upgradeAccount;
-(id)_tmpICSCalendarPath;
-(id)accountDescription;
-(id)initWithBackingAccountInfo:(id)arg0 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(void)_checkValidityWithConsumer:(id)arg0 quickValidate:(BOOL)arg1 ;
-(void)clearTmpICSData;
-(void)discoverInitialPropertiesWithConsumer:(id)arg0 ;
-(void)handleTrustChallenge:(id)arg0 forTask:(id)arg1 ;
-(void)handleTrustChallenge:(id)arg0 forTask:(id)arg1 completionHandler:(id)arg2 ;
-(void)quickValidate:(id)arg0 ;
-(void)refreshAllCalendars:(BOOL)arg0 ;
-(void)removeDBSyncData;
-(void)saveTmpICSData;
-(void)setAccountDescription:(id)arg0 ;
-(void)setHost:(id)arg0 ;
-(void)subCalValidationTask:(id)arg0 downloadProgressedTo:(NSInteger)arg1 outOf:(NSInteger)arg2 ;
-(void)subCalValidationTask:(id)arg0 finishedWithError:(id)arg1 calendarName:(id)arg2 document:(id)arg3 calendarData:(id)arg4 ;
-(void)upgradeAccountSpecificPropertiesOnAccount:(id)arg0 inStore:(id)arg1 parentAccount:(id)arg2 ;


@end


#endif