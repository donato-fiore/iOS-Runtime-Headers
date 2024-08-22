// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCARDITEMSCONTROLLER_H
#define SBCARDITEMSCONTROLLER_H

@class NSMutableDictionary, NSMutableArray, NSXPCListener, MCProfileConnection, NSString;
@protocol SBCardItemsControllerRemoteInterface, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "SBWalletNotificationSource.h"

@interface SBCardItemsController : NSObject <SBCardItemsControllerRemoteInterface, NSXPCListenerDelegate>

 {
    NSMutableDictionary *_cardItems;
    NSMutableArray *_connections;
    NSXPCListener *_listener;
    MCProfileConnection *_profileConnection;
    BOOL _cardWhileLockedAllowed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SBWalletNotificationSource *walletNotificationSource; // ivar: _walletNotificationSource


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_activateCardItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)_deactivateCardItem:(id)arg0 ;
-(void)_updateCardItem:(id)arg0 ;
-(void)_updateRestrictions;
-(void)_updateThumbnailForCardItem:(id)arg0 withSnapshotter:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)getCardItemsForControllerWithIdentifier:(id)arg0 withHandler:(id)arg1 ;
-(void)setCardItems:(id)arg0 forControllerWithIdentifier:(id)arg1 ;


@end


#endif