// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMMAXIMUMPHOTORESOLUTIONCOMMAND_H
#define CAMMAXIMUMPHOTORESOLUTIONCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMMaximumPhotoResolutionCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSInteger _maximumPhotoResolution; // ivar: __maximumPhotoResolution


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMaximumPhotoResolution:(NSInteger)arg0 ;
-(id)initWithSubcommands:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif