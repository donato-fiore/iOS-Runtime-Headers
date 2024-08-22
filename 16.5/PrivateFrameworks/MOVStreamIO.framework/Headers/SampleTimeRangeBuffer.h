// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPLETIMERANGEBUFFER_H
#define SAMPLETIMERANGEBUFFER_H


#import <Foundation/Foundation.h>


@interface SampleTimeRangeBuffer : NSObject {
    vector<CMTimeRange, std::allocator<CMTimeRange>> _ranges;
}




-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)timeRangeList;
-(void)appendTimeRange:(struct ? )arg0 ;


@end


#endif