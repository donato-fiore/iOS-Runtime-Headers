// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GAINVALUEARRAY_H
#define GAINVALUEARRAY_H


#import <Foundation/Foundation.h>


@interface GainValueArray : NSObject {
    NSUInteger _nGainValuePairs;
    *? _gainValuePairs;
}




-(float)interpolateValueForGain:(float)arg0 ;
-(id)initWithArray:(id)arg0 ;
-(void)dealloc;


@end


#endif