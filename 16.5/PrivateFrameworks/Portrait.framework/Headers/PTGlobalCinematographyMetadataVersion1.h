// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTGLOBALCINEMATOGRAPHYMETADATAVERSION1_H
#define PTGLOBALCINEMATOGRAPHYMETADATAVERSION1_H



#import "PTGlobalCinematographyMetadata.h"

@interface PTGlobalCinematographyMetadataVersion1 : PTGlobalCinematographyMetadata

@property (nonatomic) float focusPullerAlpha; // ivar: _focusPullerAlpha
@property (nonatomic) float focusPullerMaxV; // ivar: _focusPullerMaxV
@property (nonatomic) float focusPullerResistance; // ivar: _focusPullerResistance
@property (nonatomic) float maximumDisparityPerSecond; // ivar: _maximumDisparityPerSecond
@property (nonatomic) ? maximumRackFocusPullTime; // ivar: _maximumRackFocusPullTime
@property (nonatomic) ? minimumRackFocusPullTime; // ivar: _minimumRackFocusPullTime


-(BOOL)writeToData:(id)arg0 withOptions:(id)arg1 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithMinorVersion:(unsigned int)arg0 ;
-(unsigned int)sizeOfSerializedObjectWithOptions:(id)arg0 ;


@end


#endif