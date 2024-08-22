// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNDSPGRAPHUTILITIES_H
#define SNDSPGRAPHUTILITIES_H


#import <Foundation/Foundation.h>


@interface SNDSPGraphUtilities : NSObject



+(BOOL)startInjectingBoxes:(id)arg0 inGraph:(id)arg1 error:(*id)arg2 ;
+(BOOL)startRecordingBoxes:(id)arg0 inGraph:(id)arg1 toDirectory:(id)arg2 error:(*id)arg3 ;
+(BOOL)startRecordingFirstBoxInGraph:(id)arg0 toDirectory:(id)arg1 withFileName:(id)arg2 error:(*id)arg3 ;
+(BOOL)startRecordingWithBoxRecordingInfos:(id)arg0 inGraph:(id)arg1 toDirectory:(id)arg2 error:(*id)arg3 ;
+(BOOL)stopInjectingBoxesInGraph:(id)arg0 ;
+(BOOL)stopRecordingBoxesInGraph:(id)arg0 ;


@end


#endif