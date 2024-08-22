// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KTSMTFAILURE_H
#define KTSMTFAILURE_H

@class NSManagedObject, NSString, NSData;


#import "KTSignedMutationTimestamp.h"

@interface KTSMTFailure : NSManagedObject

@property (nonatomic) NSInteger errorCode;
@property (copy, nonatomic) NSString *errorDomain;
@property (retain, nonatomic) NSData *proofOfFailure;
@property (retain, nonatomic) KTSignedMutationTimestamp *smt;


+(id)fetchRequest;


@end


#endif