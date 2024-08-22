// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMVIDEOTHUMBNAILOUTPUTCONFIGURATIONCOMMAND_H
#define CAMVIDEOTHUMBNAILOUTPUTCONFIGURATIONCOMMAND_H



#import "CAMCaptureCommand.h"
#import "CAMVideoThumbnailOutputConfiguration.h"

@interface CAMVideoThumbnailOutputConfigurationCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMVideoThumbnailOutputConfiguration *configuration; // ivar: _configuration


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif