// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCASSETSTORE_H
#define FCASSETSTORE_H

@class NSString, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FCThreadSafeMutableSet.h"

@interface FCAssetStore : NSObject {
    NSString *_directoryPath;
    NSString *_preferredExtension;
    NSMutableSet *_knownKeys;
    NSObject<OS_dispatch_queue> *_removalQueue;
    FCThreadSafeMutableSet *_keysAwaitingRemoval;
}




-(NSUInteger)sizeOfFileForKey:(id)arg0 ;
-(NSUInteger)storeSize;
-(NSUInteger)storeSizeForKeys:(id)arg0 ;
-(id)allKeys;
-(id)copyData:(id)arg0 withKey:(id)arg1 ;
-(id)copyFileAtPath:(id)arg0 withKey:(id)arg1 ;
-(id)filePathForKey:(id)arg0 ;
-(id)fileURLForKey:(id)arg0 ;
-(id)initWithDirectoryAtPath:(id)arg0 preferredAssetPathExtension:(id)arg1 ;
-(id)initWithDirectoryAtPath:(id)arg0 preferredAssetPathExtension:(id)arg1 knownKeys:(id)arg2 ;
-(id)moveFileAtPath:(id)arg0 withKey:(id)arg1 ;
-(id)moveFileAtURL:(id)arg0 withKey:(id)arg1 ;
-(void)removeAllFiles;
-(void)removeAllFilesExceptKeys:(id)arg0 ;
-(void)removeFileWithKey:(id)arg0 ;


@end


#endif