// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GENERATEDENCRYPTIONKEY_H
#define GENERATEDENCRYPTIONKEY_H

@class NSManagedObject, NSDate, NSData;


#import "Channel.h"

@interface GeneratedEncryptionKey : NSManagedObject

@property (retain, nonatomic) Channel *channel;
@property (copy, nonatomic) NSDate *dateGenerated;
@property (retain, nonatomic) NSData *originalOutgoingRatchetState;


+(id)fetchRequest;


@end


#endif