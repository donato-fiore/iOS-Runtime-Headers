// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTEXTINPUTSINGLEELEMENTFINDER_H
#define PKTEXTINPUTSINGLEELEMENTFINDER_H

@class NSSet;


#import "PKTextInputElementsFinder.h"
#import "PKTextInputElement.h"

@interface PKTextInputSingleElementFinder : PKTextInputElementsFinder

@property (readonly, nonatomic) NSSet *candidateElements; // ivar: _candidateElements
@property (readonly, nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly, nonatomic) PKTextInputElement *foundElement; // ivar: _foundElement


-(void)_finishSingleElementSearchIfReadyAtPosition:(struct CGPoint )arg0 coordinateSpace:(id)arg1 candidates:(id)arg2 completion:(id)arg3 ;
-(void)findSingleElementCloseToPosition:(struct CGPoint )arg0 coordinateSpace:(id)arg1 completion:(id)arg2 ;


@end


#endif