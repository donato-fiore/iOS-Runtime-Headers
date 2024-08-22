// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNUNNOTIFICATIONCATEGORYMAPPER_H
#define CALNUNNOTIFICATIONCATEGORYMAPPER_H


#import <Foundation/Foundation.h>


@interface CALNUNNotificationCategoryMapper : NSObject



+(NSUInteger)_calnNotificationCategoryOptionsFromUNNotificationCategoryOptions:(NSUInteger)arg0 ;
+(NSUInteger)_unNotificationCategoryOptionsFromCALNNotificationCategoryOptions:(NSUInteger)arg0 ;
+(id)_calnNotificationCategoryFromUNNotificationCategory:(id)arg0 ;
+(id)_unNotificationCategoryFromCALNNotificationCategory:(id)arg0 ;
+(id)calnNotificationCategoriesFromUNNotificationCategories:(id)arg0 ;
+(id)unNotificationCategoriesFromCALNNotificationCategories:(id)arg0 ;


@end


#endif