// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDRAGDESTINATIONCONTROLLERREORDERINGSTATE_H
#define _UIDRAGDESTINATIONCONTROLLERREORDERINGSTATE_H


#import <Foundation/Foundation.h>

#import "UICollectionView.h"
#import "_UIDragMovementCadenceSettings.h"
#import "_UIDragDestinationControllerSessionState.h"
#import "_UIVelocityIntegrator.h"

@interface _UIDragDestinationControllerReorderingState : NSObject

@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) NSInteger dragMovementPhase; // ivar: _dragMovementPhase
@property (readonly, nonatomic) BOOL hasPerformedReordering;
@property (nonatomic) BOOL hasStartedInteractiveReorder; // ivar: _hasStartedInteractiveReorder
@property (nonatomic) CGFloat reorderBecamePossibleTime; // ivar: _reorderBecamePossibleTime
@property (retain, nonatomic) _UIDragMovementCadenceSettings *reorderCadenceSettings; // ivar: _reorderCadenceSettings
@property (nonatomic) NSInteger reorderCount; // ivar: _reorderCount
@property (retain, nonatomic) _UIDragDestinationControllerSessionState *sessionState; // ivar: _sessionState
@property (nonatomic) BOOL supportsLocalSessionReordering; // ivar: _supportsLocalSessionReordering
@property (retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator; // ivar: _velocityIntegrator


-(BOOL)hasEnoughTimeElapsedSizeReorderingBecamePossibleForInterval:(CGFloat)arg0 ;
-(id)initWithSessionState:(id)arg0 collectionView:(id)arg1 ;
-(void)didBeginInteractiveReorder;
-(void)didEndInteractiveReorder;
-(void)didReorder;
-(void)reorderResetToStartingLocation;
-(void)reorderingDidBecomePossible;
-(void)velocityExceededThreshold;


@end


#endif