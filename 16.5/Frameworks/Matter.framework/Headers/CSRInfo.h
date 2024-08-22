// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSRINFO_H
#define CSRINFO_H

@class NSData;

#import <Foundation/Foundation.h>


@interface CSRInfo : NSObject

@property (copy, nonatomic) NSData *csr; // ivar: _csr
@property (copy, nonatomic) NSData *elements; // ivar: _elements
@property (copy, nonatomic) NSData *elementsSignature; // ivar: _elementsSignature
@property (copy, nonatomic) NSData *nonce; // ivar: _nonce


-(id)initWithNonce:(id)arg0 elements:(id)arg1 elementsSignature:(id)arg2 csr:(id)arg3 ;


@end


#endif