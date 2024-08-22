// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTROPERATIONALCSRINFO_H
#define MTROPERATIONALCSRINFO_H

@class NSData;

#import <Foundation/Foundation.h>


@interface MTROperationalCSRInfo : NSObject

@property (readonly, copy, nonatomic) NSData *attestationSignature; // ivar: _attestationSignature
@property (readonly, copy, nonatomic) NSData *csr; // ivar: _csr
@property (readonly, copy, nonatomic) NSData *csrElementsTLV; // ivar: _csrElementsTLV
@property (readonly, copy, nonatomic) NSData *csrNonce; // ivar: _csrNonce


-(id)initWithCSR:(id)arg0 csrNonce:(id)arg1 csrElementsTLV:(id)arg2 attestationSignature:(id)arg3 ;


@end


#endif