// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLMODELENCRYPTIONUTILS_H
#define MLMODELENCRYPTIONUTILS_H


#import <Foundation/Foundation.h>


@interface MLModelEncryptionUtils : NSObject



+(BOOL)addEncryptionHeaderToUnencryptedFile:(id)arg0 saveToFile:(id)arg1 error:(*id)arg2 ;
+(BOOL)encryptFile:(id)arg0 withKey:(id)arg1 iv:(id)arg2 saveToFile:(id)arg3 error:(*id)arg4 ;
+(id)sinfData;


@end


#endif