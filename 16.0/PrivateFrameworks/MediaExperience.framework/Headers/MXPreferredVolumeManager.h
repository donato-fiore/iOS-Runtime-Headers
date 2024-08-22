// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXPREFERREDVOLUMEMANAGER_H
#define MXPREFERREDVOLUMEMANAGER_H


#import <Foundation/Foundation.h>


@interface MXPreferredVolumeManager : NSObject



+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)postNotification:(id)arg0 category:(id)arg1 mode:(id)arg2 volume:(id)arg3 reason:(id)arg4 refCon:(id)arg5 sequenceNumber:(NSInteger)arg6 ;


@end


#endif