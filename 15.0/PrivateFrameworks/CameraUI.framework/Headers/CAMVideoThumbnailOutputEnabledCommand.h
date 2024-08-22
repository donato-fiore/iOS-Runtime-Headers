// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMVIDEOTHUMBNAILOUTPUTENABLEDCOMMAND_H
#define CAMVIDEOTHUMBNAILOUTPUTENABLEDCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMVideoThumbnailOutputEnabledCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isEnabled) BOOL _enabled; // ivar: __enabled


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVideoThumbnailOutputEnabled:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif