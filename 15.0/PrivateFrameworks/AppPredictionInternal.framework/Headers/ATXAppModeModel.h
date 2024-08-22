// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXAPPMODEMODEL_H
#define ATXAPPMODEMODEL_H


#import <Foundation/Foundation.h>

#import "ATXAppModeEntityModelWeights.h"

@interface ATXAppModeModel : NSObject {
    NSUInteger _mode;
    ATXAppModeEntityModelWeights *_appModeEntityModelWeights;
}




-(CGFloat)scoreFromCorrelationStatistics:(id)arg0 ;
-(id)init;
-(id)initWithMode:(NSUInteger)arg0 ;
-(id)scoredAppModeEntityWithAppFeatures:(id)arg0 bundleId:(id)arg1 ;
-(id)scoredEntities;
-(void)addEntitySpecificFeaturesToAppFeatures:(id)arg0 ;


@end


#endif