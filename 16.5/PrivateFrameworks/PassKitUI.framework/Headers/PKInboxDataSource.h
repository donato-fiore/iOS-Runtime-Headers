// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINBOXDATASOURCE_H
#define PKINBOXDATASOURCE_H

@class PKPaymentService, NSMutableArray, NSString;
@protocol PKPaymentServiceDelegate, PKInboxDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface PKInboxDataSource : NSObject <PKPaymentServiceDelegate>

 {
    id<PKInboxDataSourceDelegate> *_delegate;
    PKPaymentService *_paymentService;
    NSMutableArray *_activeInboxMessages;
    NSMutableArray *_hiddenInboxMessages;
    NSMutableArray *_expiredInboxMessages;
    NSMutableArray *_inboxUpdateCompletionBlocks;
    BOOL _updatingInbox;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSUInteger badgeCount; // ivar: _badgeCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasInboxMessages; // ivar: _hasInboxMessages
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inboxVisible; // ivar: _inboxVisible
@property (readonly) Class superclass;


-(id)activeInboxMessages;
-(id)expiredInboxMessages;
-(id)inboxMessageWithIdentifier:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_accountUserInvitationsCompletion:(id)arg0 ;
-(void)_updateInboxMessages;
-(void)featureApplicationAdded:(id)arg0 ;
-(void)featureApplicationChanged:(id)arg0 ;
-(void)featureApplicationRemoved:(id)arg0 ;
-(void)updateInboxWithCompletion:(id)arg0 ;


@end


#endif