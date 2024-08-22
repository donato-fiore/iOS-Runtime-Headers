// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSUSERADDRESS_H
#define ICSUSERADDRESS_H

@class NSString;


#import "ICSProperty.h"
#import "ICSAlternateTimeProposal.h"
#import "ICSDateValue.h"

@interface ICSUserAddress : ICSProperty

@property (nonatomic) ICSAlternateTimeProposal *alternateTimeProposal;
@property (retain, nonatomic) NSString *cn;
@property (nonatomic) int cutype;
@property (retain, nonatomic) NSString *dir;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *likenessDataString;
@property (nonatomic) int partstat;
@property (retain, nonatomic) ICSDateValue *partstatModified;
@property (nonatomic) int role;
@property (nonatomic) BOOL rsvp;
@property (nonatomic) int scheduleagent;
@property (nonatomic) int scheduleforcesend;
@property (nonatomic) int schedulestatus;
@property (retain, nonatomic) NSString *x_apple_inviterName;
@property (nonatomic) BOOL x_apple_self_invited;
@property (retain, nonatomic) NSString *x_apple_telephone;


+(id)ICSStringFromCalendarUser:(int)arg0 ;
+(id)ICSStringFromParticipationStatus:(int)arg0 ;
+(id)ICSStringFromRole:(int)arg0 ;
+(id)ICSStringFromScheduleAgent:(int)arg0 ;
+(id)ICSStringFromScheduleForceSend:(int)arg0 ;
+(id)ICSStringFromScheduleStatus:(int)arg0 ;
+(id)URLForNoMail;
+(int)calendarUserFromICSString:(id)arg0 ;
+(int)participationStatusFromICSString:(id)arg0 ;
+(int)roleFromICSString:(id)arg0 ;
+(int)scheduleAgentFromICSString:(id)arg0 ;
+(int)scheduleForceSendFromICSString:(id)arg0 ;
+(int)scheduleStatusFromICSString:(id)arg0 ;
-(BOOL)hasEmailAddress;
-(BOOL)hasPhoneNumber;
-(BOOL)isEmailAddress;
-(BOOL)isHTTPAddress;
-(BOOL)isHTTPSAddress;
-(BOOL)isPhoneNumber;
-(BOOL)shouldObscureValue;
-(id)displayName;
-(id)initWithEmailAddress:(id)arg0 ;
-(id)initWithPhoneNumber:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)parametersToObscure;
-(id)phoneNumber;
-(id)propertiesToObscure;
-(id)sanitizeAddressString:(id)arg0 ;
-(void)fixAddress;
-(void)setURL:(id)arg0 ;
-(void)setX_calendarserver_email:(id)arg0 ;


@end


#endif