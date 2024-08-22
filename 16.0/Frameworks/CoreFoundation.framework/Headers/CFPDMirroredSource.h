// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CFPDMIRROREDSOURCE_H
#define CFPDMIRROREDSOURCE_H



#import "CFPDSource.h"

@interface CFPDMirroredSource : CFPDSource {
    *__CFSet _mirroredKeys;
    CFPDSource *_mirrorSource;
}




-(BOOL)enqueueNewKey:(id)arg0 value:(id)arg1 encoding:(int)arg2 inBatch:(BOOL)arg3 fromMessage:(id)arg4 ;
-(id)acceptMessage:(id)arg0 ;
-(id)createDiskWrite:(SEL)arg0 ;
-(id)initWithDomain:(struct __CFString *)arg0 userName:(struct __CFString *)arg1 byHost:(BOOL)arg2 managed:(BOOL)arg3 mirroredKeys:(struct __CFArray *)arg4 shmemIndex:(short)arg5 daemon:(id)arg6 ;
-(int)cacheFileInfoForWriting:(BOOL)arg0 euid:(unsigned int)arg1 egid:(unsigned int)arg2 didCreate:(*BOOL)arg3 ;
-(void)clearCacheForReason:(struct __CFString *)arg0 ;
-(void)dealloc;
-(void)drainPendingChanges;
-(void)handleWritingResult:(struct __CFDictionary *)arg0 ;
-(void)lock;
-(void)unlock;


@end


#endif