// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFGETSETTINGSOPERATION_H
#define WFGETSETTINGSOPERATION_H

@class NSOperationQueue, NSArray, NSString;


#import "WFOperation.h"

@interface WFGetSettingsOperation : WFOperation

@property (retain, nonatomic) NSOperationQueue *keychainQueue; // ivar: _keychainQueue
@property (nonatomic) *__SCPreferences prefs; // ivar: _prefs
@property (retain, nonatomic) NSArray *settings; // ivar: _settings
@property (copy, nonatomic) NSString *ssid; // ivar: _ssid


-(id)initWithNetworkProfile:(id)arg0 ;
-(id)initWithSSID:(id)arg0 ;
-(void)dealloc;
-(void)start;


@end


#endif