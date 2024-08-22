// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDFAMILYINVITENOTIFICATIONCONTEXT_H
#define IMDFAMILYINVITENOTIFICATIONCONTEXT_H

@class NSArray, NSString;
@protocol IMDFamilyNotificationContextProtocol;

#import <Foundation/Foundation.h>


@interface IMDFamilyInviteNotificationContext : NSObject <IMDFamilyNotificationContextProtocol>



@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canPopulateUserInfoForMessageBalloonBundleID:(id)arg0 ;
-(BOOL)inviteeIsTeen;
-(id)notificationCategories;
-(void)populateUserInfoForNotificationContent:(id)arg0 messageBalloonBundleID:(id)arg1 payloadData:(id)arg2 ;


@end


#endif