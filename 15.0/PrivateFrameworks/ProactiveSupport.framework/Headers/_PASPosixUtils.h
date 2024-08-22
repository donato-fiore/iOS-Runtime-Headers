// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PASPOSIXUTILS_H
#define _PASPOSIXUTILS_H


#import <Foundation/Foundation.h>


@interface _PASPosixUtils : NSObject



// +(int)runCommandWithPath:(char *)arg0 argv:(*char *)arg1 envp:(*char *)arg2 handleStdout:(id)arg3 handleStderr:(unk)arg4  ;
+(int)runCommandWithPath:(char *)arg0 argv:(*char *)arg1 envp:(*char *)arg2 stdoutData:(*id)arg3 stderrData:(*id)arg4 ;


@end


#endif