// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNDONATIONEXTENSIONLOGGER_H
#define _CNDONATIONEXTENSIONLOGGER_H

@class NSString;
@protocol CNDonationExtensionLogger, OS_os_log;

#import <Foundation/Foundation.h>


@interface _CNDonationExtensionLogger : NSObject <CNDonationExtensionLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log_t; // ivar: _log_t
@property (readonly) Class superclass;


-(id)init;
-(void)couldNotLoadDonorExtensionForIdentifier:(id)arg0 error:(id)arg1 ;
-(void)couldNotRedonateValuesWithReason:(NSUInteger)arg0 error:(id)arg1 ;
-(void)couldNotRenewDonation:(id)arg0 error:(id)arg1 ;
-(void)didExpireDonation:(id)arg0 withError:(id)arg1 ;
-(void)didRedonateValuesWithReason:(NSUInteger)arg0 ;
-(void)didRenewDonation:(id)arg0 untilDate:(id)arg1 ;
-(void)loadedDonorExtension:(id)arg0 forIdentifier:(id)arg1 ;
-(void)willRedonateValuesWithReason:(NSUInteger)arg0 ;
-(void)willRenewDonation:(id)arg0 ;


@end


#endif