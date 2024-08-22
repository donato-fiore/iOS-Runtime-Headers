// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDDSPGRAPHUTILITIES_H
#define ASDDSPGRAPHUTILITIES_H


#import <Foundation/Foundation.h>


@interface ASDDSPGraphUtilities : NSObject



+(BOOL)startInjectingBoxes:(id)arg0 inGraph:(id)arg1 error:(*id)arg2 ;
+(BOOL)startRecordingAllBoxesInGraph:(id)arg0 fromStream:(id)arg1 toDirectory:(id)arg2 withType:(NSInteger)arg3 error:(*id)arg4 ;
+(BOOL)startRecordingBoxes:(id)arg0 inGraph:(id)arg1 fromStream:(id)arg2 toDirectory:(id)arg3 withType:(NSInteger)arg4 andMode:(NSInteger)arg5 error:(*id)arg6 ;
+(BOOL)startRecordingBoxes:(id)arg0 inGraph:(id)arg1 fromStream:(id)arg2 toDirectory:(id)arg3 withType:(NSInteger)arg4 error:(*id)arg5 ;
+(BOOL)startRecordingBoxes:(id)arg0 inGraph:(id)arg1 toDirectory:(id)arg2 error:(*id)arg3 ;
+(BOOL)startRecordingBoxes:(id)arg0 inGraph:(id)arg1 toDirectory:(id)arg2 withMode:(NSInteger)arg3 error:(*id)arg4 ;
+(BOOL)stopInjectingBoxesInGraph:(id)arg0 ;
+(BOOL)stopRecordingBoxesInGraph:(id)arg0 ;
+(struct optional<AudioCapturerOptions> )getCapturerOptions:(NSInteger)arg0 ;


@end


#endif