// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHBOXCARFILTERPOINTFIFO_H
#define CHBOXCARFILTERPOINTFIFO_H



#import "CHPointFIFO.h"

@interface CHBoxcarFilterPointFIFO : CHPointFIFO {
    vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> _prevPoints;
}


@property ? prevPoints;
@property (nonatomic) float spacing; // ivar: _spacing
@property (nonatomic) NSUInteger width; // ivar: _width


-(id)initWithFIFO:(id)arg0 width:(NSUInteger)arg1 ;
-(id)initWithFIFO:(id)arg0 width:(NSUInteger)arg1 spacing:(float)arg2 ;
-(void)addPoint;


@end


#endif