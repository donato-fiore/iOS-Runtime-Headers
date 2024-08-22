// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONREQUESTINLINEACTIONSPROVIDER_H
#define NCNOTIFICATIONREQUESTINLINEACTIONSPROVIDER_H

@class NSString, NCNotificationRequest;
@protocol NCAuxiliaryOptionsProviding, NCNotificationRequestInlineActionsProviderDelegate;

#import <Foundation/Foundation.h>


@interface NCNotificationRequestInlineActionsProvider : NSObject <NCAuxiliaryOptionsProviding>



@property (nonatomic) BOOL auxiliaryOptionsVisible; // ivar: _auxiliaryOptionsVisible
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationRequestInlineActionsProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NCNotificationRequest *notificationRequest; // ivar: _notificationRequest
@property (nonatomic) NSUInteger numberOfOptionButtons; // ivar: _numberOfOptionButtons
@property (readonly, copy, nonatomic) NSString *optionsSummaryText;
@property (readonly, copy, nonatomic) NSString *optionsSummaryTitle;
@property (readonly) Class superclass;


-(id)_primaryAction;
-(id)_secondaryAction;
-(id)initWithNotificationRequest:(id)arg0 delegate:(id)arg1 ;
-(void)configureOptionButtons:(id)arg0 ;
-(void)handlePrimaryAction:(id)arg0 ;
-(void)handleSecondaryAction:(id)arg0 ;


@end


#endif