// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHOMESCREENLOGSYSTEMCHANGEDICTIONARY_H
#define ATXHOMESCREENLOGSYSTEMCHANGEDICTIONARY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenLogSystemChangeDictionary : NSObject {
    NSMutableDictionary *_systemChangeDictionary;
}




+(id)systemChangeDictionaryAccumulatorKeys;
-(BOOL)_fetchHasHadWidgetsOnHomeScreenUserDefault;
-(BOOL)_suggestedWidgetWasExplicitlyDismissedWithEvent:(id)arg0 ;
-(id)_createNewSystemChangeDictionary;
-(id)dryRunResult;
-(id)init;
-(void)_logSuggestedWidgetDismissalWithEvent:(id)arg0 ;
-(void)_logSuggestedWidgetExplicitDismissalWithEvent:(id)arg0 ;
-(void)sendToCoreAnalytics;
-(void)updateSystemChangeSummaryForHomeScreenEvent:(id)arg0 ;
-(void)updateSystemChangeSummaryForHomeScreenPages:(id)arg0 ;


@end


#endif