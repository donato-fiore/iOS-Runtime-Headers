// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPTRESIZEINTERACTION_H
#define RPTRESIZEINTERACTION_H

@protocol _RPTCoordinateSpaces, RPTInteraction;

#import <Foundation/Foundation.h>

#import "RPTCoordinateSpaceConverter.h"

@interface RPTResizeInteraction : NSObject <_RPTCoordinateSpaces, RPTInteraction>



@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion; // ivar: _conversion
@property (nonatomic) CGVector delta; // ivar: _delta
@property (nonatomic) CGPoint dragPoint; // ivar: _dragPoint
@property (readonly, nonatomic) CGSize finalSize; // ivar: _finalSize
@property (readonly, nonatomic) CGSize initialSize; // ivar: _initialSize
@property (nonatomic) BOOL shouldLift; // ivar: _shouldLift
@property (nonatomic) BOOL shouldPress; // ivar: _shouldPress


-(id)initWithDragPoint:(struct CGPoint )arg0 delta:(struct CGVector )arg1 sourceSize:(struct CGSize )arg2 ;
-(id)initWithDragPoint:(struct CGPoint )arg0 sourceSize:(struct CGSize )arg1 destinationSize:(struct CGSize )arg2 ;
-(id)initWithWindow:(id)arg0 destinationSize:(struct CGSize )arg1 ;
-(id)interactionByScalingBy:(CGFloat)arg0 ;
-(id)reversedInteraction;
-(void)invokeWithComposer:(id)arg0 duration:(CGFloat)arg1 ;


@end


#endif