// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PICOMPOSITIONFINALIZER_H
#define PICOMPOSITIONFINALIZER_H

@class NURenderRequest, NSError;



@interface PICompositionFinalizer : NURenderRequest

@property (nonatomic) NSUInteger candidacy; // ivar: _candidacy
@property (retain, nonatomic) NSError *finalizerError; // ivar: _finalizerError
@property (nonatomic) NSUInteger performedActions; // ivar: _performedActions
@property (nonatomic) CGFloat pitchAngleDegrees; // ivar: _pitchAngleDegrees
@property (nonatomic) CGFloat rollAngleDegrees; // ivar: _rollAngleDegrees
@property (readonly, nonatomic) BOOL shouldAllowPerspectiveCorrection;
@property (nonatomic) CGFloat yawAngleDegrees; // ivar: _yawAngleDegrees


+(id)descriptionForCandidacy:(NSUInteger)arg0 ;
-(BOOL)hasPerformedAction:(NSUInteger)arg0 ;
-(BOOL)shouldPerformAction:(NSUInteger)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(void)markActionAsPerformed:(NSUInteger)arg0 ;
-(void)performHorizonCorrectionWithCompletion:(id)arg0 ;
-(void)performNextActionWithCompletion:(id)arg0 ;
-(void)performPerspectiveCorrectionWithCompletion:(id)arg0 ;
-(void)processHorizonResult:(id)arg0 ;
-(void)processPerspectiveResult:(id)arg0 ;
-(void)submit:(id)arg0 ;


@end


#endif