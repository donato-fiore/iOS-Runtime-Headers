// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACCESSORYNETWORKINFOITEM_H
#define HFACCESSORYNETWORKINFOITEM_H

@class NSDate, NSString, NSDictionary;


#import "HFAccessoryInfoItem.h"

@interface HFAccessoryNetworkInfoItem : HFAccessoryInfoItem

@property (retain, nonatomic) NSDate *debounceDate; // ivar: _debounceDate
@property (nonatomic) NSInteger fakeNetworkStrength; // ivar: _fakeNetworkStrength
@property (retain, nonatomic) NSString *forceCurrentDeviceNetworkSSID; // ivar: _forceCurrentDeviceNetworkSSID
@property (nonatomic) NSUInteger networkInfoType; // ivar: _networkInfoType
@property (readonly, nonatomic) BOOL supportsWiFiStrengthDisplay;
@property (retain, nonatomic) NSDictionary *wifiInfo; // ivar: _wifiInfo


-(BOOL)_hiddenForType:(NSUInteger)arg0 ;
-(BOOL)_showSignalStrength:(NSUInteger)arg0 ;
-(NSInteger)_getWiFiStrength:(id)arg0 forFastUpdate:(BOOL)arg1 ;
-(NSUInteger)_nextNetworkInfoType;
-(NSUInteger)infoType;
-(id)_accessoryNetworkSSID;
-(id)_currentDeviceNetworkSSID;
-(id)_extractWiFiInfo:(id)arg0 ;
-(id)_getSignalStrengthIcon:(id)arg0 forFastUpdate:(BOOL)arg1 ;
-(id)_localizedDescriptionForType:(NSUInteger)arg0 ;
-(id)_localizedTitleForType:(NSUInteger)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 ;
-(void)_updateHomePodWiFiInfo;
-(void)toggleNetworkInfoType;


@end


#endif