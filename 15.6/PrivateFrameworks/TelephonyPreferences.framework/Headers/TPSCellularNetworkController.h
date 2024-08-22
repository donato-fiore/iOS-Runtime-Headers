// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCELLULARNETWORKCONTROLLER_H
#define TPSCELLULARNETWORKCONTROLLER_H

@class NSString, NSArray, CTNetworkSelectionInfo, CTXPCServiceSubscriptionContext;
@protocol TPSRegistrationTelephonyControllerDelegate;

#import <Foundation/Foundation.h>

#import "TPSRegistrationTelephonyController.h"
#import "TPSCellularNetworkItem.h"

@interface TPSCellularNetworkController : NSObject <TPSRegistrationTelephonyControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *networkItems; // ivar: _networkItems
@property (readonly, nonatomic, getter=isNetworkSelectionEnabled) BOOL networkSelectionEnabled;
@property (retain, nonatomic) CTNetworkSelectionInfo *networkSelectionInfo; // ivar: _networkSelectionInfo
@property (nonatomic) NSInteger networkSelectionMode; // ivar: _networkSelectionMode
@property (copy, nonatomic) NSArray *networks; // ivar: _networks
@property (readonly, nonatomic) TPSRegistrationTelephonyController *registrationController; // ivar: _registrationController
@property (retain, nonatomic) TPSCellularNetworkItem *selectedNetworkItem; // ivar: _selectedNetworkItem
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(id)networkItemAtIndex:(NSInteger)arg0 ;
-(id)networkItemForNetwork:(id)arg0 ;
-(void)networkSelectionInfoChangedForRegistrationController:(id)arg0 ;
-(void)networksChangedForRegistrationController:(id)arg0 ;
-(void)selectNetworkItemAtIndex:(NSUInteger)arg0 ;
-(void)selectNetworkSelectionMode:(NSInteger)arg0 ;
-(void)updateNetworkSelectionModeForNetworkSelectionInfo:(id)arg0 ;
-(void)updateSelectedNetworkForNetworkSelectionInfo:(id)arg0 ;


@end


#endif