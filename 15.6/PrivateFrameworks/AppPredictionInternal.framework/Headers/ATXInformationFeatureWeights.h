// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXINFORMATIONFEATUREWEIGHTS_H
#define ATXINFORMATIONFEATUREWEIGHTS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXInformationFeatureWeights : NSObject {
    NSDictionary *_weights;
}




-(CGFloat)defaultWeightForFeatureName:(NSUInteger)arg0 ;
-(CGFloat)weightForFeatureName:(NSUInteger)arg0 widgetExtensionBundleId:(id)arg1 widgetKind:(id)arg2 ;
-(id)init;
-(id)widgetIdentifierForWidgetExtensionBundleId:(id)arg0 widgetKind:(id)arg1 ;


@end


#endif