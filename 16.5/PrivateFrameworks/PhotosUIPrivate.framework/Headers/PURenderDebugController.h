// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PURENDERDEBUGCONTROLLER_H
#define PURENDERDEBUGCONTROLLER_H


#import <Foundation/Foundation.h>


@interface PURenderDebugController : NSObject



+(id)debugFilesDirectory;
+(id)getDebugFiles;
+(id)listDebugFilesViewController;
+(id)shareSheetViewController;
+(void)deleteDebugDirectory;
+(void)setCoreImageDebugMode:(BOOL)arg0 dumpInputs:(BOOL)arg1 dumpOutputs:(BOOL)arg2 dumpIntermediates:(BOOL)arg3 dumpTiming:(BOOL)arg4 ;


@end


#endif