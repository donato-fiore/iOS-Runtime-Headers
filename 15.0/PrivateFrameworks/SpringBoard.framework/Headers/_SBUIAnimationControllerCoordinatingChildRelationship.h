// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBUIANIMATIONCONTROLLERCOORDINATINGCHILDRELATIONSHIP_H
#define _SBUIANIMATIONCONTROLLERCOORDINATINGCHILDRELATIONSHIP_H

@class BSTransaction<SBUIAnimationControllerCoordinating>;

#import <Foundation/Foundation.h>


@interface _SBUIAnimationControllerCoordinatingChildRelationship : NSObject

@property (readonly, nonatomic) BSTransaction<SBUIAnimationControllerCoordinating> *coordinatingChildTransaction; // ivar: _coordinatingChildTransaction
@property (readonly, nonatomic) NSUInteger schedulingPolicy; // ivar: _schedulingPolicy


-(id)initWithCoordinatingChildTransaction:(id)arg0 schedulingPolicy:(NSUInteger)arg1 ;


@end


#endif