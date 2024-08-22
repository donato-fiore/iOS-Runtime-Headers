// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMPHOTOQUALITYPRIORITIZATIONCONFIGURATIONCOMMAND_H
#define CAMPHOTOQUALITYPRIORITIZATIONCONFIGURATIONCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMPhotoQualityPrioritizationConfigurationCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSInteger _photoQualityPrioritization; // ivar: __photoQualityPrioritization


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPhotoQualityPrioritization:(NSInteger)arg0 ;
-(id)initWithSubcommands:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif