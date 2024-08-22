// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKLIVESTROKEPATH_H
#define PKLIVESTROKEPATH_H



#import "PKStrokePath.h"

@interface PKLiveStrokePath : PKStrokePath {
    vector<PKInputPoint, std::allocator<PKInputPoint>> _inputPoints;
}




-(id)initWithPoints:(struct PKCompressedStrokePoint *)arg0 count:(NSUInteger)arg1 immutableCount:(NSUInteger)arg2 inputType:(NSInteger)arg3 timestamp:(CGFloat)arg4 UUID:(id)arg5 inputPoints:(*void)arg6 ;
-(id)regenerateStrokeWithInk:(id)arg0 randomSeed:(unsigned int)arg1 strokeClass:(Class)arg2 ;


@end


#endif