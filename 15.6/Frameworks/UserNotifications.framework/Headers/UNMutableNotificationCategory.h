// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNMUTABLENOTIFICATIONCATEGORY_H
#define UNMUTABLENOTIFICATIONCATEGORY_H

@class NSArray, NSString;


#import "UNNotificationCategory.h"
#import "UNNotificationAction.h"

@interface UNMutableNotificationCategory : UNNotificationCategory

@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *actionsMenuTitle;
@property (copy, nonatomic) UNNotificationAction *alternateAction;
@property (nonatomic) NSUInteger backgroundStyle;
@property (copy, nonatomic) NSString *categorySummaryFormat;
@property (copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder;
@property (copy, nonatomic) NSArray *intentIdentifiers;
@property (nonatomic) NSUInteger listPriority;
@property (copy, nonatomic) NSArray *minimalActions;
@property (nonatomic) NSUInteger options;


-(id)initWithIdentifier:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif