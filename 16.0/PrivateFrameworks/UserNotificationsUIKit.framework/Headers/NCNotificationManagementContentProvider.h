// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONMANAGEMENTCONTENTPROVIDER_H
#define NCNOTIFICATIONMANAGEMENTCONTENTPROVIDER_H

@class NSArray, NSString, UIColor, NCNotificationRequest;
@protocol NCAuxiliaryOptionsProviding, NCNotificationManagementContentProviderDelegate;

#import <Foundation/Foundation.h>


@interface NCNotificationManagementContentProvider : NSObject <NCAuxiliaryOptionsProviding>



@property (readonly, copy, nonatomic) NSArray *auxiliaryOptionActions;
@property (readonly, copy, nonatomic) NSString *auxiliaryOptionsSummaryText;
@property (readonly, copy, nonatomic) UIColor *auxiliaryOptionsTextColor;
@property (readonly, copy, nonatomic) UIColor *auxiliaryOptionsTintColor;
@property (nonatomic) BOOL auxiliaryOptionsVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<NCNotificationManagementContentProviderDelegate> *managementDelegate; // ivar: _managementDelegate
@property (retain, nonatomic) NCNotificationRequest *notificationRequest; // ivar: _notificationRequest
@property (readonly) Class superclass;


-(id)initWithNotificationRequest:(id)arg0 managementDelegate:(id)arg1 ;
-(void)handleManageAction:(id)arg0 ;


@end


#endif