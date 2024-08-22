// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DICREATEPARAMS_H
#define DICREATEPARAMS_H

@class NSString;


#import "DIBaseParams.h"

@interface DICreateParams : DIBaseParams

@property (nonatomic) NSUInteger encryptionMethod; // ivar: _encryptionMethod
@property (nonatomic) NSUInteger numBlocks; // ivar: _numBlocks
@property (copy, nonatomic) NSString *systemKeychainAccount; // ivar: _systemKeychainAccount


+(BOOL)supportsSecureCoding;
-(BOOL)checkExistingFileWithIsDirectory:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)createDiskImageParamsWithError:(*id)arg0 ;
-(BOOL)createEncryptionWithXPCHandler:(id)arg0 error:(*id)arg1 ;
-(BOOL)createWithError:(*id)arg0 ;
-(BOOL)eraseIfExistingWithError:(*id)arg0 ;
-(BOOL)onErrorCleanup;
-(BOOL)resizeWithNumBlocks:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setPassphrase:(char *)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 numBlocks:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)createDiskImageParamsXPC;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif