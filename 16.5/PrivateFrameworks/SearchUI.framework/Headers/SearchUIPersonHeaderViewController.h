// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIPERSONHEADERVIEWCONTROLLER_H
#define SEARCHUIPERSONHEADERVIEWCONTROLLER_H

@class CNGroupIdentityHeaderViewController, NSString, NSArray, SKStatusSubscriptionService;
@protocol SKStatusSubscriptionServiceDelegate, NSObject;



@interface SearchUIPersonHeaderViewController : CNGroupIdentityHeaderViewController <SKStatusSubscriptionServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<NSObject> *downtimeStatusObserver; // ivar: _downtimeStatusObserver
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showingDowntimeBadge; // ivar: _showingDowntimeBadge
@property (retain) NSArray *statusSubcriptions; // ivar: _statusSubcriptions
@property (retain) SKStatusSubscriptionService *subscriptionService; // ivar: _subscriptionService
@property (readonly) Class superclass;


+(id)downtimeBadgeStyleSettings;
-(BOOL)userIsUnavailable;
-(id)STUserID;
-(id)actionsViewConfigurationWithDowntimeButton:(BOOL)arg0 ;
-(id)contactNameFor:(id)arg0 ;
-(id)init;
-(id)initWithDowntimeButton:(BOOL)arg0 ;
-(void)dealloc;
-(void)groupIdentityDidUpdate:(id)arg0 ;
-(void)handleConfirmDowntimeToggleFor:(id)arg0 ;
-(void)handleErrorResultFromDowntimeToggleFor:(id)arg0 withError:(id)arg1 ;
-(void)setupDowntimeStatusSubscription;
-(void)subscriptionInvitationReceived:(id)arg0 ;
-(void)subscriptionReceivedStatusUpdate:(id)arg0 ;
-(void)subscriptionStateChanged:(id)arg0 ;
-(void)updateDowntimeBadge;
-(void)updateDowntimeBadgeForceRecheck:(BOOL)arg0 ;
-(void)updateSubscriptions;
-(void)updateWithContact:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif