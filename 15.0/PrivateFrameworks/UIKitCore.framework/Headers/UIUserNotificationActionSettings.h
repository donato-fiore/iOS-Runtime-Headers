// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIUSERNOTIFICATIONACTIONSETTINGS_H
#define UIUSERNOTIFICATIONACTIONSETTINGS_H

@class NSDictionary, NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIUserNotificationActionSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (copy, nonatomic) NSDictionary *actionsByContext; // ivar: _actionsByContext
@property (copy, nonatomic) NSString *category; // ivar: _category


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_maximumActionsForContext:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)actions;
-(id)actionsForContext:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCategory:(id)arg0 actionsByContext:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)validatedSettings;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif