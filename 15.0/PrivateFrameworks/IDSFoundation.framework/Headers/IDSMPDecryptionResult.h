// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSMPDECRYPTIONRESULT_H
#define IDSMPDECRYPTIONRESULT_H

@class NSData, NSDictionary;

#import <Foundation/Foundation.h>


@interface IDSMPDecryptionResult : NSObject

@property (copy, nonatomic) id *commitBlock; // ivar: _commitBlock
@property (retain, nonatomic) NSData *decryptedData; // ivar: _decryptedData
@property (retain, nonatomic) NSDictionary *encryptedAttributes; // ivar: _encryptedAttributes


-(id)initWithData:(id)arg0 encryptedAttributes:(id)arg1 withCommitState:(id)arg2 ;


@end


#endif