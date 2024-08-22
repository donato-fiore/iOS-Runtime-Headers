// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHOMESCREENLOGWIDGETADDEDFEATURES_H
#define ATXHOMESCREENLOGWIDGETADDEDFEATURES_H

@class NSMutableDictionary, ATXHomeScreenEvent, NSArray;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenLogWidgetAddedFeatures : NSObject {
    NSMutableDictionary *_widgetAddedFeatures;
    ATXHomeScreenEvent *_hsEvent;
    NSUInteger _rankOfWidgetInGallery;
    NSArray *_galleryItems;
}




-(id)_key:(id)arg0 byAppendingStringIndicatingIfWidgetWasAdded:(BOOL)arg1 ;
-(id)_pickIndexForNegativeExampleFromGalleryItems;
-(id)initWithHSEvent:(id)arg0 rankOfWidgetInGallery:(NSUInteger)arg1 galleryItems:(id)arg2 ;
-(void)_populateFeaturesForAddedWidget;
-(void)_populateFeaturesForNegativeExample;
-(void)_populateHomeScreenConfigFeaturesForWidgetBundleId:(id)arg0 widgetKind:(id)arg1 parentAppBundleId:(id)arg2 widgetWasAdded:(BOOL)arg3 ;
-(void)_populateParentAppFeaturesForParentAppBundleId:(id)arg0 widgetWasAdded:(BOOL)arg1 ;
-(void)_sendToCoreAnalytics;
-(void)logWidgetAddedFeaturesInCoreAnalytics;


@end


#endif