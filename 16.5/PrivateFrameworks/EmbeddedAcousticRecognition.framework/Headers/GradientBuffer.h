// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GRADIENTBUFFER_H
#define GRADIENTBUFFER_H


#import <Foundation/Foundation.h>


@interface GradientBuffer : NSObject {
    BOOL _isSparse;
    vector<float, std::allocator<float>> _data;
    unordered_map<int, float, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, float>>> _sparseData;
}


@property (readonly) NSUInteger size; // ivar: _size


+(void)initialize;
-(float)l2norm;
-(id)description;
-(id)initWithTensorBefore:(id)arg0 tensorAfter:(id)arg1 withScale:(float)arg2 shouldSparsify:(BOOL)arg3 error:(*id)arg4 ;
-(void)accumulateDifferenceBetweenTensorBefore:(id)arg0 andTensorAfter:(id)arg1 withScale:(float)arg2 error:(*id)arg3 ;
-(void)applyToTensor:(id)arg0 scale:(float)arg1 error:(*id)arg2 ;
-(void)multiply:(float)arg0 ;
-(void)reset;


@end


#endif