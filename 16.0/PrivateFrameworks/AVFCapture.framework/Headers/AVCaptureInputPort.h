// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREINPUTPORT_H
#define AVCAPTUREINPUTPORT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AVCaptureInputPortInternal.h"
#import "AVCaptureInput.h"

@interface AVCaptureInputPort : NSObject {
    AVCaptureInputPortInternal *_internal;
}


@property (readonly, nonatomic) *OpaqueCMClock clock;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) *opaqueCMFormatDescription formatDescription;
@property (readonly, nonatomic) AVCaptureInput *input;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSInteger sourceDevicePosition;
@property (readonly, nonatomic) NSString *sourceDeviceType;


+(BOOL)automaticallyNotifiesObserversOfClock;
+(id)portWithInput:(id)arg0 mediaType:(id)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 enabled:(BOOL)arg3 sourceDeviceType:(id)arg4 sourceDevicePosition:(NSInteger)arg5 ;
+(void)initialize;
-(BOOL)sourcesFromConstituentDevice;
-(id)_initWithInput:(id)arg0 mediaType:(id)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 enabled:(BOOL)arg3 sourceDeviceType:(id)arg4 sourceDevicePosition:(NSInteger)arg5 ;
-(id)description;
-(id)figCaptureSourceConfigurationForSessionPreset:(id)arg0 ;
-(id)sourceID;
-(id)valueForUndefinedKey:(id)arg0 ;
-(int)changeSeed;
-(void)_updateBackgroundBlurUnavailableReasonsWithDevice:(id)arg0 deviceInput:(id)arg1 ;
-(void)_updateCenterStageUnavailableReasonsWithDevice:(id)arg0 deviceInput:(id)arg1 ;
-(void)_updateStudioLightingUnavailableReasonsWithDevice:(id)arg0 deviceInput:(id)arg1 ;
-(void)bumpChangeSeed;
-(void)dealloc;
-(void)setOwner:(id)arg0 ;


@end


#endif