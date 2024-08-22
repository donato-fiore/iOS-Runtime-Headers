// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEMESSAGESECURITYINFORMATION_H
#define MEMESSAGESECURITYINFORMATION_H

@class NSString, NSError, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MEMessageSecurityInformation : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *decoderID; // ivar: _decoderID
@property (readonly, nonatomic) NSError *encryptionError; // ivar: _encryptionError
@property (readonly, nonatomic) BOOL isEncrypted; // ivar: _isEncrypted
@property (readonly, nonatomic) NSString *localizedRemoteContentBlockingReason; // ivar: _localizedRemoteContentBlockingReason
@property (readonly, nonatomic) BOOL shouldBlockRemoteContent; // ivar: _shouldBlockRemoteContent
@property (readonly, nonatomic) NSArray *signers; // ivar: _signers
@property (readonly, nonatomic) NSError *signingError; // ivar: _signingError


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSigners:(id)arg0 isEncrypted:(BOOL)arg1 signingError:(id)arg2 encryptionError:(id)arg3 ;
-(id)initWithSigners:(id)arg0 isEncrypted:(BOOL)arg1 signingError:(id)arg2 encryptionError:(id)arg3 shouldBlockRemoteContent:(BOOL)arg4 localizedRemoteContentBlockingReason:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif