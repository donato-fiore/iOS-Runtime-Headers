// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOWNLOADRECORD_H
#define DOWNLOADRECORD_H

@class NSManagedObject, NSString, NSUUID, NSData;


#import "KTRequest.h"

@interface DownloadRecord : NSManagedObject

@property (copy, nonatomic) NSString *application;
@property (copy, nonatomic) NSUUID *downloadId;
@property (nonatomic) NSInteger downloadType;
@property (retain, nonatomic) KTRequest *ktRequest;
@property (retain, nonatomic) NSData *requestData;
@property (nonatomic) CGFloat requestTime;
@property (retain, nonatomic) NSData *response;
@property (retain, nonatomic) NSData *revisions;
@property (copy, nonatomic) NSString *serverHint;
@property (retain, nonatomic) KTRequest *smtRequest;
@property (nonatomic) NSInteger startSLHRevision;


+(id)fetchRequest;
-(BOOL)expired;


@end


#endif