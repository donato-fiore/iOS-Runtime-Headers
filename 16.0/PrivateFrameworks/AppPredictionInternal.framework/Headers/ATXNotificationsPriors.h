// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONSPRIORS_H
#define ATXNOTIFICATIONSPRIORS_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "ATXApp2VecMapping.h"

@interface ATXNotificationsPriors : NSObject {
    NSDictionary *_parameters;
    CGFloat _defaultPrior;
    ATXApp2VecMapping *_appFeatures;
}




+(id)sharedInstance;
-(CGFloat)getAppBiasForBundleId:(id)arg0 ;
-(CGFloat)getPriorForAppId:(id)arg0 ;
-(id)init;
-(id)initWithAssetClass:(Class)arg0 andPathToAppFeatures:(id)arg1 ;


@end


#endif