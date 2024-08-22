// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLOPTICSCLUSTERDESCRIPTOR_H
#define PLOPTICSCLUSTERDESCRIPTOR_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface PLOPTICSClusterDescriptor : NSObject

@property (readonly, retain, nonatomic) NSNumber *clusterSize; // ivar: _clusterSize
@property (readonly, retain, nonatomic) NSNumber *endIndex; // ivar: _endIndex
@property (readonly, nonatomic) _NSRange indexRange;
@property (readonly, retain, nonatomic) NSNumber *minCoreDistance; // ivar: _minCoreDistance
@property (readonly, retain, nonatomic) NSNumber *minCoreDistanceIndex; // ivar: _minCoreDistanceIndex
@property (readonly, retain, nonatomic) NSNumber *rootLevel; // ivar: _rootLevel
@property (readonly, retain, nonatomic) NSNumber *startIndex; // ivar: _startIndex


+(id)clusterDescriptor:(struct _NSRange )arg0 rootLevel:(NSInteger)arg1 minCoreDistanceIndex:(NSInteger)arg2 minCoreDistance:(CGFloat)arg3 ;
-(id)initWithParameters:(struct _NSRange )arg0 rootLevel:(NSInteger)arg1 minCoreDistanceIndex:(NSInteger)arg2 minCoreDistance:(CGFloat)arg3 ;


@end


#endif