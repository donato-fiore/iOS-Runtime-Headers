// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNEWSTODAYWIDGETPLACEMENTPOLICYPROVIDER_H
#define ATXNEWSTODAYWIDGETPLACEMENTPOLICYPROVIDER_H


#import <Foundation/Foundation.h>


@interface ATXNewsTodayWidgetPlacementPolicyProvider : NSObject



+(id)_newsSupportedCountries;
+(id)_parsecEditorialLocales;
-(BOOL)isTodayWidgetPermittedOnHomeScreenForLocale:(id)arg0 ;
-(id)init;


@end


#endif