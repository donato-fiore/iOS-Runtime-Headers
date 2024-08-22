// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINPUTPOINTBASEFILTER_H
#define PKINPUTPOINTBASEFILTER_H

@protocol PKInputPointFilter;

#import <Foundation/Foundation.h>


@interface PKInputPointBaseFilter : NSObject <PKInputPointFilter>

 {
    CGFloat _maxZDistance;
    NSInteger _numInputPoints;
    ? _filteredPoint;
}




-(id)init;
-(struct ? )currentFilteredPoint;
-(void)addInputPoint:(struct ? )arg0 ;
-(void)resetFilter;


@end


#endif