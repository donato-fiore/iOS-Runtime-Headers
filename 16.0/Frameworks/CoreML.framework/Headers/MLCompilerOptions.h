// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCOMPILEROPTIONS_H
#define MLCOMPILEROPTIONS_H

@class NSData, NSString, NSNumber, NSURL;

#import <Foundation/Foundation.h>


@interface MLCompilerOptions : NSObject

@property BOOL allowsPixelBufferDirectBinding; // ivar: _allowsPixelBufferDirectBinding
@property BOOL containerIsCloud; // ivar: _containerIsCloud
@property BOOL dryRun; // ivar: _dryRun
@property BOOL encryptModel; // ivar: _encryptModel
@property (copy) NSData *iv; // ivar: _iv
@property (copy) NSData *key; // ivar: _key
@property (copy) NSString *keyID; // ivar: _keyID
@property (copy) NSNumber *keyInfoVersion; // ivar: _keyInfoVersion
@property int mlProgramAddDuringCompilationMode; // ivar: _mlProgramAddDuringCompilationMode
@property (copy) NSData *mlsinf; // ivar: _mlsinf
@property (retain) NSString *platform; // ivar: _platform
@property (retain) NSString *platformVersion; // ivar: _platformVersion
@property (copy) NSData *sinf; // ivar: _sinf
@property (copy) NSURL *specURL; // ivar: _specURL
@property BOOL trainWithMLCompute; // ivar: _trainWithMLCompute
@property BOOL usesCodeSigningIdentityForEncryption; // ivar: _usesCodeSigningIdentityForEncryption


+(id)defaultOptions;
-(id)init;


@end


#endif