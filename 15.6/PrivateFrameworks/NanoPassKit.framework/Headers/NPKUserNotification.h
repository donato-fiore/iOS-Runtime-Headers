// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKUSERNOTIFICATION_H
#define NPKUSERNOTIFICATION_H

@class NSString, NSArray, NSDictionary;
@protocol NPKUserNotificationModel;

#import <Foundation/Foundation.h>


@interface NPKUserNotification : NSObject <NPKUserNotificationModel>



@property (readonly, nonatomic) NSString *body;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *identifierHashComponents;
@property (readonly, nonatomic) BOOL isSuppressed;
@property (readonly, nonatomic) NSString *notificationCategoryIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDictionary *userInfo;


+(id)generateModelIdentifierWith:(id)arg0 ;


@end


#endif