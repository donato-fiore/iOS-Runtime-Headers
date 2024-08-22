// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTWEBSERVICEBACKGROUNDCONTEXT_H
#define PKPAYMENTWEBSERVICEBACKGROUNDCONTEXT_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentWebServiceBackgroundContext : NSObject <NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (retain) NSMutableDictionary *backgroundTaskRecordsByRecordName; // ivar: _backgroundTaskRecordsByRecordName
@property (retain) NSMutableDictionary *backgroundTaskRecordsByTaskIdentifier; // ivar: _backgroundTaskRecordsByTaskIdentifier


+(BOOL)supportsSecureCoding;
+(id)contextWithArchive:(id)arg0 ;
-(id)backgroundDownloadRecordForRecordName:(id)arg0 ;
-(id)backgroundDownloadRecordForTaskIdentifier:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)remainingTasks;
-(void)addBackgroundDownloadRecord:(id)arg0 forRecordName:(id)arg1 ;
-(void)addBackgroundDownloadRecord:(id)arg0 forTaskIdentifier:(NSUInteger)arg1 ;
-(void)archiveAtPath:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeBackgroundDownloadRecordForRecordName:(id)arg0 ;
-(void)removeBackgroundDownloadRecordForTaskIdentifier:(NSUInteger)arg0 ;


@end


#endif