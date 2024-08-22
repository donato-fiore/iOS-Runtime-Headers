// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSSUBMITRAPIDLOGREQUESTMO_H
#define DRSSUBMITRAPIDLOGREQUESTMO_H

@class NSNumber, NSString, NSData;


#import "DRSSubmitLogRequestMO.h"

@interface DRSSubmitRapidLogRequestMO : DRSSubmitLogRequestMO

@property (copy, nonatomic) NSNumber *cfDidSucceed;
@property (copy, nonatomic) NSString *cfFailureReason;
@property (retain, nonatomic) NSData *cfReplyPayload;


+(id)fetchRequest;


@end


#endif