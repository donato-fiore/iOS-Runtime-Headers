// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNDONATIONACCOUNTLOGGER_H
#define _CNDONATIONACCOUNTLOGGER_H

@class NSString;
@protocol CNDonationAccountLogger, OS_os_log;

#import <Foundation/Foundation.h>


@interface _CNDonationAccountLogger : NSObject <CNDonationAccountLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log_t; // ivar: _log_t
@property (readonly) Class superclass;


-(id)init;
-(void)accountAdded:(id)arg0 ;
-(void)accountChanged:(id)arg0 ;
-(void)accountRemoved:(id)arg0 ;
-(void)accountsDidNotChange;
-(void)donating:(id)arg0 ;
-(void)donationFailedWithError:(id)arg0 ;
-(void)pluginLoaded;
-(void)pluginUnloaded;
-(void)removalFailedWithError:(id)arg0 ;
-(void)removing:(id)arg0 ;


@end


#endif