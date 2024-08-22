// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICELLULARPLANLABELSPECIFIER_H
#define PSUICELLULARPLANLABELSPECIFIER_H

@class PSSpecifier;


#import "PSUICellularPlanManagerCache.h"
#import "PSUICellularPlanUniversalReference.h"

@interface PSUICellularPlanLabelSpecifier : PSSpecifier

@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // ivar: _planManagerCache
@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference; // ivar: _planReference


-(id)cellularPlanLabel:(id)arg0 ;
-(id)getLogger;
-(id)initWithPlanUniversalReference:(id)arg0 planManagerCache:(id)arg1 ;
-(void)updateValuesAndTitles;


@end


#endif