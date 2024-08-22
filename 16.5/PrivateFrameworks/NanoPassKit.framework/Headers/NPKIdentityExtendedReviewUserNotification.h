// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKIDENTITYEXTENDEDREVIEWUSERNOTIFICATION_H
#define NPKIDENTITYEXTENDEDREVIEWUSERNOTIFICATION_H

@class NSString;


#import "NPKUserNotification.h"

@interface NPKIdentityExtendedReviewUserNotification : NPKUserNotification

@property (readonly, nonatomic) NSUInteger documentType; // ivar: _documentType
@property (readonly, nonatomic) NSString *issuerName; // ivar: _issuerName
@property (readonly, nonatomic) NSUInteger notificationType; // ivar: _notificationType


-(id)body;
-(id)identifierHashComponents;
-(id)initWithNotificationType:(NSUInteger)arg0 documentType:(NSUInteger)arg1 issuerName:(id)arg2 ;
-(id)title;


@end


#endif