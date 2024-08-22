// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXACTIONTOWIDGETCONVERTER_H
#define ATXACTIONTOWIDGETCONVERTER_H

@class ATXWidgetDescriptorCache, ATXInfoToBlendingConfidenceMapper, ATXEngagementRecordManager, ATXHomeScreenConfigCache, NSArray;

#import <Foundation/Foundation.h>

#import "ATXIntentMetadataCache.h"

@interface ATXActionToWidgetConverter : NSObject {
    ATXWidgetDescriptorCache *_descriptorCache;
    ATXIntentMetadataCache *_intentMetadataCache;
    ATXInfoToBlendingConfidenceMapper *_infoConfidenceMapper;
    ATXEngagementRecordManager *_engagementRecordManager;
    ATXHomeScreenConfigCache *_homeScreenConfigCache;
    NSArray *_homeScreenPages;
}




+(BOOL)isWidgetIntent:(id)arg0 validConversionFromActionIntent:(id)arg1 ;
-(id)_convertedSuggestionFromInfoSuggestion:(id)arg0 originalSuggestion:(id)arg1 ;
-(id)_infoSuggestionForAction:(id)arg0 ;
-(id)_peopleInfoSuggestionForSendMessageIntent:(id)arg0 action:(id)arg1 ;
-(id)_selectPersonIntentForSendMessageIntent:(id)arg0 ;
-(id)_widgetForIntent:(id)arg0 ;
-(id)convertSuggestions:(id)arg0 ;
-(id)init;
-(id)initWithIntentMetadataCache:(id)arg0 widgetDescriptorCache:(id)arg1 infoConfidenceMapper:(id)arg2 engagementRecordManager:(id)arg3 ;


@end


#endif