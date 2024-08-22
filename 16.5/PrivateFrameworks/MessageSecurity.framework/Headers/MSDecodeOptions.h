// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSDECODEOPTIONS_H
#define MSDECODEOPTIONS_H

@class NSData, NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface MSDecodeOptions : NSObject

@property (retain) NSData *LAContext; // ivar: _LAContext
@property (retain) NSArray *additionalCertificates; // ivar: _additionalCertificates
@property (retain) NSArray *anchorCertificates; // ivar: _anchorCertificates
@property *__SecIdentity identity; // ivar: _identity
@property (retain) NSData *key; // ivar: _key
@property (retain) NSArray *signerPolicies; // ivar: _signerPolicies
@property BOOL verifySignatures; // ivar: _verifySignatures
@property BOOL verifySigners; // ivar: _verifySigners
@property (retain) NSDate *verifyTime; // ivar: _verifyTime


-(id)init;
-(id)initWithDecryptionIdentity:(struct __SecIdentity *)arg0 ;
-(id)initWithDecryptionKey:(id)arg0 ;
-(void)dealloc;


@end


#endif