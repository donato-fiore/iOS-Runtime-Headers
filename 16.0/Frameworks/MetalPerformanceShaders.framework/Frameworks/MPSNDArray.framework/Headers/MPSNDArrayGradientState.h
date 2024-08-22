// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYGRADIENTSTATE_H
#define MPSNDARRAYGRADIENTSTATE_H

@class MPSState;



@interface MPSNDArrayGradientState : MPSState {
    NSUInteger _srcCount;
    *NDArraySrcInfo _srcInfo;
    unsigned int _provenance;
}




-(id)destinationArrayDescriptorForSourceArrays:(id)arg0 sourceGradientIndex:(NSUInteger)arg1 ;
-(id)initWithSourceCount:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif