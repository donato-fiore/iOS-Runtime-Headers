// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKVECTOROVERLAYPOLYLINE_H
#define VKVECTOROVERLAYPOLYLINE_H


#import <Foundation/Foundation.h>


@interface VKVectorOverlayPolyline : NSObject {
    vector<geo::Mercator2<double>, std::allocator<geo::Mercator2<double>>> _points;
    unique_ptr<geo::Cache<unsigned char, std::shared_ptr<std::vector<geo::Mercator2<double>>>, std::hash<unsigned char>, LRUPolicy>, std::default_delete<geo::Cache<unsigned char, std::shared_ptr<std::vector<geo::Mercator2<double>>>, std::hash<unsigned char>, LRUPolicy>>> _simplifiedGeometryCache;
    unfair_lock _simplifiedGeometryCacheLock;
}


@property (readonly, nonatomic) Range<signed char> worldIndexes; // ivar: _worldIndexes


-(id)initWithMapPoints:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(struct shared_ptr<std::vector<geo::Mercator2<double>>> )simplifiedGeometryAtZoomLevel:(unsigned char)arg0 ;


@end


#endif