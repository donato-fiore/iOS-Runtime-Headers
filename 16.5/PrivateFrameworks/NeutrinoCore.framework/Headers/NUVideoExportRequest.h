// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUVIDEOEXPORTREQUEST_H
#define NUVIDEOEXPORTREQUEST_H

@class NSArray, NSDictionary, NSProgress;


#import "NUExportRequest.h"
#import "NUColorSpace.h"

@interface NUVideoExportRequest : NUExportRequest

@property (nonatomic) BOOL applyOrientationAsMetadata; // ivar: _applyOrientationAsMetadata
@property (nonatomic) CGFloat bitRateMultiplicationFactor; // ivar: _bitRateMultiplicationFactor
@property (nonatomic) BOOL bypassOutputSettingsIfNoComposition; // ivar: _bypassOutputSettingsIfNoComposition
@property (retain, nonatomic) NUColorSpace *colorSpace; // ivar: _colorSpace
@property (nonatomic) BOOL computeDigest; // ivar: _computeDigest
@property (nonatomic) BOOL includeCinematicVideoTracks; // ivar: _includeCinematicVideoTracks
@property (copy) NSArray *metadata; // ivar: _metadata
@property (copy) NSDictionary *outputSettings; // ivar: _outputSettings
@property (retain) NSProgress *progress; // ivar: _progress
@property (nonatomic) BOOL requireHardwareEncoder; // ivar: _requireHardwareEncoder


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;
-(void)submitWithProgress:(id)arg0 completion:(id)arg1 ;


@end


#endif