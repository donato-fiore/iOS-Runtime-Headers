// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KTREQUESTID_H
#define KTREQUESTID_H

@class NSManagedObject, NSUUID;


#import "KTRequest.h"

@interface KTRequestID : NSManagedObject

@property (retain, nonatomic) KTRequest *request;
@property (copy, nonatomic) NSUUID *requestId;


+(id)fetchRequest;


@end


#endif