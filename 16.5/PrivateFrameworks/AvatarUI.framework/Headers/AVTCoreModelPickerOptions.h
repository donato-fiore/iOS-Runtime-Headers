// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTCOREMODELPICKEROPTIONS_H
#define AVTCOREMODELPICKEROPTIONS_H

@class NSString, AVTAvatarPose, NSArray, AVTStickerConfiguration;

#import <Foundation/Foundation.h>

#import "AVTCoreModelPickerDisplayCondition.h"
#import "AVTCoreModelFramingModeOverrides.h"

@interface AVTCoreModelPickerOptions : NSObject

@property (readonly, nonatomic) AVTCoreModelPickerDisplayCondition *displayCondition; // ivar: _displayCondition
@property (readonly, nonatomic) NSUInteger displayMode; // ivar: _displayMode
@property (readonly, copy, nonatomic) NSString *framingMode; // ivar: _framingMode
@property (readonly, nonatomic) AVTCoreModelFramingModeOverrides *framingModeOverrides; // ivar: _framingModeOverrides
@property (readonly, copy, nonatomic) AVTAvatarPose *poseOverride; // ivar: _poseOverride
@property (readonly, copy, nonatomic) NSArray *presetOverrides; // ivar: _presetOverrides
@property (readonly, nonatomic) BOOL separator; // ivar: _separator
@property (readonly, nonatomic) BOOL showsLabel; // ivar: _showsLabel
@property (readonly, nonatomic) NSUInteger sortingOption; // ivar: _sortingOption
@property (readonly, nonatomic) AVTStickerConfiguration *stickerConfiguration; // ivar: _stickerConfiguration


+(NSUInteger)displayModeFromString:(id)arg0 ;
+(NSUInteger)sortingOptionFromString:(id)arg0 ;
-(id)initWithFramingMode:(id)arg0 separatorFlag:(BOOL)arg1 presetOverrides:(id)arg2 poseOverride:(id)arg3 framingModeOverrides:(id)arg4 displayMode:(NSUInteger)arg5 displayCondition:(id)arg6 sortingOption:(NSUInteger)arg7 stickerConfiguration:(id)arg8 showsLabel:(BOOL)arg9 ;


@end


#endif