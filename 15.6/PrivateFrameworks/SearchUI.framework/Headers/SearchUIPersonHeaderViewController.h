// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIPERSONHEADERVIEWCONTROLLER_H
#define SEARCHUIPERSONHEADERVIEWCONTROLLER_H

@class CNGroupIdentityHeaderViewController, NSString, NSArray, SKStatusSubscriptionService;
@protocol SKStatusSubscriptionServiceDelegate;



@interface SearchUIPersonHeaderViewController : CNGroupIdentityHeaderViewController <SKStatusSubscriptionServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSArray *statusSubcriptions; // ivar: _statusSubcriptions
@property (retain) SKStatusSubscriptionService *subscriptionService; // ivar: _subscriptionService
@property (readonly) Class superclass;


+(id)actionsViewConfiguration;
-(BOOL)userIsUnavailable;
-(id)init;
-(void)groupIdentityDidUpdate:(id)arg0 ;
-(void)subscriptionInvitationReceived:(id)arg0 ;
-(void)subscriptionReceivedStatusUpdate:(id)arg0 ;
-(void)subscriptionStateChanged:(id)arg0 ;
-(void)updateSubscriptions;
-(void)updateWithContact:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif