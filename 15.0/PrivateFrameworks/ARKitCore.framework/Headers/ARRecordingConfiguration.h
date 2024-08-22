// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARRECORDINGCONFIGURATION_H
#define ARRECORDINGCONFIGURATION_H

@class NSString, NSURL;
@protocol ARRecordingTechniqueDelegate;


#import "ARCustomTechniquesConfiguration.h"
#import "ARRecordingTechniquePublic.h"

@interface ARRecordingConfiguration : ARCustomTechniquesConfiguration <ARRecordingTechniqueDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy) id *finishBlock; // ivar: _finishBlock
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ARRecordingTechniquePublic *recordingTechnique; // ivar: _recordingTechnique
@property NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)isSupported;
+(BOOL)supportsFrameSemantics:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)worldAlignment;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imageSensorSettings;
-(id)initPrivate;
-(id)initWithBaseConfiguration:(id)arg0 fileURL:(id)arg1 ;
-(id)initWithBaseConfiguration:(id)arg0 recordingTechnique:(id)arg1 ;
-(id)parentImageSensorSettings;
-(id)secondaryTechniques;
-(id)videoFormat;
-(void)abortRecording;
-(void)ensureTechniqueAndCustomSensorCompatibility;
-(void)finishRecordingWithHandler:(id)arg0 ;
-(void)setVideoFormat:(id)arg0 ;
-(void)startRecording;
-(void)technique:(id)arg0 didFinishWithResult:(id)arg1 ;


@end


#endif