// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SINGLEDATARECORD_H
#define SINGLEDATARECORD_H

@class NSData;


#import "GPBMessage.h"

@interface SingleDataRecord : GPBMessage

@property (nonatomic) BOOL accountMismatch;
@property (nonatomic) NSUInteger addedMs;
@property (nonatomic) NSUInteger appVersion;
@property (copy, nonatomic) NSData *clientDataVrfoutput;
@property (nonatomic) NSUInteger deletionEscrowExpiryMs;
@property (nonatomic) NSUInteger markedForDeletionMs;


+(id)descriptor;


@end


#endif