// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNDONATIONMANAGEDDUPLICATESLOGGER_H
#define _CNDONATIONMANAGEDDUPLICATESLOGGER_H

@class NSString;
@protocol CNDonationManagedDuplicatesLogger, OS_os_log;

#import <Foundation/Foundation.h>


@interface _CNDonationManagedDuplicatesLogger : NSObject <CNDonationManagedDuplicatesLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log_t; // ivar: _log_t
@property (readonly) Class superclass;


-(id)init;
-(void)didFailRefreshingDuplicates:(id)arg0 ;
-(void)didRefreshDuplicates;
-(void)didSkipRefreshDuplicates:(id)arg0 ;
-(void)managedDuplicateServiceCheckingIn;
-(void)managedDuplicateServiceCriteria:(id)arg0 ;
-(void)willRefreshDuplicates;


@end


#endif