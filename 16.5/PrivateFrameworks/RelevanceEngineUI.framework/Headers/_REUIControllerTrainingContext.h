// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REUICONTROLLERTRAININGCONTEXT_H
#define _REUICONTROLLERTRAININGCONTEXT_H

@protocol _REUIControllerTrainingContextDelegate;


#import "REUITrainingContext.h"

@interface _REUIControllerTrainingContext : REUITrainingContext

@property (weak, nonatomic) NSObject<_REUIControllerTrainingContextDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat maximumNegativeDwellTime; // ivar: _maximumNegativeDwellTime
@property (nonatomic) CGFloat minimumPositiveDwellTime; // ivar: _minimumPositiveDwellTime
@property (nonatomic) NSUInteger onScreenElementCount; // ivar: _onScreenElementCount


-(BOOL)elementIsAvailable:(id)arg0 ;
-(id)elementsOrdered:(NSUInteger)arg0 relativeToElement:(id)arg1 ;
-(id)interactionTypeForElement:(id)arg0 ;


@end


#endif