// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUBITCODERENCRYPTREQUEST_H
#define CUBITCODERENCRYPTREQUEST_H

@class NSData;

#import <Foundation/Foundation.h>


@interface CUBitCoderEncryptRequest : NSObject

@property (copy, nonatomic) NSData *aad; // ivar: _aad
@property (nonatomic) NSUInteger authTagLength; // ivar: _authTagLength
@property (copy, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) NSData *nonce; // ivar: _nonce




@end


#endif