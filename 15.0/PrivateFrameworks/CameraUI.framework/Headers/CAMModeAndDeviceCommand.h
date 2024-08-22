// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMMODEANDDEVICECOMMAND_H
#define CAMMODEANDDEVICECOMMAND_H

@class NSError;


#import "CAMCaptureCommand.h"
#import "CAMCaptureGraphConfiguration.h"

@interface CAMModeAndDeviceCommand : CAMCaptureCommand

@property (retain, nonatomic, setter=_setConfigurationError:) NSError *_configurationError; // ivar: __configurationError
@property (readonly, nonatomic) CAMCaptureGraphConfiguration *_desiredGraphConfiguration; // ivar: __desiredGraphConfiguration
@property (readonly, nonatomic) CGFloat _minimumExecutionTime; // ivar: __minimumExecutionTime
@property (readonly, nonatomic) int _requestID; // ivar: __requestID
@property (retain, nonatomic, setter=_setResolvedGraphConfiguration:) CAMCaptureGraphConfiguration *_resolvedGraphConfiguration; // ivar: __resolvedGraphConfiguration


-(BOOL)_isStillImageMode:(NSInteger)arg0 ;
-(BOOL)_shouldEnableDeferredProcessingForMode:(NSInteger)arg0 ;
-(BOOL)_shouldEnableLivePhotoCaptureForMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(BOOL)_wantsLivePhotoMetadataInVideosForMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(BOOL)_wantsLowLightBoostForMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(BOOL)_wantsQuadraHighResolutionForMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(BOOL)requiresSessionModification;
-(CGFloat)sessionModificationMinimumExecutionTime;
-(id)_desiredInputsWithContext:(id)arg0 ;
-(id)_existingInputsWithContext:(id)arg0 without:(id)arg1 ;
-(id)_existingOutputsWithContext:(id)arg0 without:(id)arg1 ;
-(id)_specificEncodingBehaviorCommandForGraphConfiguration:(id)arg0 ;
-(id)_specificFramerateCommandForGraphConfiguration:(id)arg0 withContext:(id)arg1 ;
-(id)_specificPreparePhotoSettingsCommandForGraphConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGraphConfiguration:(id)arg0 minimumExecutionTime:(CGFloat)arg1 requestID:(int)arg2 ;
-(id)sessionModificationLogReason;
-(id)userInfo;
-(void)_performPostConfigurationSanityCheckForGraphConfiguration:(id)arg0 withContext:(id)arg1 ;
-(void)_performPostConfigurationSetupForGraphConfiguration:(id)arg0 withContext:(id)arg1 ;
-(void)_sanitizeDeviceUsingContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif