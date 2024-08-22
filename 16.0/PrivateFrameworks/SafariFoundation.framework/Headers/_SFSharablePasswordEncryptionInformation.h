// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFSHARABLEPASSWORDENCRYPTIONINFORMATION_H
#define _SFSHARABLEPASSWORDENCRYPTIONINFORMATION_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _SFSharablePasswordEncryptionInformation : NSObject

@property (readonly, copy, nonatomic) NSData *encryptedPasswordData; // ivar: _encryptedPasswordData
@property (readonly, copy, nonatomic) NSData *encryptionKeyReference; // ivar: _encryptionKeyReference


-(id)initWithEncryptedPasswordData:(id)arg0 encryptionKeyReference:(id)arg1 ;


@end


#endif