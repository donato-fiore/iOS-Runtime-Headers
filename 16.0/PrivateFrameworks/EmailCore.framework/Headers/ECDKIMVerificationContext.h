// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECDKIMVERIFICATIONCONTEXT_H
#define ECDKIMVERIFICATIONCONTEXT_H

@class NSData, NSArray;

#import <Foundation/Foundation.h>

#import "ECRawMessageHeaders.h"

@interface ECDKIMVerificationContext : NSObject

@property (readonly, copy, nonatomic) NSData *bodyData; // ivar: _bodyData
@property (copy, nonatomic) NSArray *dkimSignatureHeaders; // ivar: _dkimSignatureHeaders
@property (readonly, nonatomic) ECRawMessageHeaders *headers; // ivar: _headers
@property (nonatomic) BOOL requireFullBodySignature; // ivar: _requireFullBodySignature


-(id)initWithHeaders:(id)arg0 bodyData:(id)arg1 dkimSignatureHeaders:(id)arg2 ;
-(void)removeDKIMSignatureHeaders:(id)arg0 ;


@end


#endif