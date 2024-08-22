// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DISKIMAGEPARAMSXPC_H
#define DISKIMAGEPARAMSXPC_H

@class NSURL, NSUUID, NSArray;
@protocol NSSecureCoding, NSCoding;

#import <Foundation/Foundation.h>

#import "BackendXPC.h"

@interface DiskImageParamsXPC : NSObject <NSSecureCoding, NSCoding>



@property (retain, nonatomic) BackendXPC *backendXPC; // ivar: _backendXPC
@property (nonatomic) NSUInteger blockSize; // ivar: _blockSize
@property (retain, nonatomic) BackendXPC *cacheBackendXPC; // ivar: _cacheBackendXPC
@property (copy, nonatomic) NSURL *cacheURL; // ivar: _cacheURL
@property (copy, nonatomic) NSUUID *instanceID; // ivar: _instanceID
@property (readonly, nonatomic) BOOL isSparseFormat;
@property (readonly, nonatomic) BOOL isWritableFormat;
@property (readonly, nonatomic) NSUInteger numBlocks;
@property (retain, nonatomic) NSArray *shadowBackendsXPC; // ivar: _shadowBackendsXPC


+(BOOL)supportsSecureCoding;
+(BOOL)validateSupportedFormatWithBackendXPC:(id)arg0 error:(*id)arg1 ;
+(id)newWithURL:(id)arg0 fileOpenFlags:(int)arg1 error:(*id)arg2 ;
+(id)newWithUnlockedBackendXPC:(id)arg0 error:(*id)arg1 ;
-(BOOL)allowOnDiskCacheWithSinkDiskImage:(*void)arg0 ;
-(BOOL)lockBackendsWithError:(*id)arg0 ;
-(BOOL)makeNewImageEncryptedWithPassphrase:(char *)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithBackendXPC:(id)arg0 ;
-(id)initWithBackendXPC:(id)arg0 blockSize:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(int)setSizeWithDiskImage:(*void)arg0 newSize:(NSUInteger)arg1 ;
-(struct shared_ptr<DiskImage> )createShadowDiskImageWithBackend:(struct shared_ptr<Backend> )arg0 sinkDiskImage:(struct DiskImage *)arg1 cache_only:(BOOL)arg2 ;
-(struct unique_ptr<DiskImage, std::default_delete<DiskImage>> )createDiskImageWithCache:(BOOL)arg0 ;
-(struct unique_ptr<DiskImage, std::default_delete<DiskImage>> )createSinkDiskImage;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif