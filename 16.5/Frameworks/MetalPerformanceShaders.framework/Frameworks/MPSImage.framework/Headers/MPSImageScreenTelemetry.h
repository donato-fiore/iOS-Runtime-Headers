// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSIMAGESCREENTELEMETRY_H
#define MPSIMAGESCREENTELEMETRY_H



#import "MPSUnaryImageKernel.h"

@interface MPSImageScreenTelemetry : MPSUnaryImageKernel

@property (nonatomic) NSUInteger numberOfZonesInX; // ivar: _numberOfZonesInX
@property (nonatomic) NSUInteger numberOfZonesInY; // ivar: _numberOfZonesInY
@property (nonatomic) ? sourceRegion; // ivar: _sourceRegion
@property (nonatomic) NSUInteger zoneHeight; // ivar: _zoneHeight
@property (nonatomic) NSUInteger zoneWidth; // ivar: _zoneWidth


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationBuffer:(id)arg2 destinationOffset:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif