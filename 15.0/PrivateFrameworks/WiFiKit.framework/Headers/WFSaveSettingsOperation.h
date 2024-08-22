// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSAVESETTINGSOPERATION_H
#define WFSAVESETTINGSOPERATION_H

@class NSOperationQueue, NSArray, NSString;


#import "WFOperation.h"

@interface WFSaveSettingsOperation : WFOperation

@property (nonatomic, getter=isCurrentNetwork) BOOL currentNetwork; // ivar: _currentNetwork
@property (retain, nonatomic) NSOperationQueue *keychainQueue; // ivar: _keychainQueue
@property (nonatomic) *__SCPreferences prefs; // ivar: _prefs
@property (retain, nonatomic) NSArray *settings; // ivar: _settings
@property (copy, nonatomic) NSString *ssid; // ivar: _ssid


-(id)initWithNetworkProfile:(id)arg0 settings:(id)arg1 ;
-(id)initWithSSID:(id)arg0 settings:(id)arg1 ;
-(struct __SCNetworkSet *)_createNewSetForNetworkNamed:(id)arg0 ;
-(struct __SCNetworkSet *)_defaultSetRetained;
-(void)_applyProxySettings:(id)arg0 service:(struct __SCNetworkProtocol *)arg1 ;
-(void)dealloc;
-(void)start;


@end


#endif