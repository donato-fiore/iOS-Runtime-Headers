// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPDSECUREBACKUPCONTEXT_H
#define CDPDSECUREBACKUPCONTEXT_H

@class CDPDevice, NSString;

#import <Foundation/Foundation.h>

#import "CDPDCircleJoinResult.h"

@interface CDPDSecureBackupContext : NSObject

@property (retain, nonatomic) CDPDCircleJoinResult *circleJoinResult; // ivar: _circleJoinResult
@property (copy, nonatomic) CDPDevice *device; // ivar: _device
@property (copy, nonatomic) NSString *localSecret; // ivar: _localSecret
@property (nonatomic) NSUInteger localSecretType; // ivar: _localSecretType
@property (retain, nonatomic) NSString *preRecordUUID; // ivar: _preRecordUUID
@property (copy, nonatomic) NSString *recoveryKey; // ivar: _recoveryKey
@property (copy, nonatomic) NSString *recoverySecret; // ivar: _recoverySecret
@property (nonatomic) BOOL silentRecovery; // ivar: _silentRecovery
@property (nonatomic) BOOL usePreviouslyCachedRecoveryKey; // ivar: _usePreviouslyCachedRecoveryKey
@property (nonatomic) BOOL usePreviouslyCachedSecret; // ivar: _usePreviouslyCachedSecret


-(id)description;


@end


#endif