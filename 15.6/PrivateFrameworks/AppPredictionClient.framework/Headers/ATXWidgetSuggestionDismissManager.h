// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXWIDGETSUGGESTIONDISMISSMANAGER_H
#define ATXWIDGETSUGGESTIONDISMISSMANAGER_H


#import <Foundation/Foundation.h>

#import "ATXInformationStore.h"

@interface ATXWidgetSuggestionDismissManager : NSObject {
    ATXInformationStore *_store;
}




+(id)startDateOfDismissHistoryConsidered;
-(BOOL)_shouldBlockSuggestionByRelatedDismissDates:(id)arg0 ;
-(BOOL)shouldBlockSuggestionWithIntent:(id)arg0 ;
-(BOOL)shouldBlockWidgetSuggestionBecauseOfPreviousDismiss:(id)arg0 kind:(id)arg1 intent:(id)arg2 ;
-(NSUInteger)userDismissCountForWidgetSuggestionWithBundleId:(id)arg0 ;
-(id)init;
-(id)initWithStore:(id)arg0 ;
-(void)userDidDismissSuggestionForWidget:(id)arg0 kind:(id)arg1 intent:(id)arg2 atDate:(id)arg3 duration:(CGFloat)arg4 ;


@end


#endif