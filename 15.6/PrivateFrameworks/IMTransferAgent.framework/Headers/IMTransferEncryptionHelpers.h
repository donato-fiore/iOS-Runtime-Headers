// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTRANSFERENCRYPTIONHELPERS_H
#define IMTRANSFERENCRYPTIONHELPERS_H


#import <Foundation/Foundation.h>


@interface IMTransferEncryptionHelpers : NSObject



+(void)decryptURL:(id)arg0 key:(id)arg1 outputFileName:(id)arg2 completionBlock:(id)arg3 ;
+(void)encryptURL:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif