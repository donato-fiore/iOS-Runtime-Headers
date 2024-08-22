// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONREQUESTINLINEACTIONSPROVIDER_H
#define NCNOTIFICATIONREQUESTINLINEACTIONSPROVIDER_H

@class NSArray, NSString, UIColor, NCNotificationRequest;
@protocol NCAuxiliaryOptionsProviding, NCNotificationRequestInlineActionsProviderDelegate;

#import <Foundation/Foundation.h>


@interface NCNotificationRequestInlineActionsProvider : NSObject <NCAuxiliaryOptionsProviding>



@property (readonly, copy, nonatomic) NSArray *auxiliaryOptionActions;
@property (readonly, copy, nonatomic) NSString *auxiliaryOptionsSummaryText;
@property (readonly, copy, nonatomic) UIColor *auxiliaryOptionsTextColor;
@property (readonly, copy, nonatomic) UIColor *auxiliaryOptionsTintColor;
@property (nonatomic) BOOL auxiliaryOptionsVisible; // ivar: _auxiliaryOptionsVisible
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationRequestInlineActionsProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NCNotificationRequest *notificationRequest; // ivar: _notificationRequest
@property (readonly) Class superclass;


-(id)_primaryAction;
-(id)_secondaryAction;
-(id)initWithNotificationRequest:(id)arg0 delegate:(id)arg1 ;
-(void)handlePrimaryAction:(id)arg0 ;
-(void)handleSecondaryAction:(id)arg0 ;


@end


#endif