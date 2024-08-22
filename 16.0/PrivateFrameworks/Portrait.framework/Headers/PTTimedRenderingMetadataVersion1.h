// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTTIMEDRENDERINGMETADATAVERSION1_H
#define PTTIMEDRENDERINGMETADATAVERSION1_H



#import "PTTimedRenderingMetadata.h"

@interface PTTimedRenderingMetadataVersion1 : PTTimedRenderingMetadata

@property (nonatomic) unsigned int agc; // ivar: _agc
@property (nonatomic) float alphaLowLight; // ivar: _alphaLowLight
@property (nonatomic) float aperture; // ivar: _aperture
@property (nonatomic) float focusDistance; // ivar: _focusDistance
@property (nonatomic) unsigned int frameId; // ivar: _frameId


-(BOOL)writeToData:(id)arg0 withOptions:(id)arg1 ;
-(id)initWithData:(id)arg0 minorVersion:(unsigned int)arg1 ;
-(id)initWithMinorVersion:(unsigned int)arg0 ;
-(unsigned int)sizeOfSerializedObjectWithOptions:(id)arg0 ;
-(void)applyToRenderRequest:(id)arg0 ;


@end


#endif