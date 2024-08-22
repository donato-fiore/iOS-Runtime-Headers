// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KTSIGNEDMUTATIONTIMESTAMP_H
#define KTSIGNEDMUTATIONTIMESTAMP_H

@class NSManagedObject, NSSet, NSData;


#import "KTRequest.h"

@interface KTSignedMutationTimestamp : NSManagedObject

@property (retain, nonatomic) NSSet *failures;
@property (nonatomic) NSInteger mutationTime;
@property (nonatomic) CGFloat receiptTime;
@property (retain, nonatomic) KTRequest *request;
@property (nonatomic) NSInteger signatureVerified;
@property (retain, nonatomic) NSData *smt;
@property (nonatomic) NSInteger verificationResult;


+(id)fetchRequest;


@end


#endif