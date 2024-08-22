// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTEDPAGESCONTACTSWIDGETDATASOURCE_H
#define ATXSUGGESTEDPAGESCONTACTSWIDGETDATASOURCE_H

@protocol ATXSuggestedPagesWidgetDataSource;

#import <Foundation/Foundation.h>

#import "ATXSuggestedPagesTunableConstants.h"

@interface ATXSuggestedPagesContactsWidgetDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>

 {
    ATXSuggestedPagesTunableConstants *_suggestedPagesTunableConstants;
}




-(id)_createMediumContactsWidgetForPeople:(id)arg0 entities:(id)arg1 ;
-(id)_createSmallContactsWidgetForPeople:(id)arg0 ;
-(id)init;
-(id)provideWidgetsForPageType:(NSInteger)arg0 environment:(id)arg1 ;


@end


#endif