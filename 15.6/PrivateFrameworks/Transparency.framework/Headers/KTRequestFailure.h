// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KTREQUESTFAILURE_H
#define KTREQUESTFAILURE_H

@class NSManagedObject, NSString, NSData;


#import "KTRequest.h"

@interface KTRequestFailure : NSManagedObject

@property (nonatomic) NSInteger errorCode;
@property (copy, nonatomic) NSString *errorDomain;
@property (retain, nonatomic) NSData *proofOfFailure;
@property (retain, nonatomic) KTRequest *request;


+(id)fetchRequest;


@end


#endif