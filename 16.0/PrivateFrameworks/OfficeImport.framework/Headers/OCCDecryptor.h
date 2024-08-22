// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OCCDECRYPTOR_H
#define OCCDECRYPTOR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "OITSUTemporaryDirectory.h"

@interface OCCDecryptor : NSObject {
    OITSUTemporaryDirectory *mTempDirectory;
    NSString *mBaseStringForOutputFilename;
    *OCCStreamer mStreamer;
}


@property (readonly, nonatomic) NSString *outputFilename; // ivar: mOutputFilename


+(id)agileDescriptorNamespace;
+(id)agilePasswordKeyEncryptorNamespace;
+(id)allocTempFileWithBase:(id)arg0 outFilename:(*id)arg1 tempDirectory:(*id)arg2 ;
-(BOOL)decrypt;
-(BOOL)decryptIntoOutputFile;
-(BOOL)isReadProtectedUsingDefaultPassphrase;
-(BOOL)verifyPassphrase:(id)arg0 ;
-(id)initWithStreamer:(struct OCCStreamer *)arg0 ;
-(void)dealloc;
-(void)deleteOutputFile;


@end


#endif