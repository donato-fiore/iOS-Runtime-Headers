// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNDONATIONPREFERENCESLOGGER_H
#define _CNDONATIONPREFERENCESLOGGER_H

@class NSString;
@protocol CNDonationPreferencesLogger, OS_os_log;

#import <Foundation/Foundation.h>


@interface _CNDonationPreferencesLogger : NSObject <CNDonationPreferencesLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log_t; // ivar: _log_t
@property (readonly) Class superclass;


-(id)init;
-(void)isDonationsEnabled:(BOOL)arg0 ;
-(void)setDonationsEnabled:(BOOL)arg0 ;


@end


#endif