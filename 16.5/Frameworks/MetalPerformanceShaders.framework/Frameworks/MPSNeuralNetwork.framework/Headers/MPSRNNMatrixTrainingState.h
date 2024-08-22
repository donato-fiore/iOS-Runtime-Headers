// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSRNNMATRIXTRAININGSTATE_H
#define MPSRNNMATRIXTRAININGSTATE_H

@class MPSState, MPSMatrix;



@interface MPSRNNMatrixTrainingState : MPSState {
    MPSMatrix *singleGateZ;
    BOOL _isTemporary;
}




-(BOOL)isTemporary;
-(id)initForSingleGateWithCommandBuffer:(id)arg0 matrixDescriptor:(id)arg1 isTemporary:(BOOL)arg2 ;
-(void)dealloc;
-(void)setReadCount:(NSUInteger)arg0 ;


@end


#endif