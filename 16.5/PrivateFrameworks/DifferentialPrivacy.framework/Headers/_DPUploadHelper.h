// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPUPLOADHELPER_H
#define _DPUPLOADHELPER_H


#import <Foundation/Foundation.h>


@interface _DPUploadHelper : NSObject



+(id)ipsFilePathForDate:(id)arg0 useGMT:(BOOL)arg1 ;
+(id)submissionFilePathInDirectory:(id)arg0 uploadName:(id)arg1 forDate:(id)arg2 useGMT:(BOOL)arg3 suffix:(id)arg4 ;
+(id)writeDediscoSubmission:(id)arg0 toFileInDirectory:(id)arg1 ;
+(id)writeFileForDA:(id)arg0 ;
+(id)writeFileForDedisco:(id)arg0 ;
+(id)writeFileForEN:(id)arg0 ;
+(id)writeFileForParsec:(id)arg0 ;
+(id)writeFileForParsec:(id)arg0 inDirectory:(id)arg1 ;


@end


#endif