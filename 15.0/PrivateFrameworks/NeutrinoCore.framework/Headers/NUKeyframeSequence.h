// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUKEYFRAMESEQUENCE_H
#define NUKEYFRAMESEQUENCE_H


#import <Foundation/Foundation.h>


@interface NUKeyframeSequence : NSObject {
    NSUInteger _count;
    *? _times;
    BOOL _ownsTimes;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSInteger interpolation; // ivar: _interpolation


-(NSInteger)indexOfKeyframeAtOrBeforeTime:(struct ? )arg0 ;
-(id)init;
-(id)initWithInterpolation:(NSInteger)arg0 count:(NSUInteger)arg1 times:(struct ? *)arg2 ;
-(id)initWithKeyframeSequence:(id)arg0 ;
-(id)interpolantAtTime;
-(id)sparseSequence;
-(struct ? )timeOfKeyframeAtIndex:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif