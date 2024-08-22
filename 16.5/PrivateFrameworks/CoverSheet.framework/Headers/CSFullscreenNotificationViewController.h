// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSFULLSCREENNOTIFICATIONVIEWCONTROLLER_H
#define CSFULLSCREENNOTIFICATIONVIEWCONTROLLER_H

@class NCNotificationAction, NSString, NCNotificationRequest;
@protocol CSModalViewDelegate, CSNotificationDestination, CSNotificationDispatcher;


#import "CSModalViewControllerBase.h"

@interface CSFullscreenNotificationViewController : CSModalViewControllerBase <CSModalViewDelegate, CSNotificationDestination>

 {
    NCNotificationAction *_primaryAction;
    NCNotificationAction *_secondaryAction;
    NCNotificationAction *_silenceAction;
    NCNotificationAction *_dismissAction;
}


@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CSNotificationDispatcher> *dispatcher; // ivar: _dispatcher
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NCNotificationRequest *notificationRequest; // ivar: _request
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly) Class superclass;


-(BOOL)dismissNotificationInLongLookAnimated:(BOOL)arg0 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)isNotificationContentExtensionVisible:(id)arg0 ;
-(BOOL)isPresentingNotificationInLongLook;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(NSInteger)presentationPriority;
-(NSInteger)presentationType;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithNotificationRequest:(id)arg0 ;
-(void)_dismissFromSignificantUserInteraction;
-(void)_handleAction:(id)arg0 withName:(id)arg1 ;
-(void)_handleDismissAction;
-(void)_handlePrimaryAction;
-(void)_handleSecondaryAction;
-(void)_handleSilenceAction;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)dealloc;
-(void)handlePrimaryActionForView:(id)arg0 ;
-(void)handleSecondaryActionForView:(id)arg0 ;
-(void)loadView;
-(void)lockButtonPressed:(id)arg0 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg0 ;
-(void)postNotificationRequest:(id)arg0 ;
-(void)updateNotificationRequest:(id)arg0 ;
-(void)updateNotificationSectionSettings:(id)arg0 previousSectionSettings:(id)arg1 ;
-(void)updateNotificationSystemSettings:(id)arg0 previousSystemSettings:(id)arg1 ;
-(void)volumeChanged:(id)arg0 ;
-(void)withdrawNotificationRequest:(id)arg0 ;


@end


#endif