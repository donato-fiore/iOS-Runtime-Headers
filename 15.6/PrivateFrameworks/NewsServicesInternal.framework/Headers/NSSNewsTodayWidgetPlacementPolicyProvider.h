// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSNEWSTODAYWIDGETPLACEMENTPOLICYPROVIDER_H
#define NSSNEWSTODAYWIDGETPLACEMENTPOLICYPROVIDER_H


#import <Foundation/Foundation.h>


@interface NSSNewsTodayWidgetPlacementPolicyProvider : NSObject



+(id)newsSupportedCountries;
+(id)parsecEditorialLocales;
-(BOOL)isTodayWidgetPermittedOnHomeScreenForLocale:(id)arg0 ;
-(id)init;


@end


#endif