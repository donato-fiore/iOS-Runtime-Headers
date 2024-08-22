// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNDSIMCARDMONITOR_H
#define CNDSIMCARDMONITOR_H

@class CoreTelephonyClient, NSString, CNReplaySubject;
@protocol CNDSIMCardMonitor, CNDCoreTelephonyServices, OS_dispatch_queue, CNCancelable;

#import <Foundation/Foundation.h>


@interface CNDSIMCardMonitor : NSObject <CNDSIMCardMonitor>



@property (readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient; // ivar: _coreTelephonyClient
@property (readonly, nonatomic) NSObject<CNDCoreTelephonyServices> *coreTelephonyServices; // ivar: _coreTelephonyServices
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) *__CTServerConnection serverConnection; // ivar: _serverConnection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverConnectionQueue; // ivar: _serverConnectionQueue
@property (readonly, nonatomic) CNReplaySubject *subject; // ivar: _subject
@property (retain, nonatomic) NSObject<CNCancelable> *subjectToken; // ivar: _subjectToken
@property (readonly) Class superclass;


+(id)continuousPhoneNumberObservableWithCoreTelephonyClient:(id)arg0 services:(id)arg1 serverConnection:(struct __CTServerConnection *)arg2 ;
+(id)infoWithCompletion:(id)arg0 ;
+(id)os_log;
+(id)phoneNumberChangedObservableWithCoreTelephonyServices:(id)arg0 serverConnection:(struct __CTServerConnection *)arg1 ;
+(id)phoneNumberObservableWithCoreTelephonyClient:(id)arg0 ;
+(void)infoWithClient:(id)arg0 completion:(id)arg1 ;
-(id)addInfoChangeHandler:(id)arg0 ;
-(id)init;
-(id)initWithCoreTelephonyClient:(id)arg0 services:(id)arg1 ;
-(void)configureStateIfNecessary;
-(void)dealloc;
-(void)nts_configureConnectionIfNecessary;
-(void)nts_configureSubjectIfNecessary;


@end


#endif