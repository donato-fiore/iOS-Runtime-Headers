// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWITCHERLAYOUTCALCULATIONSCACHE_H
#define SBSWITCHERLAYOUTCALCULATIONSCACHE_H

@class NSDictionary;
@protocol SBSwitcherLayoutCalculationsCacheDelegate;

#import <Foundation/Foundation.h>

#import "SBSwitcherLayoutCalculationsCacheValidityToken.h"

@interface SBSwitcherLayoutCalculationsCache : NSObject {
    NSDictionary *_cachedLayoutCalculationsByKey;
    SBSwitcherLayoutCalculationsCacheValidityToken *_validityToken;
}


@property (weak, nonatomic) NSObject<SBSwitcherLayoutCalculationsCacheDelegate> *delegate; // ivar: _delegate


-(CGFloat)scaleForKey:(id)arg0 validityToken:(id)arg1 fallback:(id)arg2 ;
-(id)init;
-(struct CGRect )frameForKey:(id)arg0 validityToken:(id)arg1 fallback:(id)arg2 ;
-(void)_updateLayoutCalculationsIfNecessaryForValidityToken:(id)arg0 ;


@end


#endif