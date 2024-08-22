// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMVIDEOLIVEPHOTOMETADATAWRITINGENABLEDCOMMAND_H
#define CAMVIDEOLIVEPHOTOMETADATAWRITINGENABLEDCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMVideoLivePhotoMetadataWritingEnabledCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=isLivePhotoMetadataWritingEnabled) BOOL _livePhotoMetadataWritingEnabled; // ivar: __livePhotoMetadataWritingEnabled


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnabled:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif