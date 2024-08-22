// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNNOTIFICATIONCATEGORY_H
#define UNNOTIFICATIONCATEGORY_H

@class NSArray, NSString;
@protocol NSMutableCopying, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UNNotificationAction.h"

@interface UNNotificationCategory : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, copy, nonatomic) NSString *actionsMenuTitle; // ivar: _actionsMenuTitle
@property (readonly, copy, nonatomic) UNNotificationAction *alternateAction; // ivar: _alternateAction
@property (readonly, nonatomic) NSUInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, copy, nonatomic) NSString *categorySummaryFormat; // ivar: _categorySummaryFormat
@property (readonly, copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder; // ivar: _hiddenPreviewsBodyPlaceholder
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *intentIdentifiers; // ivar: _intentIdentifiers
@property (readonly, nonatomic) NSUInteger listPriority; // ivar: _listPriority
@property (readonly, copy, nonatomic) NSArray *minimalActions; // ivar: _minimalActions
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


+(BOOL)supportsSecureCoding;
+(id)categoryWithIdentifier:(id)arg0 actions:(id)arg1 intentIdentifiers:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 categorySummaryFormat:(id)arg4 options:(NSUInteger)arg5 ;
+(id)categoryWithIdentifier:(id)arg0 actions:(id)arg1 intentIdentifiers:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(NSUInteger)arg4 ;
+(id)categoryWithIdentifier:(id)arg0 actions:(id)arg1 intentIdentifiers:(id)arg2 options:(NSUInteger)arg3 ;
+(id)categoryWithIdentifier:(id)arg0 actions:(id)arg1 minimalActions:(id)arg2 intentIdentifiers:(id)arg3 hiddenPreviewsBodyPlaceholder:(id)arg4 categorySummaryFormat:(id)arg5 options:(NSUInteger)arg6 ;
+(id)categoryWithIdentifier:(id)arg0 actions:(id)arg1 minimalActions:(id)arg2 intentIdentifiers:(id)arg3 hiddenPreviewsBodyPlaceholder:(id)arg4 options:(NSUInteger)arg5 ;
+(id)categoryWithIdentifier:(id)arg0 actions:(id)arg1 minimalActions:(id)arg2 intentIdentifiers:(id)arg3 options:(NSUInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithIdentifier:(id)arg0 actions:(id)arg1 minimalActions:(id)arg2 alternateAction:(id)arg3 intentIdentifiers:(id)arg4 hiddenPreviewsBodyPlaceholder:(id)arg5 categorySummaryFormat:(id)arg6 actionsMenuTitle:(id)arg7 options:(NSUInteger)arg8 backgroundStyle:(NSUInteger)arg9 listPriority:(NSUInteger)arg10 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif