// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KTSTHFAILURE_H
#define KTSTHFAILURE_H

@class NSManagedObject, NSString, NSData;


#import "KTTreeHead.h"

@interface KTSTHFailure : NSManagedObject

@property (nonatomic) NSInteger errorCode;
@property (copy, nonatomic) NSString *errorDomain;
@property (retain, nonatomic) NSData *proofOfFailure;
@property (retain, nonatomic) KTTreeHead *sth;
@property (nonatomic) NSInteger verificationType;


+(id)fetchRequest;


@end


#endif