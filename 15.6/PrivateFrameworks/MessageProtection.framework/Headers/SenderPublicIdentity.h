// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SENDERPUBLICIDENTITY_H
#define SENDERPUBLICIDENTITY_H

@class NSManagedObject, NSDate, NSString, NSData;


#import "RegisteredPreKey.h"

@interface SenderPublicIdentity : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *destinationHash;
@property (retain, nonatomic) RegisteredPreKey *messagedKey;
@property (retain, nonatomic) NSData *skippedCounters;
@property (nonatomic) int upperBufferIndex;


+(id)fetchRequest;


@end


#endif