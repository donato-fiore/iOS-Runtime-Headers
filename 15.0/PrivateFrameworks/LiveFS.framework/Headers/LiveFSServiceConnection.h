// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LIVEFSSERVICECONNECTION_H
#define LIVEFSSERVICECONNECTION_H

@class LiveFSServiceMountPoint<NSFileProviderLiveItemImplementation>, NSXPCConnection;
@protocol NSFileProviderLiveItemCore, NSFileProviderLiveItemConnectionMaker, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LiveFSServiceConnection : NSObject <NSFileProviderLiveItemCore, NSFileProviderLiveItemConnectionMaker>

 {
    LiveFSServiceMountPoint<NSFileProviderLiveItemImplementation> *mount;
    NSXPCConnection *ourConnection;
    NSObject<OS_dispatch_queue> *setUpdateInterestQueue;
}


@property (readonly) NSUInteger ourID; // ivar: _ourID


+(id)newConnectionForMount:(id)arg0 connection:(id)arg1 error:(*id)arg2 ;
+(id)newExportObjectForObject:(id)arg0 connection:(id)arg1 error:(*id)arg2 ;
-(id)initForMount:(id)arg0 connection:(id)arg1 error:(*id)arg2 ;
-(id)sanitizedAttrsForNewObjectAttrs:(id)arg0 forType:(unsigned int)arg1 ;
-(void)LIAccessCheck:(id)arg0 requestedAccess:(unsigned int)arg1 reply:(id)arg2 ;
-(void)LIClose:(id)arg0 withMode:(int)arg1 forPID:(int)arg2 reply:(id)arg3 ;
-(void)LICreate:(id)arg0 named:(id)arg1 withAttrs:(id)arg2 forPID:(int)arg3 reply:(id)arg4 ;
-(void)LIGetAttr:(id)arg0 reply:(id)arg1 ;
-(void)LIGetDomainAttributes:(id)arg0 ;
-(void)LIGetFsAttr:(id)arg0 name:(id)arg1 reply:(id)arg2 ;
-(void)LIGetParentsAndAttributesForFileIDs:(id)arg0 reply:(id)arg1 ;
-(void)LIGetPathsAndAttributesForFileIDs:(id)arg0 reply:(id)arg1 ;
-(void)LIGetRootFileHandle:(id)arg0 ;
-(void)LIGetRootFileHandleWithError:(id)arg0 ;
-(void)LIGetXattr:(id)arg0 name:(id)arg1 forPID:(int)arg2 reply:(id)arg3 ;
-(void)LIListXattrs:(id)arg0 forPID:(int)arg1 reply:(id)arg2 ;
-(void)LILookup:(id)arg0 name:(id)arg1 reply:(id)arg2 ;
-(void)LIMakeClone:(id)arg0 named:(id)arg1 inDirectory:(id)arg2 withAttrs:(id)arg3 andFlags:(unsigned int)arg4 forPID:(int)arg5 reply:(id)arg6 ;
-(void)LIMakeDir:(id)arg0 named:(id)arg1 withAttrs:(id)arg2 forPID:(int)arg3 reply:(id)arg4 ;
-(void)LIMakeLink:(id)arg0 named:(id)arg1 inDirectory:(id)arg2 forPID:(int)arg3 reply:(id)arg4 ;
-(void)LIMakeSymLink:(id)arg0 named:(id)arg1 withContents:(id)arg2 andAttrs:(id)arg3 forPID:(int)arg4 reply:(id)arg5 ;
-(void)LIOpen:(id)arg0 withMode:(int)arg1 forPID:(int)arg2 reply:(id)arg3 ;
-(void)LIPathConf:(id)arg0 reply:(id)arg1 ;
-(void)LIRead:(id)arg0 atOffset:(NSUInteger)arg1 withBuffer:(id)arg2 forPID:(int)arg3 reply:(id)arg4 ;
-(void)LIRead:(id)arg0 length:(NSUInteger)arg1 atOffset:(NSUInteger)arg2 forPID:(int)arg3 reply:(id)arg4 ;
-(void)LIReadDir:(id)arg0 amount:(NSUInteger)arg1 forCookie:(NSUInteger)arg2 andVerifier:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)LIReadDir:(id)arg0 intoBuffer:(id)arg1 forCookie:(NSUInteger)arg2 andVerifier:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)LIReadDirAndAttrs:(id)arg0 amount:(NSUInteger)arg1 forCookie:(NSUInteger)arg2 andVerifier:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)LIReadDirAndAttrs:(id)arg0 intoBuffer:(id)arg1 forCookie:(NSUInteger)arg2 andVerifier:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)LIReadLink:(id)arg0 reply:(id)arg1 ;
-(void)LIReclaim:(id)arg0 reply:(id)arg1 ;
-(void)LIRemove:(id)arg0 name:(id)arg1 forPID:(int)arg2 reply:(id)arg3 ;
-(void)LIRemoveDir:(id)arg0 name:(id)arg1 forPID:(int)arg2 reply:(id)arg3 ;
-(void)LIRename:(id)arg0 name:(id)arg1 toDir:(id)arg2 andName:(id)arg3 withFlags:(unsigned int)arg4 forPID:(int)arg5 reply:(id)arg6 ;
-(void)LISearch:(id)arg0 token:(id)arg1 criteria:(id)arg2 resumeAt:(id)arg3 maxData:(unsigned int)arg4 maxDelay:(CGFloat)arg5 initialCredits:(unsigned int)arg6 reply:(id)arg7 ;
-(void)LISearchAbort:(id)arg0 reply:(id)arg1 ;
-(void)LISearchReplenishCredits:(id)arg0 credits:(unsigned int)arg1 reply:(id)arg2 ;
-(void)LISetAttr:(id)arg0 setAttrs:(id)arg1 forPID:(int)arg2 reply:(id)arg3 ;
-(void)LISetFsAttr:(id)arg0 name:(id)arg1 value:(id)arg2 reply:(id)arg3 ;
-(void)LISetUpdateInterest:(id)arg0 interest:(BOOL)arg1 reply:(id)arg2 ;
-(void)LISetXattr:(id)arg0 name:(id)arg1 value:(id)arg2 how:(int)arg3 forPID:(int)arg4 reply:(id)arg5 ;
-(void)LIStatFS:(id)arg0 reply:(id)arg1 ;
-(void)LIVerifyExistenceWithFileIDs:(id)arg0 reply:(id)arg1 ;
-(void)LIWrite:(id)arg0 atOffset:(NSUInteger)arg1 sharedBuffer:(id)arg2 forPID:(int)arg3 reply:(id)arg4 ;
-(void)LIWrite:(id)arg0 atOffset:(NSUInteger)arg1 withBuffer:(id)arg2 forPID:(int)arg3 reply:(id)arg4 ;
-(void)connectionWasInterrupted;
-(void)connectionWasInvalidated;
-(void)dealloc;
-(void)scrubOurClientId;


@end


#endif