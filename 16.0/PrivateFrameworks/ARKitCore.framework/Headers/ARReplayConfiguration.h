// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARREPLAYCONFIGURATION_H
#define ARREPLAYCONFIGURATION_H

@class NSString, NSURL, NSNumber;
@protocol ARReplaySensorDelegate, ARReplaySensorProtocol, ARReplayConfigurationDelegate;


#import "ARCustomTechniquesConfiguration.h"

@interface ARReplayConfiguration : ARCustomTechniquesConfiguration <ARReplaySensorDelegate>

 {
    id<ARReplaySensorProtocol> *_replaySensor;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARReplayConfigurationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *vioSessionID; // ivar: _vioSessionID


+(BOOL)supportsFrameSemantics:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)worldAlignment;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imageSensorSettings;
-(id)imageSensorSettingsForUltraWide;
-(id)initPrivate;
-(id)initWithBaseConfiguration:(id)arg0 fileURL:(id)arg1 outError:(*id)arg2 ;
-(id)initWithBaseConfiguration:(id)arg0 fileURL:(id)arg1 replayMode:(NSInteger)arg2 outError:(*id)arg3 ;
-(id)initWithBaseConfiguration:(id)arg0 replaySensor:(id)arg1 ;
-(id)initWithBaseConfiguration:(id)arg0 replaySensor:(id)arg1 replayingResultDataClasses:(id)arg2 ;
-(id)parentImageSensorSettings;
-(id)secondaryTechniques;
-(void)ensureTechniqueAndCustomSensorCompatibility;
-(void)pause;
-(void)play;
-(void)replaySensorDidFinishReplayingData;
-(void)setAlwaysUsePrimaryCameraForHiResOrX420VideoFormat;


@end


#endif