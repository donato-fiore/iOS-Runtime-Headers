// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMPOSTCONFIGURATIONSETUPCOMMAND_H
#define CAMPOSTCONFIGURATIONSETUPCOMMAND_H



#import "CAMCaptureCommand.h"
#import "CAMCaptureGraphConfiguration.h"

@interface CAMPostConfigurationSetupCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMCaptureGraphConfiguration *graphConfiguration; // ivar: _graphConfiguration


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGraphConfiguration:(id)arg0 ;
-(void)_configureControlCenterVideoEffectsForContext:(id)arg0 ;
-(void)_configureLivePhotoPreservationSuspension:(id)arg0 ;
-(void)_configureSmoothZoomingForContext:(id)arg0 ;
-(void)_configureVideoGreenGhostMitigationForContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif