// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARATTRIBUTEEDITORSECTIONOPTIONS_H
#define AVTAVATARATTRIBUTEEDITORSECTIONOPTIONS_H

@class NSString, AVTAvatarPose, NSArray, AVTStickerConfiguration;

#import <Foundation/Foundation.h>


@interface AVTAvatarAttributeEditorSectionOptions : NSObject

@property (readonly, nonatomic) NSUInteger displayMode; // ivar: _displayMode
@property (readonly, copy, nonatomic) NSString *framingMode; // ivar: _framingMode
@property (readonly, copy, nonatomic) AVTAvatarPose *poseOverride; // ivar: _poseOverride
@property (readonly, copy, nonatomic) NSArray *presetOverrides; // ivar: _presetOverrides
@property (readonly, nonatomic) BOOL showsLabel; // ivar: _showsLabel
@property (readonly, copy, nonatomic) AVTStickerConfiguration *stickerConfiguration; // ivar: _stickerConfiguration


-(id)description;
-(id)initWithFramingMode:(id)arg0 poseOverride:(id)arg1 presetOverrides:(id)arg2 displayMode:(NSUInteger)arg3 stickerConfiguration:(id)arg4 showsLabel:(BOOL)arg5 ;
-(id)stringForDisplayMode;


@end


#endif