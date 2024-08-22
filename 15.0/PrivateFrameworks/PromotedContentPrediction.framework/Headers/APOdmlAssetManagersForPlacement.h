// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APODMLASSETMANAGERSFORPLACEMENT_H
#define APODMLASSETMANAGERSFORPLACEMENT_H


#import <Foundation/Foundation.h>

#import "APOdmlAssetManager.h"

@interface APOdmlAssetManagersForPlacement : NSObject

@property (readonly, nonatomic) APOdmlAssetManager *counterfactualAssetManager; // ivar: _counterfactualAssetManager
@property (readonly, nonatomic) APOdmlAssetManager *runtimeAssetManager; // ivar: _runtimeAssetManager


-(id)assetManagerForType:(NSUInteger)arg0 ;
-(id)initWithPlacementType:(NSUInteger)arg0 trialClient:(id)arg1 ;


@end


#endif