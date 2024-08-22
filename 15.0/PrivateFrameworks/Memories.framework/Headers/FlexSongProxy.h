// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLEXSONGPROXY_H
#define FLEXSONGPROXY_H



#import "FlexSongBackend.h"

@interface FlexSongProxy : FlexSongBackend



-(BOOL)canPlay;
-(id)initWithUID:(id)arg0 songName:(id)arg1 artistName:(id)arg2 tagIDs:(id)arg3 keywords:(id)arg4 hidden:(BOOL)arg5 recalled:(BOOL)arg6 assets:(id)arg7 audioEncoderPresetName:(id)arg8 metadataVersion:(NSInteger)arg9 songFormat:(id)arg10 ;


@end


#endif