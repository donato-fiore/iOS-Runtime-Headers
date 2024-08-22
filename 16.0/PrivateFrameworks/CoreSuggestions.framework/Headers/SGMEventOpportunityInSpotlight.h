// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMEVENTOPPORTUNITYINSPOTLIGHT_H
#define SGMEVENTOPPORTUNITYINSPOTLIGHT_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMEventOpportunityInSpotlight : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 ;


@end


#endif