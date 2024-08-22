// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BMXPCFILEMANAGER_H
#define _BMXPCFILEMANAGER_H

@protocol BMFileManagerImpl;


#import "BMFileManager.h"
#import "BMXPCConnectionWrapper.h"

@interface _BMXPCFileManager : BMFileManager <BMFileManagerImpl>

 {
    NSUInteger _domain;
    BMXPCConnectionWrapper *_connectionWrapper;
}




+(id)globalWeakConnectionCache;
-(BOOL)_removeDirectoryAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)_removeFileAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)replaceFileAtPath:(id)arg0 withFileHandle:(id)arg1 error:(*id)arg2 ;
-(id)_connectionForDomain:(NSUInteger)arg0 ;
-(id)_fileHandleForFileAtPath:(id)arg0 flags:(int)arg1 protection:(int)arg2 error:(*id)arg3 ;
-(id)_memoryMappingForFileAtPath:(id)arg0 flags:(int)arg1 error:(*id)arg2 ;
-(id)_newConnectionForDomain:(NSUInteger)arg0 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)initWithDirectory:(id)arg0 cachingOptions:(NSInteger)arg1 ;
-(id)temporaryFileHandleWithProtection:(int)arg0 error:(*id)arg1 ;
-(void)_configureConnection:(id)arg0 ;


@end


#endif