// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLNEARESTNEIGHBORSLINEARINDEX_H
#define MLNEARESTNEIGHBORSLINEARINDEX_H

@protocol MLNearestNeighborsIndex, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLNearestNeighborsLinearIndex : NSObject <MLNearestNeighborsIndex, NSSecureCoding>

 {
    vector<float, std::allocator<float>> vData;
    vector<float, std::allocator<float>> vDataL2Squared;
}


@property (nonatomic) NSUInteger numDataPoints; // ivar: _numDataPoints
@property (nonatomic) NSUInteger numDimensions; // ivar: _numDimensions


+(BOOL)supportsSecureCoding;
-(BOOL)updateWithData:(*void)arg0 error:(*id)arg1 ;
-(NSUInteger)dataPointCount;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataset:(struct vector<float, std::allocator<float>> )arg0 numberOfDimensions:(NSUInteger)arg1 ;
-(struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> )findNearestNeighbors:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> )findNearestNeighbors:(NSUInteger)arg0 toQueryPoint:(*void)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif