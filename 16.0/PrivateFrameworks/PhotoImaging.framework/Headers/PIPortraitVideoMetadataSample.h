// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPORTRAITVIDEOMETADATASAMPLE_H
#define PIPORTRAITVIDEOMETADATASAMPLE_H

@class NSDictionary, PTTimedRenderingMetadata;

#import <Foundation/Foundation.h>


@interface PIPortraitVideoMetadataSample : NSObject

@property (readonly, nonatomic) CGFloat aperture; // ivar: _aperture
@property (readonly, nonatomic) NSDictionary *cameraInfo; // ivar: _cameraInfo
@property (readonly, nonatomic) CGFloat focusedDisparity; // ivar: _focusedDisparity
@property (retain, nonatomic) PTTimedRenderingMetadata *timedMetadata; // ivar: _timedMetadata


+(id)renderingMetadataIdentifier;
-(id)CIImageProcessorDigestObject;
-(id)_cameraInfoFromMetadataGroup:(id)arg0 ;
-(id)initWithMetadataGroup:(id)arg0 majorVersion:(unsigned int)arg1 minorVersion:(unsigned int)arg2 error:(*id)arg3 ;
-(id)valueWithIdentifier:(id)arg0 inGroup:(id)arg1 ofClass:(Class)arg2 ;
-(void)applyToRenderRequest:(id)arg0 ;
-(void)nu_updateDigest:(id)arg0 ;


@end


#endif