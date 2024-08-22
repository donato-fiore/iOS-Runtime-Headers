// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETWORKCHANGENOTIFIER_H
#define NETWORKCHANGENOTIFIER_H

@class NSString, NSArray;
@protocol IMSystemMonitorListener, IMConnectionMonitorDelegate;

#import <Foundation/Foundation.h>

#import "IMConnectionMonitor.h"

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate>



@property (retain, nonatomic) IMConnectionMonitor *connectionMonitor; // ivar: _connectionMonitor
@property (readonly, nonatomic) *__SCDynamicStore getDynamicStore;
@property (readonly, nonatomic) BOOL isNetworkUp;
@property (nonatomic) BOOL lastPostedNetworkUp; // ivar: _lastPostedNetworkUp
@property (readonly, nonatomic) NSString *myGatewayAddress;
@property (retain, nonatomic) NSString *myIP; // ivar: _myIP
@property (readonly, nonatomic) NSString *myIPAddress;
@property (readonly, nonatomic) NSArray *myIPAddresses;
@property (retain, nonatomic) NSArray *myIPs; // ivar: _myIPs
@property (nonatomic) *__SCDynamicStore store; // ivar: _store


+(BOOL)enableNotifications;
+(id)sharedInstance;
+(void)disableNotifications;
-(BOOL)_listenForChanges;
-(BOOL)isPrimaryCellular;
-(NSUInteger)linkQualityForInterfaceType:(NSUInteger)arg0 ;
-(id)init;
-(id)primaryInterfaceName;
-(int)linkQualityValueForInterface:(id)arg0 ;
-(int)linkQualityValueForInterfaceType:(NSUInteger)arg0 ;
-(void)_clearIPCache;
-(void)connectionMonitorDidUpdate:(id)arg0 ;
-(void)dealloc;
-(void)systemDidWake;
-(void)systemWillSleep;


@end


#endif