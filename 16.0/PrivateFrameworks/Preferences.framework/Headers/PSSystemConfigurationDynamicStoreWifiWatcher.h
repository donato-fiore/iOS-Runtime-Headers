// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSSYSTEMCONFIGURATIONDYNAMICSTOREWIFIWATCHER_H
#define PSSYSTEMCONFIGURATIONDYNAMICSTOREWIFIWATCHER_H


#import <Foundation/Foundation.h>


@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject {
    *__SCDynamicStore _prefs;
    *__CFString _wifiKey;
    *__CFString _wifiInterface;
    *__CFString _tetheringLink;
}




+(BOOL)wifiEnabled;
+(id)sharedInstance;
-(id)_wifiNameWithState:(id)arg0 ;
-(id)_wifiPowerWithState:(id)arg0 ;
-(id)_wifiTetheringWithState:(id)arg0 ;
-(id)init;
-(id)wifiConfig;
-(void)dealloc;
-(void)findKeysAirPortState:(*id)arg0 andTetheringState:(*id)arg1 ;


@end


#endif