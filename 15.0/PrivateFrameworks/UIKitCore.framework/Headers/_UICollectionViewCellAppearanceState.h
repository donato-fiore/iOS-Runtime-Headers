// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONVIEWCELLAPPEARANCESTATE_H
#define _UICOLLECTIONVIEWCELLAPPEARANCESTATE_H


#import <Foundation/Foundation.h>


@interface _UICollectionViewCellAppearanceState : NSObject

@property (readonly, nonatomic) NSInteger appearance;
@property (nonatomic) int dragState; // ivar: _dragState
@property (readonly, nonatomic) BOOL enrouteToOrReachedTerminalState;
@property (nonatomic) BOOL hasBeganCancelling; // ivar: _hasBeganCancelling
@property (readonly, nonatomic) BOOL hasBeganDroppingInto;
@property (nonatomic) BOOL hasLifted; // ivar: _hasLifted


-(id)description;
-(id)init;
-(void)didBeginCancelling;
-(void)didBeginDropping;
-(void)didBeginDroppingInto;
-(void)didBeginLift;
-(void)didCompleteCancelling;
-(void)didCompleteDropping;
-(void)didCompleteLift;
-(void)didEnd;
-(void)didMove;
-(void)willBeginCancelling;


@end


#endif