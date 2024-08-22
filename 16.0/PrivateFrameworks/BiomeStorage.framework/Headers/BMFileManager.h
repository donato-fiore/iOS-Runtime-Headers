// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMFILEMANAGER_H
#define BMFILEMANAGER_H

@class NSString;
@protocol BMFileManagerImpl, BMFileManagerDelegate;

#import <Foundation/Foundation.h>

#import "BMCache.h"

@interface BMFileManager : NSObject <BMFileManagerImpl>

 {
    NSInteger _cachingOptions;
    BMCache *_fileHandleCache;
    BMCache *_memoryMappingCache;
}


@property (weak, nonatomic) NSObject<BMFileManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *directory; // ivar: _directory


+(id)direct;
+(id)fileManagerWithDirectAccessToDirectory:(id)arg0 cachingOptions:(NSInteger)arg1 extraFlags:(int)arg2 protection:(int)arg3 ;
+(id)fileManagerWithMediatedAccessToDirectory:(id)arg0 ;
+(id)globalWeakFileHandleCache;
+(id)globalWeakMemoryMappingCache;
-(BOOL)_removeDirectoryAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)_removeFileAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)acquireLockfile:(id)arg0 andRunBlock:(id)arg1 ;
-(BOOL)createDirectoryAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeDirectoryAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeFileAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)replaceFileAtPath:(id)arg0 withData:(id)arg1 error:(*id)arg2 ;
-(BOOL)replaceFileAtPath:(id)arg0 withFileHandle:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)sizeOfFileAtPath:(id)arg0 error:(*id)arg1 ;
-(id)_fileHandleForFileAtPath:(id)arg0 flags:(int)arg1 protection:(int)arg2 error:(*id)arg3 ;
-(id)_memoryMappingForFileAtPath:(id)arg0 flags:(int)arg1 error:(*id)arg2 ;
-(id)_memoryMappingFromFileHandle:(id)arg0 flags:(int)arg1 error:(*id)arg2 ;
-(id)contentsOfDirectoryAtPath:(id)arg0 error:(*id)arg1 ;
-(id)dataWithContentsOfFileAtPath:(id)arg0 error:(*id)arg1 ;
-(id)fileHandleForFileAtPath:(id)arg0 flags:(int)arg1 protection:(int)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithDirectory:(id)arg0 cachingOptions:(NSInteger)arg1 ;
-(id)memoryMappingForFileAtPath:(id)arg0 flags:(int)arg1 error:(*id)arg2 ;
-(id)temporaryFileHandleWithProtection:(int)arg0 error:(*id)arg1 ;


@end


#endif