// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFGETSETTINGSOPERATION_H
#define WFGETSETTINGSOPERATION_H

@class NSString, NSOperationQueue, NSArray;


#import "WFOperation.h"

@interface WFGetSettingsOperation : WFOperation {
    NSString *_name;
}


@property (retain, nonatomic) NSOperationQueue *keychainQueue; // ivar: _keychainQueue
@property (nonatomic) *__SCPreferences prefs; // ivar: _prefs
@property (retain, nonatomic) NSArray *settings; // ivar: _settings
@property (copy, nonatomic) NSString *ssid; // ivar: _ssid


-(id)initWithNetworkProfile:(id)arg0 ;
-(id)initWithSSID:(id)arg0 ;
-(id)name;
-(void)dealloc;
-(void)setName:(id)arg0 ;
-(void)start;


@end


#endif