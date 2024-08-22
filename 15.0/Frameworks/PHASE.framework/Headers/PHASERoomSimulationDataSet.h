// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEROOMSIMULATIONDATASET_H
#define PHASEROOMSIMULATIONDATASET_H


#import <Foundation/Foundation.h>


@interface PHASERoomSimulationDataSet : NSObject {
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _rayOriginPoints;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _rayIntersectPoints;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _imageSourcePoints;
    vector<std::vector<float __attribute__((ext_vector_type(3)))>, std::allocator<std::vector<float __attribute__((ext_vector_type(3)))>>> _imageSourceIntersectionPoints;
    vector<float, std::allocator<float>> _timeFrequencyHistogramData;
    vector<float, std::allocator<float>> _directionalHistogramData;
    DebugDirectionalMetadata _earlyResponseMetadata;
    DebugDirectionalMetadata _lateReverberationMetadata;
}


@property (nonatomic) NSUInteger numHistogramFrequencies; // ivar: _numHistogramFrequencies
@property (nonatomic) NSUInteger numHistogramTimeSteps; // ivar: _numHistogramTimeSteps
@property (nonatomic) NSUInteger numImageSources; // ivar: _numImageSources


-(NSInteger)getEarlyResponseMetadataSize;
-(NSInteger)getHistogramContainerSize;
-(NSInteger)getImageSourceContainerSize;
-(NSInteger)getImageSourceIntersectionContainerSize:(NSInteger)arg0 ;
-(NSInteger)getIntersectionContainerSize;
-(NSInteger)getLateReverbMetadataSize;
-(float)getEarlyMetadataDelayAt:(NSInteger)arg0 ;
-(float)getEarlyMetadataPolarityAt:(NSInteger)arg0 ;
-(float)getEarlyMetadataSubbandGainAt:(NSInteger)arg0 subbandIndex:(NSInteger)arg1 ;
-(float)getLateMetadataDelayAt:(NSInteger)arg0 ;
-(float)getLateMetadataPolarityAt:(NSInteger)arg0 ;
-(float)getLateMetadataSubbandGainAt:(NSInteger)arg0 subbandIndex:(NSInteger)arg1 ;
-(float)getTimeHistogramBin:(NSInteger)arg0 timeIndex:(NSInteger)arg1 ;
-(id)getEarlyMetadataDirectionAt;
-(id)getImageSourceIntersectionAt:(NSInteger)arg0 intersectionIndex;
-(id)getImageSourceLocationAtIndex;
-(id)getIntersectionAtIndex;
-(id)getLateMetadataDirectionAt;
-(id)getOriginAtIndex;
-(id)init;
-(id)initWithRoomSimulationDebugView:(*void)arg0 ;


@end


#endif