// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPTDRAGINTERACTION_H
#define RPTDRAGINTERACTION_H

@protocol _RPTCoordinateSpaces, RPTInteraction;

#import <Foundation/Foundation.h>

#import "RPTCoordinateSpaceConverter.h"

@interface RPTDragInteraction : NSObject <_RPTCoordinateSpaces, RPTInteraction>



@property (nonatomic) BOOL _locationsAreAlreadyScreenSpace; // ivar: __locationsAreAlreadyScreenSpace
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion; // ivar: _conversion
@property (nonatomic) CGPoint destinationLocation; // ivar: _destinationLocation
@property (nonatomic) CGPoint sourceLocation; // ivar: _sourceLocation


-(id)_andThenDragBy:(struct CGVector )arg0 ;
-(id)initByDraggingWindow:(id)arg0 byDelta:(struct CGVector )arg1 ;
-(id)initFromSourceLocation:(struct CGPoint )arg0 toDestinationLocation:(struct CGPoint )arg1 ;
-(id)interactionByScalingBy:(CGFloat)arg0 ;
-(id)reversedInteraction;
-(void)invokeWithComposer:(id)arg0 duration:(CGFloat)arg1 ;


@end


#endif