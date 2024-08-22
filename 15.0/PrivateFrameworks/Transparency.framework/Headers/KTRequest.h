// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KTREQUEST_H
#define KTREQUEST_H

@class NSManagedObject, NSData, NSString, NSDate, NSSet, NSUUID;


#import "DownloadRecord.h"

@interface KTRequest : NSManagedObject

@property (retain, nonatomic) NSData *accountId;
@property (copy, nonatomic) NSString *application;
@property (retain, nonatomic) NSData *clientLoggableDatas;
@property (copy, nonatomic) NSDate *earliestAddedDate;
@property (retain, nonatomic) NSSet *failures;
@property (retain, nonatomic) NSSet *fetchRecord;
@property (retain, nonatomic) NSData *queryRequest;
@property (retain, nonatomic) NSData *queryResponse;
@property (retain, nonatomic) DownloadRecord *requestDownloadRecord;
@property (retain, nonatomic) NSSet *requestIDCache;
@property (copy, nonatomic) NSUUID *requestId;
@property (nonatomic) CGFloat requestTime;
@property (nonatomic) NSInteger responseErrorCode;
@property (copy, nonatomic) NSDate *responseTime;
@property (nonatomic) NSInteger sequenceId;
@property (copy, nonatomic) NSString *serverHint;
@property (retain, nonatomic) NSData *serverLoggableDatas;
@property (retain, nonatomic) DownloadRecord *smtDownloadRecord;
@property (retain, nonatomic) NSSet *smts;
@property (nonatomic) BOOL tooManyVRFs;
@property (nonatomic) NSInteger type;
@property (copy, nonatomic) NSString *uri;
@property (nonatomic) NSInteger verificationResult;


+(id)fetchRequest;


@end


#endif