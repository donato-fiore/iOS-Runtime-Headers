// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNREPUTATIONLOGGER_H
#define CNREPUTATIONLOGGER_H


#import <Foundation/Foundation.h>


@interface CNReputationLogger : NSObject



+(id)describeScore:(NSInteger)arg0 ;
+(id)obfuscate:(id)arg0 ;
+(id)obfuscateHandle:(id)arg0 ;
+(id)performanceLog;
+(id)queryLog;
-(void)beginQueryForHandle:(id)arg0 ;
-(void)contactsConfirmedTrustOfEmailAddress;
-(void)contactsConfirmedTrustOfPhoneNumber;
-(void)contactsCouldNotConfirmTrustOfEmailAddress;
-(void)contactsCouldNotConfirmTrustOfPhoneNumber;
-(void)coreRecentsConfirmedTrust;
-(void)coreRecentsCouldNotConfirmTrust;
-(void)couldNotQueryContactsForEmailAddressWithError:(id)arg0 ;
-(void)couldNotQueryContactsForPhoneNumberWithError:(id)arg0 ;
-(void)couldNotQueryCoreRecentsWithError:(id)arg0 ;
-(void)queryForHandle:(id)arg0 didFailWithError:(id)arg1 ;
-(void)queryForHandle:(id)arg0 didFinishWithReputation:(id)arg1 ;
-(void)reputationUnestablished;
-(void)timeToResolve:(CGFloat)arg0 ;


@end


#endif