// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ETBOXCARFILTERPOINTFIFO_H
#define ETBOXCARFILTERPOINTFIFO_H



#import "ETPointFIFO.h"

@interface ETBoxcarFilterPointFIFO : ETPointFIFO {
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _prevPoints;
}


@property ? prevPoints;
@property (nonatomic) float spacing; // ivar: _spacing
@property (nonatomic) NSUInteger width; // ivar: _width


-(id)initWithFIFO:(id)arg0 width:(NSUInteger)arg1 spacing:(float)arg2 ;
-(void)addPoints:(*NSUInteger)arg0 count;


@end


#endif