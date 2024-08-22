// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMPANORAMACONFIGURATIONCOMMAND_H
#define CAMPANORAMACONFIGURATIONCOMMAND_H



#import "CAMCaptureCommand.h"
#import "CAMPanoramaConfiguration.h"

@interface CAMPanoramaConfigurationCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMPanoramaConfiguration *_configuration; // ivar: __configuration


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif