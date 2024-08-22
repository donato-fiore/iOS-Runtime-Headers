// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUVIDEOEXPORTREQUEST_H
#define NUVIDEOEXPORTREQUEST_H

@class NSArray, NSDictionary, NSProgress;


#import "NUExportRequest.h"
#import "NUColorSpace.h"
#import "NUCGAffineTransform.h"

@interface NUVideoExportRequest : NUExportRequest

@property (nonatomic) CGFloat bitRateMultiplicationFactor; // ivar: _bitRateMultiplicationFactor
@property (nonatomic) BOOL bypassOutputSettingsIfNoComposition; // ivar: _bypassOutputSettingsIfNoComposition
@property (retain, nonatomic) NUColorSpace *colorSpace; // ivar: _colorSpace
@property (copy) NSArray *metadata; // ivar: _metadata
@property (copy) NSDictionary *outputSettings; // ivar: _outputSettings
@property (retain) NUCGAffineTransform *preferredTransform; // ivar: _preferredTransform
@property (retain) NSProgress *progress; // ivar: _progress
@property (nonatomic) BOOL requireHardwareEncoder; // ivar: _requireHardwareEncoder
@property (nonatomic) BOOL requiresVideoComposition; // ivar: _requiresVideoComposition


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;
-(void)submitWithProgress:(id)arg0 completion:(id)arg1 ;


@end


#endif