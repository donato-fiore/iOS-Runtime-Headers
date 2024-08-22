// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHDEFAULTHAPTICDEVICECAPABILITY_H
#define CHDEFAULTHAPTICDEVICECAPABILITY_H

@protocol CHHapticDeviceCapability;

#import <Foundation/Foundation.h>


@interface CHDefaultHapticDeviceCapability : NSObject <CHHapticDeviceCapability>

 {
    BOOL _supports3rdPartyHaptics;
}


@property (readonly) NSUInteger maximumNumberOfAudioChannels;
@property (readonly) NSUInteger maximumNumberOfHapticChannels;
@property (readonly) BOOL supportsAudio;
@property (readonly) BOOL supportsHaptics;


-(float)defaultValueForDynamicParameter:(id)arg0 ;
-(float)defaultValueForEventParameter:(id)arg0 eventType:(id)arg1 ;
-(float)maximumValueForDynamicParameter:(id)arg0 ;
-(float)maximumValueForEventParameter:(id)arg0 ;
-(float)minimumValueForDynamicParameter:(id)arg0 ;
-(float)minimumValueForEventParameter:(id)arg0 ;
-(id)attributesForDynamicParameter:(id)arg0 error:(*id)arg1 ;
-(id)attributesForEventParameter:(id)arg0 eventType:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initPrivate;


@end


#endif