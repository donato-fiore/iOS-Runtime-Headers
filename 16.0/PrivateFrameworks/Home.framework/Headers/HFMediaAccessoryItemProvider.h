// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFMEDIAACCESSORYITEMPROVIDER_H
#define HFMEDIAACCESSORYITEMPROVIDER_H

@class NSString, HMHome, NSMutableSet;
@protocol HFMediaAccessoryCommonSettingsDelegate, HFCharacteristicValueSource;


#import "HFItemProvider.h"

@interface HFMediaAccessoryItemProvider : HFItemProvider <HFMediaAccessoryCommonSettingsDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) BOOL includeMediaSystems; // ivar: _includeMediaSystems
@property (nonatomic) BOOL includeSiriEndPointProfiles; // ivar: _includeSiriEndPointProfiles
@property (retain, nonatomic) NSMutableSet *mediaAccessoryItems; // ivar: _mediaAccessoryItems
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *overrideValueSource; // ivar: _overrideValueSource
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;


-(id)_siriEndpoints;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)initWithHome:(id)arg0 includeMediaSystems:(BOOL)arg1 ;
-(id)initWithHome:(id)arg0 includeSiriEndPointProfiles:(BOOL)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;
-(void)mediaProfileContainer:(id)arg0 didUpdateSettingKeypath:(id)arg1 value:(id)arg2 ;


@end


#endif